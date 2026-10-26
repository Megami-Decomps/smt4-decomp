/* NON_MATCHING: compiler moves state out of r0 and stores both words with stm instead of post-increment stores; enabled test materializes 0 separately. */
#include "common.h"

struct GxColorMaskOwner {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ u8 writeMask; /* bit 0 red, 1 green, 2 blue, 3 alpha */
    /* 0x51 */ u8 unk51[0x2b];
    /* 0x7c */ u32 colorState;
};

struct GxColorMaskState {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 depthWrite;
    /* 0x02 */ u8 function;
    /* 0x03 */ u8 unk03;
    /* 0x04 */ GxColorMaskOwner *owner;
};

extern "C" {
u32 *gxEmitFramebufferAccessMasks(u32 *settingsWord, u32 *commands, s32 flush);

// Append the color/depth write mask register, optionally refreshing access masks.
u32 *FUN_00500f3c(const GxColorMaskState *state, u32 *commands, s32 refreshAccess)
{
    *commands++ = (state->enabled != 0) | (state->function << 4) |
                  ((state->owner->writeMask & 1) ? 0x100 : 0) |
                  ((state->owner->writeMask & 2) ? 0x200 : 0) |
                  ((state->owner->writeMask & 4) ? 0x400 : 0) |
                  ((state->owner->writeMask & 8) ? 0x800 : 0) | (state->depthWrite ? 0x1000 : 0);
    *commands++ = 0xf0107;
    if (refreshAccess) {
        return gxEmitFramebufferAccessMasks(&state->owner->colorState, commands, 1);
    }
    return commands;
}
}
