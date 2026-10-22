#include "common.h"

struct GameFlagTriggers {
    /* 0x00 */ u8 unk00[0x4C];
    /* 0x4C */ u8 trigger;
    /* 0x4D */ u8 triggerBits;
};
extern "C" {
extern u8 DAT_005e2074[];
void gameFlagSetValue(s32 id, s32 value, s32 notify);

/* Applies the game flags selected by the trigger byte and trigger mask. */
void gameApplyFlagTriggers(void)
{
    GameFlagTriggers *state = reinterpret_cast<GameFlagTriggers *>(DAT_005e2074);
    if (state->trigger != 0) {
        gameFlagSetValue(0x581, 1, 1);
    }
    if ((state->triggerBits & 4) != 0) {
        gameFlagSetValue(0x582, 1, 1);
    }
    if ((state->triggerBits & 2) != 0) {
        gameFlagSetValue(0x583, 1, 1);
    }
    if ((state->triggerBits & 1) != 0) {
        gameFlagSetValue(0x584, 1, 1);
    }
    if ((state->triggerBits & 8) != 0) {
        gameFlagSetValue(0x585, 1, 1);
    }
}
}
