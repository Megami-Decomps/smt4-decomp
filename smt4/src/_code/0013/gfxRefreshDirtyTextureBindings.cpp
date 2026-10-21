/* NON_MATCHING: texture-cache/dirty-mask registers differ, and command writes combine into STM/STRD instead of retail scalar stores. */
#include "shard/W6_W6Match7_TextureBinding.h"

extern "C" {
extern TextureBindingState *g_textureBindingState;
extern TextureBindingCache *g_textureBindingCache;
extern u32 *g_commandBufferCursor;
extern u32 g_commandBufferEnd;
void FUN_00143280(u32 binding, s32 stage);
void FUN_00144228(u32 binding, s32 stage);

// Refresh dirty texture stages and emit the associated texture configuration.
void gfxRefreshDirtyTextureBindings(const u32 *dirty)
{
    TextureBindingState *state = g_textureBindingState;
    bool changed = false;
    if (!(state->flags & 0x80)) {
        TextureBindingSources *sources = &state->sources;
        for (s32 stage = 0; stage < 3; ++stage) {
            if (dirty[(stage + 10) >> 5] & (1u << ((stage + 10) & 31))) {
                if (sources->alternate[stage]) {
                    if (sources->secondary[stage]) {
                        if (g_textureBindingCache->secondary[stage])
                            FUN_00144228(*g_textureBindingCache->secondary[stage], stage);
                    } else {
                        FUN_00144228(g_textureBindingCache->defaultSecondary, stage);
                    }
                } else {
                    u32 *binding = &g_textureBindingCache->defaultPrimary;
                    if (!sources->primary[stage] ||
                        (binding = g_textureBindingCache->primary[stage]) != NULL)
                        FUN_00143280(*binding, stage);
                }
                changed = true;
            }
        }
        if (changed) {
            u32 configuration = state->configuration;
            if (configuration & 7) {
                if (reinterpret_cast<u32>(g_commandBufferCursor) < g_commandBufferEnd) {
                    g_commandBufferCursor[1] = 0x10080;
                    g_commandBufferCursor[0] = configuration;
                    g_commandBufferCursor += 2;
                }
                if (reinterpret_cast<u32>(g_commandBufferCursor) < g_commandBufferEnd) {
                    g_commandBufferCursor[1] = 0x50080;
                    g_commandBufferCursor[0] = 0x10000;
                    g_commandBufferCursor += 2;
                }
            }
        }
    }
}
}
