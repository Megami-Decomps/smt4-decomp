#include "map/MapInterfaceApi.h"
#include "font/InfoWinTextApi.h"
#include "map/MapIfGlobals.h"

extern "C" {

void uiNavigatorStart(u32 a, s32 b, s32 c, u32 d, u32 e);
void infoWinSetTimer(u32 arg);

void mapIfStartNavigation(u32 a, const char *text, s32 flag, u32 c, u32 d)
{
    MapIfStateA *state = g_mapIf.state;

    if (flag != 0) {
        state->dialogOpen = 1;
        state->unk20 = 0;
        infoWinExpandAndSetText(text);
        uiNavigatorStart(a, 0, 1, c, d);
        return;
    }
    infoWinExpandAndSetText(text);
    uiNavigatorStart(a, 1, 1, c, d);
    infoWinSetTimer(0xFFFFFFFF);
}

} /* extern "C" */
