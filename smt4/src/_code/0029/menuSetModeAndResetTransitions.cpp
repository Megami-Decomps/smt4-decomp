#include "status/StatusMenuMode.h"
#include "status/StatusTabTransition.h"

enum {
    STATUS_MODE_FUSION_CONFIRMED = 7,
    STATUS_MODE_FUSION_PREVIEW = 8
};

/* Resets the status tab and its pending state when leaving a fusion result mode. */
extern "C" void menuSetModeAndResetTransitions(u8 mode)
{
    GameData *state = g_gameGlobals.data;
    u8 previous = state->unk1E66;
    state->unk1E66 = mode;
    if (previous == STATUS_MODE_FUSION_PREVIEW) {
        if (mode != STATUS_MODE_FUSION_PREVIEW) {
            statusResetTabTransition();
        }
    } else if (previous == STATUS_MODE_FUSION_CONFIRMED && mode != STATUS_MODE_FUSION_CONFIRMED) {
        statusResetTabTransition();
    }
}
