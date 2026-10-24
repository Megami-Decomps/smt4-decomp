#include "common.h"

struct GameState0034900c {
    /* 0x000 */ u8 unk000[0x484];
    /* 0x484 */ s32 timer;
};

extern "C" {

extern GameState0034900c g_gameState;

void dialogClose(s32 mode);

/* Counts a frame; once the timer reaches 60 closes the dialog and returns 1, otherwise 0. */
s32 dialogTickAutoClose(void)
{
    g_gameState.timer++;
    if (g_gameState.timer < 60)
        return 0;
    dialogClose(1);
    return 1;
}

} /* extern "C" */
