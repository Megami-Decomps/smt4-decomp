#include "map/mapIf.h"

extern "C" {

void FUN_00295ba4(s32 arg);
void jobStop(u32 job, s32 arg);
s32 FUN_002b6b04(void);

extern MapIfGlobals g_mapIf;

void mapIfDestroy(void)
{
    MapIfState *state = g_mapIf.state;

    if (state->unk18 != 0 && FUN_002b6b04() != 0) {
        state->unk18 = 0;
        FUN_00295ba4(1);
    }
    jobStop(state->job, 0);
}

} /* extern "C" */
