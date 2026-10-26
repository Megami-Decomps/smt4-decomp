/* NON_MATCHING: the four-entry jump table now matches (explicit case 4 label); retail hoists the state constants 1 and 4 into r7/r8 and shares its epilogue differently (retail 92 vs built 93 rows). */
#include "gfx/NamedTextureCache.h"


extern "C" {
extern NamedTextureCache g_textureCache;
s32 FUN_002522f8(char *buffer, u32 size, const char *format, ...);
void FUN_001f4b3c(u32 unused, BattleEffectTextureSlot *request, u32 bytes);
void FUN_002b6480(const char *path, void **result, u32 flags, NamedTextureLoadCallback callback, BattleEffectTextureSlot *request);
void asdMemFree(void *buffer);

// Start missing effect textures, retry failed requests, then release their temporary buffers.
void effectTextureRequestsPump()
{
    BattleEffectTextureSlot *request = g_textureCache.entries;
    char path[128];
    switch (g_textureCache.state) {
    case 0:
        if (g_textureCache.count != 0) {
            g_textureCache.state = 1;
            return;
        }
        break;
    case 1:
        for (s32 index = 0; index < g_textureCache.count; ++index, ++request) {
            if (request->texture->image.physicalAddress == 0 && request->loaded == 0) {
                FUN_002522f8(path, sizeof(path), "%s%s.tga", "battle/effect/tex/", request->name);
                request->loadingState = 1;
                FUN_002b6480(path, &request->file, 0, FUN_001f4b3c, request);
            }
        }
        g_textureCache.state = 2;
        return;
    case 2:
        for (s32 index = 0; index < g_textureCache.count; ++index, ++request) {
            if (request->texture->image.physicalAddress == 0 && request->loaded == 0) {
                if (request->loadingState == 1) {
                    return;
                }
                if (request->loadingState == 0) {
                    g_textureCache.state = 1;
                    return;
                }
            }
        }
        g_textureCache.state = 3;
        return;
    case 3:
        for (s32 index = 0; index < g_textureCache.count; ++index, ++request) {
            if (request->file != NULL) {
                asdMemFree(request->file);
                request->file = NULL;
            }
        }
        break;
    case 4:
        return;
    default:
        return;
    }
    g_textureCache.state = 4;
}
}
