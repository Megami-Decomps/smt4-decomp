#include "status/StatusTabTransition.h"

extern "C" {

enum {
    STATUS_MODE_FUSION_CONFIRMED = 8,
    STATUS_MODE_FUSION_PREVIEW = 9
};

/* Resets the status tab and its pending state when leaving a fusion result mode. */
void menuSetModeAndResetTransitions(s32 state)
{
    ObjB *game = g_gameGlobals.instance;
    u8 previous = game->unk2017;
    game->unk2017 = (u8)state;
    if (previous == STATUS_MODE_FUSION_PREVIEW) {
        if (state != STATUS_MODE_FUSION_PREVIEW) {
            statusResetTabTransition();
        }
    } else if (previous == STATUS_MODE_FUSION_CONFIRMED && state != STATUS_MODE_FUSION_CONFIRMED) {
        statusResetTabTransition();
    }
}
} /* extern "C" */
