/* NON_MATCHING: signed bit-index division/remainder and mask fusion allocate different registers from retail. */
#include "common.h"

extern "C" u8 *gameDataBlockGetArea2D68(void);

/* Consume either of the two one-shot flags in the area block. */
extern "C" s32 areaConsumeOneShotFlags(s32 index)
{
    if (index != 129 && index != 128) {
        return 0;
    }
    if ((gameDataBlockGetArea2D68()[(u32)index >> 3] & (1U << ((u32)index & 7))) != 0) {
        u8 *flag = gameDataBlockGetArea2D68() + index / 8;
        *flag &= ~(1 << (index % 8));
        return 1;
    }
    return 0;
}
