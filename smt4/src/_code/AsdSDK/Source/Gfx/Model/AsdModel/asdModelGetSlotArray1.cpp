#include "common.h"

extern "C" {

extern u32 DAT_00464ba4[];

/* Returns element `slot` of the DAT_00464ba4 array. */
u32 asdModelGetSlotArray1(s32 slot)
{
    return DAT_00464ba4[slot];
}

} /* extern "C" */
