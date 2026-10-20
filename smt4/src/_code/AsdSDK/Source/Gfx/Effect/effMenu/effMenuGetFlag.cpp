#include "AsdSDK/Source/Gfx/Effect/effMenu.h"

extern "C" {

extern EffMenuState g_effMenuState;

/* Returns the menu effect state's first byte. */
s32 effMenuGetFlag(void)
{
    return g_effMenuState.unk00;
}

} /* extern "C" */
