#include "common.h"

extern "C" {

extern u32 g_effAsdLightHandle[];

/* Returns element `slot` of the g_effAsdLightHandle array. */
u32 asdModelGetSlotHandle(s32 slot)
{
    return g_effAsdLightHandle[slot];
}

} /* extern "C" */
