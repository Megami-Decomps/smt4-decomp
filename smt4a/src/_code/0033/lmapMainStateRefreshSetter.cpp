#include "map/LmapMainGlobals.h"
#include "AsdSDK/AsdDebugHooks.h"

extern "C" {

void objectPoolDestroyAll(LmapObj *setter);
void stateSetterSetFromBase(LmapObj *setter, s32 base, u32 value);
void fieldBuildAreaPlacementList(LmapObj *setter);

/* Re-applies the state setter of the lmap main state: reset, set from its base (mapId - 100, areaId), then finish. */
void lmapMainStateRefreshSetter(void)
{
    LmapMainStateA *state = g_lmapMainState;

    if (state != NULL) {
        asdDebugHookVoid();
        asdDebugHookVoid();
        objectPoolDestroyAll(&state->obj);
        stateSetterSetFromBase(&state->obj, state->mapId - 100, state->areaId);
        fieldBuildAreaPlacementList(&state->obj);
    }
}

} /* extern "C" */
