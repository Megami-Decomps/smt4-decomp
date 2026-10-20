#include "common.h"

extern "C" {

extern u32 g_asdModelSlotArray3[];

/* Returns element `slot` of the g_asdModelSlotArray3 array. */
u32 asdModelGetSlotArray3(s32 slot)
{
    return g_asdModelSlotArray3[slot];
}

} /* extern "C" */
