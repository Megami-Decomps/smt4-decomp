/* NON_MATCHING: boolean and packet stores use extra registers and STM/STRD rather than retail scalar stores. */
#include "AsdSDK/Source/Sys/Gx/GxStencilState.h"

extern "C" {
u32 *gxEmitFramebufferAccessMasks(u32 *settingsWord, u32 *commands, s32 flush);

// Append stencil-test and stencil-operation registers, optionally refreshing access masks.
u32 *FUN_00500cac(const GxStencilState *state, u32 *commands, s32 refreshAccess)
{
    *commands++ = static_cast<u32>(state->enabled != 0) |
                  (state->function << 4) | (state->writeMask << 8) |
                  (state->reference << 16) | (state->readMask << 24);
    *commands++ = 0xf0105;
    *commands++ = state->failOperation | (state->depthFailOperation << 4) |
                  (state->passOperation << 8);
    *commands++ = 0xf0106;
    if (refreshAccess)
        return gxEmitFramebufferAccessMasks(
            reinterpret_cast<u32 *>(&state->owner->settings), commands, 1);
    return commands;
}
}
