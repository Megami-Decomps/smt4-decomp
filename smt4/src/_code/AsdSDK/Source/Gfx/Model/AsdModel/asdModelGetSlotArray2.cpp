#include "common.h"

extern "C" {

extern u32 DAT_00464bac[];

/* Returns element `slot` of the DAT_00464bac array. */
u32 asdModelGetSlotArray2(s32 slot)
{
    return DAT_00464bac[slot];
}

} /* extern "C" */
