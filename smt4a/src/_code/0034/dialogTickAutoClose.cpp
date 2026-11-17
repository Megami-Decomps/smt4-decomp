#include "common.h"
#include "game/GameStateA.h"

extern "C" {

void dialogClose(s32 mode);

/* Counts a frame; once the timer reaches 60 closes the dialog and returns 1, otherwise 0. */
s32 dialogTickAutoClose(void)
{
    g_gameState.unk484++;
    if (g_gameState.unk484 < 60)
        return 0;
    dialogClose(1);
    return 1;
}

} /* extern "C" */
