/* Request sequence state 8 when the game-state flag is set or the shared selector is present. */
#include "common.h"

extern "C" {

struct SequenceConditionStateView {
    /* 0x000 */ u8 unk000[0x2f8];
    /* 0x2f8 */ u8 flagged;
};

extern s32 DAT_0049fd14;
extern SequenceConditionStateView g_gameState;

void asdSequenceRequest(s32 state, const void *arg, u32 size);

u32 FUN_002d8db4(void)
{
    if (g_gameState.flagged != 0 || DAT_0049fd14 != -1) {
        asdSequenceRequest(8, NULL, 0);
    }
    return 1;
}

}
