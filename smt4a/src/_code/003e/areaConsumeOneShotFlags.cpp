/* NON_MATCHING: the bit test's shift count lands in r1; retail keeps it in r2 (clear sequence matches). */
#include "common.h"

extern "C" u8 *gameDataBlockGetArea2D68(void);

/* Consume either of the two one-shot flags in the area block. */
extern "C" s32 areaConsumeOneShotFlags(s32 index)
{
    if (index != 129 && index != 128) {
        return 0;
    }
    if ((gameDataBlockGetArea2D68()[(u32)index >> 3] & (1U << ((u32)index & 7))) != 0) {
        u8 *area = gameDataBlockGetArea2D68();
        s32 byte = index / 8;
        s32 bit = index % 8;
        u8 *flag = area + byte;
        u32 mask = 1 << bit;
        *flag &= ~mask;
        return 1;
    }
    return 0;
}
