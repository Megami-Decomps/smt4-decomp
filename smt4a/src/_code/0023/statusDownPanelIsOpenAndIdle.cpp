#include "status/StatusDownA.h"

extern "C" {

s32 gameGlobalsGetFieldState(void);
s32 gameGlobalsGetSceneState(void);


/* Returns 0 when gameGlobalsGetSceneState reports 5, 6, 7, 0xC or 0xB, or gameGlobalsGetFieldState reports 8, 9 or 3; otherwise 1. */
u32 statusDownPanelIsOpenAndIdle(void)
{
    if (g_statusDown->panelEnabled == 0) {
        return 0;
    }
    if (gameGlobalsGetSceneState() == 5 || gameGlobalsGetSceneState() == 6 ||
        gameGlobalsGetSceneState() == 7 || gameGlobalsGetSceneState() == 0xC ||
        gameGlobalsGetSceneState() == 0xB || gameGlobalsGetFieldState() == 8 ||
        gameGlobalsGetFieldState() == 9 || gameGlobalsGetFieldState() == 3) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
