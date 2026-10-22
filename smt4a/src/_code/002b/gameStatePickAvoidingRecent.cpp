#include "common.h"

extern "C" {

typedef struct GameStateRecentPicks {
    /* 0x000 */ u8 unk000[0x4b8];
    /* 0x4B8 */ s32 lastPick;   /* -1 when none */
    /* 0x4BC */ s32 earlierPick; /* -1 when none */
} GameStateRecentPicks;

extern GameStateRecentPicks g_gameState;
s32 randRange(u16 max);

/* Picks one of four choices at random, avoiding the last two picked, and records it as the latest pick. */
s32 gameStatePickAvoidingRecent(void)
{
    s32 candidates[4] = {0, 0, 0, 0};
    s32 count = 0;
    s32 i;
    s32 pick;

    for (i = 0; i < 4; i++) {
        if (i != g_gameState.lastPick && i != g_gameState.earlierPick) {
            candidates[count++] = i;
        }
    }
    pick = randRange((u16)(count - 1));
    if (g_gameState.lastPick == -1 && g_gameState.earlierPick == -1) {
        g_gameState.lastPick = candidates[pick];
    } else {
        g_gameState.earlierPick = g_gameState.lastPick;
        g_gameState.lastPick = candidates[pick];
    }
    return candidates[pick];
}

} /* extern "C" */
