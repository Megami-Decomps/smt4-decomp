#include "camp/CampStateA.h"

extern "C" {

void uiSpriteSetImageKeyframe(UiSpriteState *member, s32 a, s32 b);
void frameTransitionSetMode(s32 mode);
s32 lmapRefreshScene28Selection(void);
s32 aocDataBlockHasEntries(void);


/* Switches the camp to `newState`, remembering the previous one; state 0x33 runs its set-up, and state 0x55 falls back to 0x56 when aocDataBlockHasEntries reports 0. */
void campChangeState(s32 newState)
{
    CampStateA *game;

    game = g_camp;
    g_camp->previousState = g_camp->state;
    game->state = newState;
    game->phase = 0;
    game->substep = 0;
    if (newState == 0x33) {
        lmapRefreshScene28Selection();
        frameTransitionSetMode(2);
        uiSpriteSetImageKeyframe(&game->sprites[29], 7, 0);
        return;
    }
    if ((newState == 0x55) && (aocDataBlockHasEntries() == 0)) {
        game->state = 0x56;
    }
}

} /* extern "C" */
