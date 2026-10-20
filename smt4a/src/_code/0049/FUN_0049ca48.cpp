#include "shard/Shard0049.h"

extern "C" {

extern s32 FUN_00481104(u32 index);

/* True when FUN_00481104 holds for any index in 0x3B7..0x79E. */
u32 FUN_0049ca48(void)
{
    u32 index = 0x3B7;

    do {
        if (FUN_00481104(index) != 0) {
            return 1;
        }
        index = index + 1;
    } while (index <= 0x47E);
    index = 0x47F;
    do {
        if (FUN_00481104(index) != 0) {
            return 1;
        }
        index = index + 1;
    } while (index <= 0x79E);
    return 0;
}

} /* extern "C" */
