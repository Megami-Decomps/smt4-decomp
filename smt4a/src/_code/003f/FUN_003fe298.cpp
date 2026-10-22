/* NON_MATCHING: compiler recognizes REV instead of retail's expanded byte swap and shares dirty-flag stores differently. */
#include "common.h"

struct ShaderColorState {
    u16 flags;
    u8 unk02[0x22];
    u32 material[6];
    u32 lights[3];
};

// Store a byte-reversed color and mark the corresponding material or lighting block dirty.
extern "C" void FUN_003fe298(ShaderColorState *state, u32 index, u32 color)
{
    u32 value = (color << 24) | ((u32)(u8)(color >> 8) << 16) |
        ((u32)(u8)(color >> 16) << 8) | (color >> 24);
    switch (index) {
    case 0: state->material[0] = value; state->flags |= 0x400; return;
    case 1: state->material[1] = value; state->flags |= 0x400; return;
    case 2: state->material[2] = value; state->flags |= 0x400; break;
    case 3: state->material[3] = value; state->flags |= 0x400; break;
    case 4: state->material[4] = value; state->flags |= 0x400; break;
    case 5: state->material[5] = value; state->flags |= 0x400; break;
    case 6: state->lights[0] = value; state->flags |= 0x200; break;
    case 7: state->lights[1] = value; state->flags |= 0x200; break;
    case 8: state->lights[2] = value; state->flags |= 0x200; break;
    }
}
