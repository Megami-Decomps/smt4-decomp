/* NON_MATCHING: alternate background-reset call block is merged before the tail call rather than placed after it. */
#include "common.h"

struct BackgroundResetState {
    u8 unk000[0x251];
    s8 pending; // 0x251
};

extern "C" {
extern BackgroundResetState g_gameState;
s32 gameFlagIsSet(u32 flag);
void commonBgReset(void);
void FUN_00289880(void);
void FUN_00275f00(void);

// Consume a pending background reset, choosing the reset path by game flag 0x16.
void FUN_0039bbd4(void)
{
    if (g_gameState.pending != 0) {
        g_gameState.pending = 0;
        if (gameFlagIsSet(0x16) != 0) {
            commonBgReset();
        } else {
            FUN_00289880();
        }
    }
    FUN_00275f00();
}
}
