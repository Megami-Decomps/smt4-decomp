#include "map/MapInterfaceApi.h"
#include "font/InfoWinTextApi.h"
#include "map/MapIfGlobals.h"
#include "ui/UiControl.h"

extern "C" {

void mapIfStart(const char *text)
{
    MapIfStateA *state = g_mapIf.state;

    state->dialogOpen = 1;
    state->unk20 = 0;
    infoWinExpandAndSetText(text);
    dialogOpen(0, 1);
}

} /* extern "C" */
