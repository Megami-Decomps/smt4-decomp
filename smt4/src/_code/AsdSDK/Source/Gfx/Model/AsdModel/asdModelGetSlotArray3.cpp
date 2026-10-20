#include "common.h"

extern "C" {

extern u32 DAT_00464bb4[];

/* Returns element `slot` of the DAT_00464bb4 array. */
u32 asdModelGetSlotArray3(s32 slot)
{
    return DAT_00464bb4[slot];
}

} /* extern "C" */
