#include "AsdSDK/Source/Gfx/Effect/effMenu.h"

extern "C" {

extern EffMenuState g_effMenuState;

/* Advances the menu effect state's unk04 by `delta`. */
void effMenuAddDeltaA(f32 delta)
{
    g_effMenuState.unk04 += delta;
}

} /* extern "C" */
