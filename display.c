#include "u8g.h"
#include <avr/interrupt.h>
#include <avr/io.h>

u8g_t u8g;
uint16_t count;
char buf[6];

void draw(void)
{
    u8g_SetColorIndex(&u8g, 255);
    u8g_SetFont(&u8g, u8g_font_10x20);
    u8g_SetRot270(&u8g);
    u8g_DrawStr(&u8g, 0, 15, buf);
}

int main(void)
{
    /* select minimal prescaler (max system speed) */
    //CLKPR = 0x80;
    //CLKPR = 0x00;

    /*
     * RST: PORTD, Bit 2 --> PN(3,2)
     * A0: PORTD, Bit 3 --> PN(3,3)
     * CS: PORTD, Bit 4 --> PN(3,4)
     * MOSI: PORTD, Bit 5 --> PN(3,5)
     * SCK: PORTD, Bit 6 --> PN(3,6)
     */

    //u8g_InitSPI(&u8g, &u8g_dev_ili9225_176x220_sw_spi, PN(3, 6), PN(3, 5), PN(3, 4), PN(3, 3), PN(3, 2));

    u8g_InitHWSPI(&u8g, &u8g_dev_ili9225_176x220_hw_spi, PN(3, 4), PN(3, 3), PN(3, 2));

    for (;;)
    {
        snprintf(buf, 6, "%05d", count);
        u8g_FirstPage(&u8g);
        do
        {
            draw();
        } while ( u8g_NextPage(&u8g) );
        //u8g_Delay(100);
        count += 1;
    }
    return 0;
}
