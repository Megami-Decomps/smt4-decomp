#include "map/mapIf.h"

extern "C" {

void FUN_002392b8(u32 arg);
void uiNavigatorStart(u32 a, s32 b, s32 c, u32 d, u32 e);
void infoWinSetTimer(u32 arg);

extern MapIfGlobalsA g_mapIf;

void mapIfStartNavigation(u32 a, u32 b, s32 flag, u32 c, u32 d)
{
    MapIfStateA *state = g_mapIf.state;

    if (flag != 0) {
        state->unk1D = 1;
        state->unk20 = 0;
        FUN_002392b8(b);
        uiNavigatorStart(a, 0, 1, c, d);
        return;
    }
    FUN_002392b8(b);
    uiNavigatorStart(a, 1, 1, c, d);
    infoWinSetTimer(0xFFFFFFFF);
}

} /* extern "C" */
