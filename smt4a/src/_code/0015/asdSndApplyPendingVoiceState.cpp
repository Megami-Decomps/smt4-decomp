#include "common.h"

struct VoiceStateUpdate {
    u8 unk00[0x0c]; // 0x00
    s32 handle;      // 0x0c
    u8 unk10[0x14]; // 0x10
    u8 applied;      // 0x24
    u8 mode;         // 0x25
};

extern "C" {
void FUN_0016cba4(s32 handle);
void FUN_0016cbf8(s32 handle);

// Applies the pending voice operation once; mode one skips the parameter refresh.
void asdSndApplyPendingVoiceState(VoiceStateUpdate* state)
{
    if (state->handle != -1 && state->applied == 0) {
        switch (state->mode) {
        case 1:
            FUN_0016cba4(state->handle);
            break;
        default:
            FUN_0016cbf8(state->handle);
            break;
        }
        state->applied = 1;
        state->mode = 0;
    }
}
}
