/* NON_MATCHING: retail retains the zero and high-page state base across the guards; compiler loads a full counter displacement and uses different guard/return layout. Candidate O2. */
#include "shard/GameGlobals.h"

extern "C" void statusDownRestoreTabForMode();

// Leave modes seven/eight by resetting the tab and its pending-state flag.
extern "C" void menuSetModeAndResetTransitions(s32 mode)
{
    GameData* state = g_gameGlobals.data;
    u8 previous = state->unk1E66;
    state->unk1E66 = mode;
    if (previous != 8) {
        if (previous != 7) {
            return;
        }
        if (mode == 7) {
            return;
        }
    } else if (mode == 8) {
        return;
    }
    state->unk12E4 = 0;
    statusDownRestoreTabForMode();
    state->unk1E63 = 0;
}
