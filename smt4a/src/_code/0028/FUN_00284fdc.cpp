/* NON_MATCHING: retail uses ldr r2, [pc, #52] where the compiled block uses ldr r0, [pc, #60]. */
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
void FUN_003e416c(ResetState* state, u32 zero, u32 savedValue);

void FUN_00284fdc(void)
{
    GameData* data = g_gameDataBlocks.data;
    u32 savedValue = data->currentValue;
    data->previousValue = savedValue;

    ResetState* state = &data->reset;
    state->words[0] = 0;
    state->words[1] = 0;
    state->words[2] = 0;
    state->words[3] = 0;
    state->unk10 = 0;

    FUN_003e416c(state, 0, savedValue);
}
}
