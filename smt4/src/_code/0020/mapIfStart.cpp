#include "map/mapIf.h"

extern "C" {

void dialogSetText(s32 arg);
void FUN_0027e774(s32 a, s32 b);

extern MapIfGlobals g_mapIf;

void mapIfStart(s32 arg)
{
    MapIfState *state = g_mapIf.state;

    state->unk18 = 1;
    state->unk1C = 0;
    dialogSetText(arg);
    FUN_0027e774(0, 1);
}

} /* extern "C" */
