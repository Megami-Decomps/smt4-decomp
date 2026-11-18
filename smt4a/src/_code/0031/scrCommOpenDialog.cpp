#include "map/mapDepart.h"
#include "ui/UiControl.h"
#include "game/GameStateA.h"

extern "C" {

void scrGetArgString(s32 index);
void infoWinExpandAndSetText(void);

s32 scrCommOpenDialog(void)
{
    scrGetArgString(0);
    infoWinExpandAndSetText();
    dialogOpen(0, 1);
    g_gameState.unk484 = 0;
    return 1;
}

} /* extern "C" */
