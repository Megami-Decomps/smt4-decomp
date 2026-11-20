#include "common.h"
#include "map/LmapMainGlobals.h"

extern "C" {

void FUN_00244ac8(void);
void mapIfResetRecords(void);
void FUN_00364740(u32 map, u32 area);
void lmapUpdateEngineRecordNavigation(void);
void mapIfRestartActiveRecords(s32 mode);

void lmapApplyMapAndArea(void)
{
    LmapMainStateA *state = g_lmapMainState;
    FUN_00244ac8();
    u32 map = state->mapId;
    state = g_lmapMainState;
    mapIfResetRecords();
    FUN_00364740(map, state->areaId);
    lmapUpdateEngineRecordNavigation();
    mapIfRestartActiveRecords(1);
}

} /* extern "C" */
