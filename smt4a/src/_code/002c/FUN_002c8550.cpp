/* NON_MATCHING: the branches and shared reset sequence match; the build keeps the
 * adjusted field-state base across the call, while retail keeps the session base. */
#include "game/GameGlobalsRef.h"

extern "C" {
void gameTransitionStartStep(void);

/* Resets the transition when leaving field state eight or nine. */
void FUN_002c8550(s32 state)
{
    ObjB *game = g_gameGlobals.instance;
    u8 previous = game->unk2017;
    game->unk2017 = (u8)state;
    if (previous == 9) {
        if (state != 9) {
            g_gameGlobals.instance->unk1374 = 0;
            gameTransitionStartStep();
            game->mode = 0;
        }
    } else if (previous == 8 && state != 8) {
        g_gameGlobals.instance->unk1374 = 0;
        gameTransitionStartStep();
        game->mode = 0;
    }
}
} /* extern "C" */
