/* NON_MATCHING: retail retains an error-check comparison and saved zero register; final tail call differs. */
#include "shard/W6_W6Match7_TextureBinding.h"

extern "C" {
extern TextureBindingState *g_textureBindingState;
extern void *DAT_00589188;
u32 nngxGetError();
void FUN_0017e8f4();
void gfxRefreshDirtyTextureBindings(u32 *mask);
void FUN_00178bd4(u32 *mask);
void FUN_00195af0(TextureBindingState *state);
void FUN_00179178(TextureBindingState *state, u32 mask);

void FUN_0016182c(u32 mask, s32 preserve, u32, u32)
{
    TextureBindingState *state = g_textureBindingState;
    nngxGetError();
    mask &= ~state->flags;
    if (state->updates.pending & mask & 0x2000)
        FUN_0017e8f4();
    if (mask & 0x80) {
        u32 bindings = 0x1C00;
        if (state->updates.dirty & bindings)
            gfxRefreshDirtyTextureBindings(&bindings);
    }
    if (mask & 0x100) {
        u32 binding = 1;
        if (state->updates.dirty & binding)
            FUN_00178bd4(&binding);
    }
    struct MaskView { u32 prefix[2]; u32 mask; };
    if ((mask & 0x200) &&
        (static_cast<const MaskView *>(DAT_00589188)->mask & state->updates.dirty))
        FUN_00195af0(state);
    if (mask & 0x1E7F) {
        state->flushing.active = 1;
        if (preserve == 0)
            state->flushing.suppress = 1;
        FUN_00179178(state, mask);
        state->flushing.active = 0;
        state->flushing.suppress = 0;
    }
    if (mask & 1) state->updates.dirty &= ~0x100000u;
    if (mask & 4) state->updates.dirty &= ~0x1800000u;
    if (mask & 8) state->updates.dirty &= ~0x600000u;
    if (mask & 0x10) state->updates.dirty &= ~0x10000u;
    if (mask & 0x20) state->updates.dirty &= ~0x80000u;
    if (mask & 0x40) state->updates.dirty &= ~0x2004038u;
    if (mask & 0x80) state->updates.dirty &= ~0x1C00u;
    if (mask & 0x100) state->updates.dirty &= ~1u;
    if (mask & 0x200) state->updates.dirty &= ~0x80C2u;
    if (mask & 0x400) state->updates.dirty &= ~4u;
    if (mask & 0x800) state->updates.dirty &= ~0x100u;
    if (mask & 0x1000) state->updates.dirty &= ~0x200u;
    state->updates.pending &= ~mask;
    nngxGetError();
}
}
