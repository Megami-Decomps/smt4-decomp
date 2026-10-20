#include "common.h"

extern "C" {

extern u32 DAT_005b3cb0[];

/* Returns element `slot` of the DAT_005b3cb0 array. */
u32 asdModelGetSlotArray2(s32 slot)
{
    return DAT_005b3cb0[slot];
}

} /* extern "C" */
