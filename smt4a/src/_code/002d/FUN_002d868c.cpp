#include "common.h"
extern "C" {
extern struct { u8 unk00[0x262]; s8 dialogRequested; } g_gameState;
struct MapWork { u8 unk00[0x1D]; u8 dialogRequested; u8 unk1E[2]; u32 dialog; };
extern MapWork *g_mapIf;
void dialogClose(s32 immediate);
/* Clears both pending map dialog requests and closes their dialogs. */
void FUN_002d868c(void)
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
