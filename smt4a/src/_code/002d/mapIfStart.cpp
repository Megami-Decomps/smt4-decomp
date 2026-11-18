#include "map/MapIfGlobals.h"
#include "ui/UiControl.h"

extern "C" {

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
