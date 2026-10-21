#include "common.h"

extern "C" {

struct LmapState { u8 unk00[0x40]; u32 map; u32 unk44; u32 area; };
extern LmapState *g_lmapMainState;
void FUN_00244ac8(void);
void FUN_002747dc(void);
void FUN_00364740(u32 map, u32 area);
void FUN_002ddea0(void);
void FUN_00245d78(s32 mode);

void lmapApplyMapAndArea(void)
{
    LmapState *state = g_lmapMainState;
    FUN_00244ac8();
    u32 map = state->map;
    state = g_lmapMainState;
    FUN_002747dc();
    FUN_00364740(map, state->area);
    FUN_002ddea0();
    FUN_00245d78(1);
}

} /* extern "C" */
