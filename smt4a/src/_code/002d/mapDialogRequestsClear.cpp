#include "common.h"
#include "game/GameStateA.h"
extern "C" {
struct MapWork { u8 unk00[0x1D]; u8 dialogRequested; u8 unk1E[2]; u32 dialog; };
extern MapWork *g_mapIf;
void dialogClose(s32 immediate);
/* Clears both pending map dialog requests and closes their dialogs. */
void mapDialogRequestsClear(void)
{
    MapWork *work = g_mapIf;
    if (g_gameState.dialogRequested != 0) {
        g_gameState.dialogRequested = 0;
        dialogClose(1);
    }
    if (work->dialogRequested != 0) {
        work->dialogRequested = 0;
        work->dialog = 0;
        dialogClose(1);
    }
}
}
