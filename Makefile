DEVICE ?= /dev/ttyACM0

.DEFAULT_GOAL := out/${TARGET}.hex

out/%.o:%.c
	mkdir -p $(dir $@)
	#avr-gcc -o $@ -c $^ \
	#	-std=c11 -mmcu=atmega328p -g -Os -DF_CPU=16000000ul
	gcc -o $@ -c $^ \
		-std=c11 -g -Os

out/%.o:%.cpp
	mkdir -p $(dir $@)
	#avr-g++ -o $@ -c $^ \
	#	-ITFT_22_ILI9225 \
	#	-mmcu=atmega328p -g -Os -DF_CPU=16000000ul
	g++ -o $@ -c $^ \
		-ITFT_22_ILI9225 \
		-g -Os

%.elf:
	mkdir -p $(dir $@)
	#avr-gcc -o $@ $^ \
	#	-std=c11 -mmcu=atmega328p -g -Os -DF_CPU=16000000ul
	gcc -o $@ $^ \
		-std=c11 -g -Os
	#avr-objdump -d $@ > $(basename $@).s

%.hex: %.elf
	#avr-objcopy -j .text -j .data -O ihex $< $@
	touch $@

.PHONY: flash
flash: out/${TARGET}.hex
	avrdude -v -p m328p -c arduino -P ${DEVICE} -U flash:w:$<:i

out/blink.elf: out/blink.o

out/sender.elf: out/sender.o out/uart.o

out/receiver.elf: out/receiver.o out/uart.o

LCD_SOURCES = $(addprefix TFT_22_ILI9225/,TFT_22_ILI9225.cpp DefaultFonts.c)
LCD_OBJECTS = $(addprefix out/,$(patsubst %.cpp,%.o,$(patsubst %.c,%.o,${LCD_SOURCES})))

out/display.elf: out/display.o ${LCD_OBJECTS}
