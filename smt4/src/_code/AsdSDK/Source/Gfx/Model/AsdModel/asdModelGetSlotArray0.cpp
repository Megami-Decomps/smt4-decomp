#include "common.h"

extern "C" {

extern u32 DAT_00464b9c[];

/* Returns element `slot` of the DAT_00464b9c array. */
u32 asdModelGetSlotArray0(s32 slot)
{
    return DAT_00464b9c[slot];
}

} /* extern "C" */
