#include "map/mapIf.h"

extern "C" {

void dialogOpen(s32 a, s32 b);
void infoWinExpandAndSetText(s32 arg);

extern MapIfGlobalsA g_mapIf;

void mapIfStart(s32 arg)
{
    MapIfStateA *state = g_mapIf.state;

    state->unk1D = 1;
    state->unk20 = 0;
    infoWinExpandAndSetText(arg);
    dialogOpen(0, 1);
}

} /* extern "C" */
