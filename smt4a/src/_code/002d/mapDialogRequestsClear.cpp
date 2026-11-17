#include "map/MapIfGlobals.h"
#include "game/GameStateA.h"

extern "C" {

void dialogClose(s32 immediate);

/* Clears both pending map dialog requests and closes their dialogs. */
void mapDialogRequestsClear(void)
{
    MapIfStateA *work = g_mapIf.state;
    if (g_gameState.dialogRequested != 0) {
        g_gameState.dialogRequested = 0;
        dialogClose(1);
    }
    if (work->dialogOpen != 0) {
        work->dialogOpen = 0;
        work->unk20 = 0;
        dialogClose(1);
    }
}

}
