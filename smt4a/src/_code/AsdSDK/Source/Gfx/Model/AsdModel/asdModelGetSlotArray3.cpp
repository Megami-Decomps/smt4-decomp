#include "common.h"

extern "C" {

extern u32 DAT_005b3cb8[];

/* Returns element `slot` of the DAT_005b3cb8 array. */
u32 asdModelGetSlotArray3(s32 slot)
{
    return DAT_005b3cb8[slot];
}

} /* extern "C" */
