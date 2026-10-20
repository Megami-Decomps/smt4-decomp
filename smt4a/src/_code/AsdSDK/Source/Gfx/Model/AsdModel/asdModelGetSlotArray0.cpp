#include "common.h"

extern "C" {

extern u32 DAT_005b3ca0[];

/* Returns element `slot` of the DAT_005b3ca0 array. */
u32 asdModelGetSlotArray0(s32 slot)
{
    return DAT_005b3ca0[slot];
}

} /* extern "C" */
