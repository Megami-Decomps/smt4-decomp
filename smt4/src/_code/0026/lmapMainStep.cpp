#include "common.h"
#include "game/GameState.h"

extern "C" {


typedef struct LmapMain00265110 {
    /* 0x00 */ u8 unk00[0xb];
    /* 0x0b */ u8 external;
    /* 0x0c */ u8 unk0c[0x34];
    /* 0x40 */ s32 progress;
} LmapMain00265110;

void FUN_0026493c(LmapMain00265110 *main);
void FUN_00265180(void);
void mapUpdateFollowerModels(LmapMain00265110 *main);
void FUN_00265f50(LmapMain00265110 *main);
void FUN_002fb7dc(void);

extern LmapMain00265110 *g_lmapMainState; /* 0x447060 */

/* Local map step: runs the external or internal update unless the game state suppresses it, then the common updates; finishes with FUN_00265180 until progress reaches 100. */
void lmapMainStep(void)
{
    LmapMain00265110 *main = g_lmapMainState;

    if (g_gameState.suppressStep == 0) {
        if (main->external != 0) {
            FUN_002fb7dc();
        } else {
            FUN_0026493c(main);
        }
    }
    FUN_00265f50(main);
    mapUpdateFollowerModels(main);
    if (g_lmapMainState->progress != 100) {
        FUN_00265180();
    }
}

} /* extern "C" */
