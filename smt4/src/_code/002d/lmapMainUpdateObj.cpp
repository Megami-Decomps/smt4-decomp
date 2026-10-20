#include "map/lmapMain.h"

extern "C" {

void FUN_00264444(LmapObj *obj);
void FUN_002664d8(LmapObj *obj);
void FUN_002666a0(LmapObj *obj, s32 a, u32 b);
void FUN_00273c54(void);
void FUN_00273d34(void);

extern LmapMainState *g_lmapMainState;

void lmapMainUpdateObj(void)
{
    LmapMainState *state = g_lmapMainState;

    if (g_lmapMainState != NULL) {
        FUN_00273d34();
        FUN_00273c54();
        FUN_00264444(&state->obj);
        FUN_002666a0(&state->obj, state->unk40 - 100, state->unk48);
        FUN_002664d8(&state->obj);
    }
}

} /* extern "C" */
