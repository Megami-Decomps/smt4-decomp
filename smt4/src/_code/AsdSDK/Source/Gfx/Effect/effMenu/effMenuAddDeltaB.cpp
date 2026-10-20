#include "AsdSDK/Source/Gfx/Effect/effMenu.h"

extern "C" {

extern EffMenuState g_effMenuState;

/* Advances the menu effect state's unk08 by `delta`. */
void effMenuAddDeltaB(f32 delta)
{
    g_effMenuState.unk08 += delta;
}

} /* extern "C" */
