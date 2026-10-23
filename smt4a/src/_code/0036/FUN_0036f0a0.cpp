/* NON_MATCHING: compiler emits a phase comparison chain instead of the retail jump table, changing phase-four liveness and epilogue sharing. */
#include "battle/BattleEffectTextureCache.h"

namespace {
struct EffectTextureLoadingCache {
    BattleEffectTextureSlot slots[64];
    s32 count;
    u32 phase;
};
typedef char EffectTextureLoadingCacheOffsetsCheck[
    offsetof(EffectTextureLoadingCache, count) == 0x1300 &&
    offsetof(EffectTextureLoadingCache, phase) == 0x1304 ? 1 : -1];
}

extern "C" {
extern EffectTextureLoadingCache g_textureCache;
s32 FUN_001028b8(char *output, u32 capacity, const char *format, ...);
void FUN_002adc94(void *file, BattleEffectTextureSlot *slot);
void FUN_00168750(const char *path, void **file, u32 flags,
    void (*callback)(void *, BattleEffectTextureSlot *), BattleEffectTextureSlot *slot);
void asdMemFree(void *allocation);

// Request missing effect texture files, retry failed requests and release completed file buffers.
void FUN_0036f0a0(void)
{
    BattleEffectTextureSlot *slot = g_textureCache.slots;
    switch (g_textureCache.phase) {
    case 0:
        if (g_textureCache.count != 0) {
            g_textureCache.phase = 1;
            return;
        }
        break;
    case 1:
        for (s32 index = 0; index < g_textureCache.count; ++index, ++slot) {
            if (slot->texture->image.physicalAddress == 0 && slot->loaded == 0) {
                char path[128];
                FUN_001028b8(path, sizeof(path), "%s%s.tga", "battle/effect/tex/", slot->name);
                slot->loadingState = 1;
                FUN_00168750(path, &slot->file, 1, FUN_002adc94, slot);
            }
        }
        g_textureCache.phase = 2;
        return;
    case 2:
        for (s32 index = 0; index < g_textureCache.count; ++index, ++slot) {
            if (slot->texture->image.physicalAddress == 0 && slot->loaded == 0) {
                if (slot->loadingState == 1)
                    return;
                if (slot->loadingState == 0) {
                    g_textureCache.phase = 1;
                    return;
                }
            }
        }
        g_textureCache.phase = 3;
        return;
    case 3:
        for (s32 index = 0; index < g_textureCache.count; ++index, ++slot) {
            if (slot->file != NULL) {
                asdMemFree(slot->file);
                slot->file = NULL;
            }
        }
        break;
    default:
        return;
    }
    g_textureCache.phase = 4;
}
}
