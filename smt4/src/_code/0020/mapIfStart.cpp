#include "map/MapIfGlobals.h"

extern "C" {

void dialogSetText(s32 arg);
void dialogOpen(s32 a, s32 b);

void mapIfStart(s32 arg)
{
    MapIfState *state = g_mapIf.state;

    state->unk18 = 1;
    state->unk1C = 0;
    dialogSetText(arg);
    dialogOpen(0, 1);
}

} /* extern "C" */
