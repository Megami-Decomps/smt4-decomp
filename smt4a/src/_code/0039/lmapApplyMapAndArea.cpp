#include "common.h"
#include "map/LmapMainGlobals.h"

extern "C" {

void FUN_00244ac8(void);
void FUN_002747dc(void);
void FUN_00364740(u32 map, u32 area);
void FUN_002ddea0(void);
void FUN_00245d78(s32 mode);

void lmapApplyMapAndArea(void)
{
    LmapMainStateA *state = g_lmapMainState;
    FUN_00244ac8();
    u32 map = state->mapId;
    state = g_lmapMainState;
    FUN_002747dc();
    FUN_00364740(map, state->areaId);
    FUN_002ddea0();
    FUN_00245d78(1);
}

} /* extern "C" */
