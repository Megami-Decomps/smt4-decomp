/* NON_MATCHING: Retail ldr r0, [r4] differs from recovered ldr r0, [r4]. */
#include "common.h"
#include "Model/MoriModelEffect.h"

// Private view of the state accessed by this function.
struct WriteStateView {
    u8* cursor;       // 0x00
    u8* unk04;        // 0x04
    u8* unk08;        // 0x08
    u32* unk0C;       // 0x0C
    u32 unk10;        // 0x10
};

extern "C" {
u8* gpuCmdWriteCopy(u8* cursor, u32** output, s32 value, u32 options);

// Advance the writer, finalize the previous count, and remember the new output slot.
void FUN_001a063c(WriteStateView* state, s32 value, u32 options)
{
    if (state->cursor != 0 && value != 0) {
        u32* output;
        state->cursor = reinterpret_cast<u8*>(gpuCmdPadToAlign16(reinterpret_cast<u32 *>(state->cursor), (((u32)state->cursor - (u32)state->unk08) & ~3u) + 0x18));
        state->cursor = gpuCmdWriteCopy(state->cursor, &output, value, options);

        if (state->unk0C != 0) {
            *state->unk0C = ((u32)state->cursor - (u32)state->unk08) >> 3;
        }

        state->unk08 = state->cursor;
        state->unk0C = output;
        if (state->unk10 == 0) {
            state->unk10 = ((u32)state->cursor - (u32)state->unk04) & ~3u;
        }
    }
}
}
