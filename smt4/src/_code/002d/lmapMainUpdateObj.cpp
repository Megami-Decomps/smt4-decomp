#include "map/LmapMainGlobals.h"

extern "C" {

void lmapEntryPoolDestroyAll(LmapObj *obj);
void entryListCollectMatches(LmapObj *obj);
void objSetBaseAndValue(LmapObj *obj, s32 a, u32 b);
void mapUpdatePendingAvailabilityFlags(void);
void mapUpdateLocationAvailability(void);


void lmapMainUpdateObj(void)
{
    LmapMainState *state = g_lmapMainState;

    if (g_lmapMainState != NULL) {
        mapUpdateLocationAvailability();
        mapUpdatePendingAvailabilityFlags();
        lmapEntryPoolDestroyAll(&state->obj);
        objSetBaseAndValue(&state->obj, state->mapId - 100, state->areaId);
        entryListCollectMatches(&state->obj);
    }
}

} /* extern "C" */
