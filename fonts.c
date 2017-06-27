#ifdef __AVR__
#include <avr/pgmspace.h>
#else
#define PROGMEM
#endif
#include "fonts.h"

const uint8_t monoblipp6x8[] PROGMEM = {
    0x28, 0x28, 0x28, 0x28, 0x28, 0x28, // 0x00 Horizontal lines
    0x00, 0x00, 0xff, 0x00, 0xff, 0x00, // 0x01 Vertical lines
    0x28, 0x28, 0xe8, 0x08, 0xf8, 0x00, // 0x02 Top right corner
    0x00, 0x00, 0xf8, 0x08, 0xe8, 0x28, // 0x03 Top left corner
    0x28, 0x28, 0x2f, 0x20, 0x3f, 0x00, // 0x04 Bottom right corner
    0x00, 0x00, 0x3f, 0x20, 0x2f, 0x28, // 0x05 Bottom left corner
    0x28, 0x28, 0xef, 0x00, 0xff, 0x00, // 0x06 Right side T
    0x00, 0x00, 0xff, 0x00, 0xef, 0x28, // 0x07 Left side T
    0x28, 0x28, 0x2f, 0x20, 0x2f, 0x28, // 0x08 Bottom side T
    0x28, 0x28, 0xe8, 0x08, 0xe8, 0x28, // 0x09 Top side T
    0x28, 0x28, 0xef, 0x00, 0xef, 0x28, // 0x0A Middle X
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x0B
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x0C
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x0D
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x0E
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x0F

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x10
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x11
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x12
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x13
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x14
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x15
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x16
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x17
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x18
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x19
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x1A
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x1B
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x1C
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x1D
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x1E
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x1F

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // 0x20 Space
    0x00, 0x00, 0x00, 0x5f, 0x00, 0x00, // 0x21 !
    0x00, 0x00, 0x03, 0x00, 0x03, 0x00, // 0x22 "
    0x00, 0x14, 0x7f, 0x14, 0x7f, 0x14, // 0x23 #
    0x00, 0x24, 0x2a, 0x7f, 0x2a, 0x12, // 0x24 $
    0x00, 0x23, 0x13, 0x08, 0x64, 0x62, // 0x25 %
    0x00, 0x36, 0x49, 0x49, 0x36, 0x50, // 0x26 &
    0x00, 0x00, 0x00, 0x03, 0x00, 0x00, // 0x27 '
    0x00, 0x00, 0x1c, 0x22, 0x41, 0x00, // 0x28 (
    0x00, 0x00, 0x41, 0x22, 0x1c, 0x00, // 0x29 )
    0x00, 0x08, 0x2a, 0x1c, 0x2a, 0x08, // 0x2A *
    0x00, 0x08, 0x08, 0x3e, 0x08, 0x08, // 0x2B +
    0x00, 0x00, 0x80, 0x40, 0x00, 0x00, // 0x2C ,
    0x00, 0x08, 0x08, 0x08, 0x08, 0x08, // 0x2D -
    0x00, 0x00, 0x00, 0x40, 0x00, 0x00, // 0x2E .
    0x00, 0x60, 0x10, 0x08, 0x04, 0x03, // 0x2F /

    0x00, 0x3e, 0x41, 0x41, 0x41, 0x3e, // 0x30 0
    0x00, 0x00, 0x42, 0x7f, 0x40, 0x00, // 0x31 1
    0x00, 0x42, 0x61, 0x51, 0x49, 0x46, // 0x32 2
    0x00, 0x22, 0x41, 0x49, 0x49, 0x36, // 0x33 3
    0x00, 0x18, 0x14, 0x12, 0x11, 0x7f, // 0x34 4
    0x00, 0x27, 0x45, 0x45, 0x45, 0x39, // 0x35 5
    0x00, 0x3c, 0x4a, 0x49, 0x49, 0x30, // 0x36 6
    0x00, 0x01, 0x01, 0x71, 0x09, 0x07, // 0x37 7
    0x00, 0x36, 0x49, 0x49, 0x49, 0x36, // 0x38 8
    0x00, 0x06, 0x49, 0x49, 0x29, 0x1e, // 0x39 9
    0x00, 0x00, 0x00, 0x44, 0x00, 0x00, // 0x3A :
    0x00, 0x00, 0x80, 0x44, 0x00, 0x00, // 0x3B ;
    0x00, 0x00, 0x10, 0x28, 0x44, 0x00, // 0x3C <
    0x00, 0x28, 0x28, 0x28, 0x28, 0x28, // 0x3D =
    0x00, 0x00, 0x44, 0x28, 0x10, 0x00, // 0x3E >
    0x00, 0x02, 0x01, 0x51, 0x09, 0x06, // 0x3F ?

    0x7e, 0x81, 0x99, 0xa5, 0xa5, 0x3e, // 0x40 @
    0x00, 0x7e, 0x11, 0x11, 0x11, 0x7e, // 0x41 A
    0x00, 0x7f, 0x49, 0x49, 0x49, 0x36, // 0x42 B
    0x00, 0x3e, 0x41, 0x41, 0x41, 0x22, // 0x43 C
    0x00, 0x7f, 0x41, 0x41, 0x41, 0x3e, // 0x44 D
    0x00, 0x7f, 0x49, 0x49, 0x49, 0x41, // 0x45 E
    0x00, 0x7f, 0x09, 0x09, 0x09, 0x01, // 0x46 F
    0x00, 0x3e, 0x41, 0x49, 0x49, 0x3a, // 0x47 G
    0x00, 0x7f, 0x08, 0x08, 0x08, 0x7f, // 0x48 H
    0x00, 0x00, 0x41, 0x7f, 0x41, 0x00, // 0x49 I
    0x00, 0x20, 0x40, 0x40, 0x3f, 0x00, // 0x4A J
    0x00, 0x7f, 0x08, 0x08, 0x14, 0x63, // 0x4B K
    0x00, 0x7f, 0x40, 0x40, 0x40, 0x40, // 0x4C L
    0x00, 0x7f, 0x02, 0x04, 0x02, 0x7f, // 0x4D M
    0x00, 0x7f, 0x04, 0x08, 0x10, 0x7f, // 0x4E N
    0x00, 0x3e, 0x41, 0x41, 0x41, 0x3e, // 0x4F O

    0x00, 0x7f, 0x09, 0x09, 0x09, 0x06, // 0x50 P
    0x00, 0x3e, 0x41, 0x51, 0x21, 0x5e, // 0x51 Q
    0x00, 0x7f, 0x09, 0x09, 0x09, 0x76, // 0x52 R
    0x00, 0x26, 0x49, 0x49, 0x49, 0x32, // 0x53 S
    0x00, 0x01, 0x01, 0x7f, 0x01, 0x01, // 0x54 T
    0x00, 0x3f, 0x40, 0x40, 0x40, 0x3f, // 0x55 U
    0x00, 0x1f, 0x20, 0x40, 0x20, 0x1f, // 0x56 V
    0x00, 0x7f, 0x20, 0x10, 0x20, 0x7f, // 0x57 W
    0x00, 0x63, 0x14, 0x08, 0x14, 0x63, // 0x58 X
    0x00, 0x03, 0x04, 0x78, 0x04, 0x03, // 0x59 Y
    0x00, 0x61, 0x51, 0x49, 0x45, 0x43, // 0x5A Z
    0x00, 0x00, 0x7f, 0x41, 0x41, 0x00, // 0x5B [
    0x00, 0x03, 0x04, 0x08, 0x10, 0x60, // 0x5C Backslash
    0x00, 0x00, 0x41, 0x41, 0x7f, 0x00, // 0x5D ]
    0x00, 0x04, 0x02, 0x01, 0x02, 0x04, // 0x5E ^
    0x00, 0x40, 0x40, 0x40, 0x40, 0x40, // 0x5F _

    0x00, 0x00, 0x01, 0x02, 0x04, 0x00, // 0x60 `
    0x00, 0x38, 0x44, 0x44, 0x24, 0x7c, // 0x61 a
    0x00, 0x7f, 0x48, 0x44, 0x44, 0x38, // 0x62 b
    0x00, 0x38, 0x44, 0x44, 0x44, 0x28, // 0x63 c
    0x00, 0x38, 0x44, 0x44, 0x24, 0x7f, // 0x64 d
    0x00, 0x38, 0x54, 0x54, 0x54, 0x48, // 0x65 e
    0x00, 0x08, 0x7e, 0x09, 0x09, 0x02, // 0x66 f
    0x00, 0x98, 0xa4, 0xa4, 0xa4, 0x7c, // 0x67 g
    0x00, 0x7f, 0x08, 0x04, 0x04, 0x78, // 0x68 h
    0x00, 0x00, 0x44, 0x7d, 0x40, 0x00, // 0x69 i
    0x00, 0x80, 0x80, 0x84, 0x7d, 0x00, // 0x6A j
    0x00, 0x7f, 0x10, 0x10, 0x28, 0x44, // 0x6B k
    0x00, 0x00, 0x3f, 0x40, 0x40, 0x00, // 0x6C l
    0x00, 0x7c, 0x04, 0x7c, 0x04, 0x78, // 0x6D m
    0x00, 0x7c, 0x08, 0x04, 0x04, 0x78, // 0x6E n
    0x00, 0x38, 0x44, 0x44, 0x44, 0x38, // 0x6F o

    0x00, 0xfc, 0x24, 0x24, 0x24, 0x18, // 0x70 p
    0x00, 0x18, 0x24, 0x24, 0x24, 0xfc, // 0x71 q
    0x00, 0x7c, 0x08, 0x04, 0x04, 0x08, // 0x72 r
    0x00, 0x48, 0x54, 0x54, 0x54, 0x24, // 0x73 s
    0x00, 0x04, 0x3f, 0x44, 0x44, 0x20, // 0x74 t
    0x00, 0x3c, 0x40, 0x40, 0x20, 0x7c, // 0x75 u
    0x00, 0x1c, 0x20, 0x40, 0x20, 0x1c, // 0x76 v
    0x00, 0x3c, 0x40, 0x3c, 0x40, 0x3c, // 0x77 w
    0x00, 0x44, 0x28, 0x10, 0x28, 0x44, // 0x78 x
    0x00, 0x9c, 0xa0, 0xa0, 0xa0, 0x7c, // 0x79 y
    0x00, 0x44, 0x64, 0x54, 0x4c, 0x44, // 0x7A z
    0x00, 0x00, 0x08, 0x36, 0x41, 0x00, // 0x7B {
    0x00, 0x00, 0x00, 0x7f, 0x00, 0x00, // 0x7C |
    0x00, 0x00, 0x41, 0x36, 0x08, 0x00, // 0x7D }
    0x00, 0x06, 0x01, 0x02, 0x04, 0x03, // 0x7E ~
    0x00, 0x55, 0x2a, 0x55, 0x2a, 0x55, // 0x7F Block
};
