/* NON_MATCHING: armcc folds the bit test into `lsr r0, r0, #16`; retail uses `lsrs r0, r0, #16; movne r0, #1`. */
#include "common.h"

extern "C" {

/* Whether bit 16 of the flags word at +0x754 is set. */
s32 FUN_002a6d08(u8 *obj)
{
    if (*(u32 *)(obj + 0x754) & 0x10000) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
