#include "map/MapIfGlobals.h"
#include "ui/UiControl.h"

extern "C" {

void dialogSetText(s32 arg);

void mapIfStart(s32 arg)
{
    MapIfState *state = g_mapIf.state;

    state->unk18 = 1;
    state->unk1C = 0;
    dialogSetText(arg);
    dialogOpen(0, 1);
}

} /* extern "C" */
