#include "common.h"

extern "C" {

extern u32 g_asdModelSlotArray0[];

/* Returns element `slot` of the g_asdModelSlotArray0 array. */
u32 asdModelGetSlotArray0(s32 slot)
{
    return g_asdModelSlotArray0[slot];
}

} /* extern "C" */
