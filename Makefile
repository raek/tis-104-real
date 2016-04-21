DEVICE ?= /dev/ttyACM0
CFLAGS = -Iu8glib/csrc -DU8G_HW_SPI_2X

.DEFAULT_GOAL := out/${TARGET}.hex

out/%.o:%.c
	mkdir -p $(dir $@)
	avr-gcc -o $@ -c $^ ${CFLAGS} \
		-std=c11 -mmcu=atmega328p -g -Os -DF_CPU=16000000ul

%.elf:
	mkdir -p $(dir $@)
	avr-gcc -o $@ $^ \
		-std=c11 -mmcu=atmega328p -g -Os -DF_CPU=16000000ul
	avr-objdump -d $@ > $(basename $@).s

%.hex: %.elf
	avr-objcopy -j .text -j .data -O ihex $< $@

.PHONY: flash
flash: out/${TARGET}.hex
	avrdude -v -p m328p -c arduino -P ${DEVICE} -U flash:w:$<:i

out/blink.elf: out/blink.o

out/sender.elf: out/sender.o out/uart.o

out/receiver.elf: out/receiver.o out/uart.o

FONT_SRCS = $(addprefix u8glib/fntsrc/,u8g_font_10x20.c)
FONT_OBJS = $(addprefix out/,$(patsubst %.c,%.o,${FONT_SRCS}))
U8GLIB_SRCS = $(addprefix u8glib/csrc/,u8g_dev_ili9225_176x220.c u8g_com_atmega_sw_spi.c u8g_com_atmega_hw_spi.c u8g_com_api.c u8g_pb.c u8g_pb8h8.c u8g_page.c u8g_delay.c u8g_com_io.c u8g_state.c u8g_ll_api.c u8g_font.c u8g_clip.c u8g_rot.c)
U8GLIB_OBJS = $(addprefix out/,$(patsubst %.c,%.o,${U8GLIB_SRCS}))

out/display.elf: out/display.o ${U8GLIB_OBJS} ${FONT_OBJS}
