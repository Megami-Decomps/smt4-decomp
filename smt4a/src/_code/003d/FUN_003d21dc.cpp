#include "common.h"

extern "C" {

typedef struct GameState {
    /* 0x00 */ u8 unk00[0x27];
    /* 0x27 */ s8 unlocked;
} GameState;

extern GameState g_gameState; /* 0x5f15fc */

extern int FUN_00376f94(void);

/* Whether the feature is unlocked and FUN_00376f94 reports more than 100. */
u8 FUN_003d21dc(void)
{
    int level = FUN_00376f94();

    return g_gameState.unlocked != 0 && level > 100;
}

} /* extern "C" */
