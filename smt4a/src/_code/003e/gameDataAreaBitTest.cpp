#include "common.h"

extern "C" {

typedef struct Area28350 {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ u8 bits[1];   /* bit set, indexed from 0 */
} Area28350;

Area28350 *gameDataBlockGetArea28350(void);

/* Tests bit `bit` of the area's bit set. */
u8 gameDataAreaBitTest(u32 bit)
{
    Area28350 *area = gameDataBlockGetArea28350();
    u32 byte = bit >> 3;
    u32 shift = bit & 7;

    return (area->bits[byte] & (1 << shift)) != 0;
}

} /* extern "C" */
