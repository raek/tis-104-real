#include "u8g.h"
#include <avr/interrupt.h>
#include <avr/io.h>

u8g_t u8g;

void draw(void)
{
    u8g_SetFont(&u8g, u8g_font_6x10);
    u8g_DrawStr(&u8g, 0, 15, "Hello World!");
}

int main(void)
{
    /* select minimal prescaler (max system speed) */
    //CLKPR = 0x80;
    //CLKPR = 0x00;
    /*
     * CS: PORTB, Bit 2 --> PN(1,2)
     * A0: PORTB, Bit 1 --> PN(1,1)
     * SCK: PORTB, Bit 5 --> PN(1,5)
     * MOSI: PORTB, Bit 3 --> PN(1,3)
     * RST: PORTB, Bit 0 --> PN(1,0)
     */

    u8g_InitSPI(&u8g, &u8g_dev_ili9225_176x220_sw_spi, PN(1, 5), PN(1, 3), PN(1, 2), PN(1, 1), PN(1, 0));

    for (;;)
    {
        u8g_FirstPage(&u8g);
        do
        {
            draw();
        } while ( u8g_NextPage(&u8g) );
        u8g_Delay(100);
    }
    return 0;
}
