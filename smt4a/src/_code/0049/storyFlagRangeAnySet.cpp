#include "shard/Shard0049.h"

extern "C" {

extern s32 flagValueIsPositive(u32 index);

/* True when flagValueIsPositive holds for any index in 0x3B7..0x79E. */
u32 storyFlagRangeAnySet(void)
{
    u32 index = 0x3B7;

    do {
        if (flagValueIsPositive(index) != 0) {
            return 1;
        }
        index = index + 1;
    } while (index <= 0x47E);
    index = 0x47F;
    do {
        if (flagValueIsPositive(index) != 0) {
            return 1;
        }
        index = index + 1;
    } while (index <= 0x79E);
    return 0;
}

} /* extern "C" */
