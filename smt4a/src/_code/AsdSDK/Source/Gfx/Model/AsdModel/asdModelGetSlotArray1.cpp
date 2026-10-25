#include "common.h"
#include "AsdSDK/asdModelGetSlotArray1.h"

extern "C" {

extern u32 g_asdModelSlotArray1[];

/* Returns element `slot` of the g_asdModelSlotArray1 array. */
u32 asdModelGetSlotArray1(s32 slot)
{
    return g_asdModelSlotArray1[slot];
}

} /* extern "C" */
