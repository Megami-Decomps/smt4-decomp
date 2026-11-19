/* NON_MATCHING: 8 lines, register numbers only: retail loads the 0x2DB4 offset and the current value into r2
 * (previous address in r1) and keeps them to the tail call; this build swaps r1/r2. The same r1/r2 swap as
 * the IV twin FUN_001dd930. Passing (reset, 0, current) to FUN_003e416c reproduces it, but that callee takes
 * no arguments (it reads the area through gameDataBlockGetArea2D68), so the match was a one-caller prototype. */
#include "common.h"

struct ResetState {
    u32 words[4];       // 0x00
    u16 unk10;          // 0x10
    u8 padding[2];      // 0x12
};

struct GameData {
    u8 unk00[0x2D68];
    ResetState reset;   // 0x2D68
    u8 unk2D7C[0x38];
    u32 currentValue;   // 0x2DB4
    u32 previousValue;  // 0x2DB8
};

struct GameDataBlocks {
    u32 unk00;          // 0x00
    GameData* data;     // 0x04
};

extern "C" {
extern GameDataBlocks g_gameDataBlocks;
void FUN_003e416c(void);

/* Zeroes the reset state's words and its halfword. */
static __inline void resetStateClear(ResetState *state)
{
    state->words[0] = 0;
    state->words[1] = 0;
    state->words[2] = 0;
    state->words[3] = 0;
    state->unk10 = 0;
}

/* Remembers the current value as the previous one, clears the reset state and refills it (FUN_003e416c). */
void FUN_00284fdc(void)
{
    GameData* data = g_gameDataBlocks.data;
    data->previousValue = data->currentValue;
    resetStateClear(&data->reset);
    FUN_003e416c();
}
}
