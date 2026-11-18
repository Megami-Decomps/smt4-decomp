#include "font/InfoWinTextApi.h"
#include "map/mapDepart.h"
#include "ui/UiControl.h"
#include "game/GameStateA.h"

extern "C" {

const char *scrGetArgString(s32 index);

s32 scrCommOpenDialog(void)
{
    infoWinExpandAndSetText(scrGetArgString(0));
    dialogOpen(0, 1);
    g_gameState.unk484 = 0;
    return 1;
}

} /* extern "C" */
