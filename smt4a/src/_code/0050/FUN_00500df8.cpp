#include "common.h"

struct GpuStateOwner {
    u8 unk00[0x7C];   // 0x00
    u32 colorState;   // 0x7C
};

struct GpuFaceState {
    u8 enabled;          // 0x00
    u8 first;            // 0x01
    u8 second;           // 0x02
    u8 unk03;            // 0x03
    GpuStateOwner *owner; // 0x04
};

struct CommandPair {
    u32 header;
    u32 data;
};

extern "C" {

u32 *gxEmitFramebufferAccessMasks(u32 *state, u32 *commands, s32 flush);

/* Emits the two-word mode command (0 off, 1 on, 2 for the matching first/second pairs) and optionally the owner's color-state commands. */
u32 *FUN_00500df8(const GpuFaceState *state, u32 *commands, s32 emitColor)
{
    u32 mode = 0;

    if (state->enabled != 0) {
        if (state->first == 0) {
            mode = state->second == 0 ? 2 : 1;
        } else if (state->first == 1) {
            mode = state->second == 1 ? 2 : 1;
        } else {
            mode = 1;
        }
    }
    CommandPair *pair = (CommandPair *)commands;

    pair->header = mode;
    pair->data = 0xF0040;
    commands = (u32 *)(pair + 1);
    if (emitColor) {
        return gxEmitFramebufferAccessMasks(&state->owner->colorState, commands, 1);
    }
    return commands;
}

} /* extern "C" */
