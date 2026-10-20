#include "map/mapIf.h"

extern "C" {

void dialogOpen(s32 a, s32 b);
void FUN_002392b8(s32 arg);

extern MapIfGlobalsA g_mapIf;

void mapIfStart(s32 arg)
{
    MapIfStateA *state = g_mapIf.state;

    state->unk1D = 1;
    state->unk20 = 0;
    FUN_002392b8(arg);
    dialogOpen(0, 1);
}

} /* extern "C" */
