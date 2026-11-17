#include "map/LmapMainGlobals.h"

extern "C" {

void FUN_00264444(LmapObj *obj);
void entryListCollectMatches(LmapObj *obj);
void objSetBaseAndValue(LmapObj *obj, s32 a, u32 b);
void FUN_00273c54(void);
void FUN_00273d34(void);


void lmapMainUpdateObj(void)
{
    LmapMainState *state = g_lmapMainState;

    if (g_lmapMainState != NULL) {
        FUN_00273d34();
        FUN_00273c54();
        FUN_00264444(&state->obj);
        objSetBaseAndValue(&state->obj, state->mapId - 100, state->areaId);
        entryListCollectMatches(&state->obj);
    }
}

} /* extern "C" */
