/* NON_MATCHING: Code matches, but the game-state and map-state global addresses occupy opposite literal-pool slots. */
#include "map/mapDepart.h"
#include "map/lmapMain.h"

extern "C" {
extern GameStateA g_gameState;
extern LmapMainStateA *g_lmapMainState;
void FUN_00386720(void);
void FUN_003401a4(LmapMainStateA *state);
void FUN_0036a434(LmapMainStateA *state);
void FUN_0036aa04(LmapMainStateA *state);
void FUN_00297c3c(void);
void FUN_00234b30(void);
void FUN_002737a8(void);
void FUN_003699e4(void);

/* Performs the field-map startup sequence and its optional final initialization. */
void FUN_00387014(void)
{
    LmapMainStateA *state = g_lmapMainState;
    if (g_gameState.unk5C8 == 0) {
        if (state->unk0B != 0) {
            FUN_00386720();
        } else {
            FUN_003401a4(state);
        }
    }
    FUN_0036a434(state);
    FUN_0036aa04(state);
    FUN_00297c3c();
    FUN_00234b30();
    FUN_002737a8();
    if (g_lmapMainState->unk40 != 100) {
        FUN_003699e4();
    }
}
}
