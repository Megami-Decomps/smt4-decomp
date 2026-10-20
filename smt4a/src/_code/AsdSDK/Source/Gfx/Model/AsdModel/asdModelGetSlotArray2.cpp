#include "common.h"

extern "C" {

extern u32 g_asdModelSlotArray2[];

/* Returns element `slot` of the g_asdModelSlotArray2 array. */
u32 asdModelGetSlotArray2(s32 slot)
{
    return g_asdModelSlotArray2[slot];
}

} /* extern "C" */
