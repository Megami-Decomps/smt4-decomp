#include "map/MapIfGlobals.h"

extern "C" {

void dialogOpen(s32 a, s32 b);
void infoWinExpandAndSetText(s32 arg);

void mapIfStart(s32 arg)
{
    MapIfStateA *state = g_mapIf.state;

    state->dialogOpen = 1;
    state->unk20 = 0;
    infoWinExpandAndSetText(arg);
    dialogOpen(0, 1);
}

} /* extern "C" */
