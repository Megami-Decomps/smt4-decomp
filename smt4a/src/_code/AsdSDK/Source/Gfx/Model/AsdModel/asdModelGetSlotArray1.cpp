#include "common.h"

extern "C" {

extern u32 DAT_005b3ca8[];

/* Returns element `slot` of the DAT_005b3ca8 array. */
u32 asdModelGetSlotArray1(s32 slot)
{
    return DAT_005b3ca8[slot];
}

} /* extern "C" */
