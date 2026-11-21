#include <stdio.h>
#include "gfx/NamedTextureCache.h"


extern "C" {
extern NamedTextureCache g_textureCache;
void FUN_001f4b3c(u32 unused, BattleEffectTextureSlot *request, u32 bytes);
void asdLoadFileAsyncDefault(const char *path, void **result, u32 flags, NamedTextureLoadCallback callback, BattleEffectTextureSlot *request);
void asdMemFree(void *buffer);

/* Starts missing effect textures, retries failed requests, then releases their temporary buffers. */
void effectTextureRequestsPump()
{
    BattleEffectTextureSlot *request = g_textureCache.entries;
    char path[128];
    switch (g_textureCache.state) {
    case 0:
        if (g_textureCache.count != 0) {
            g_textureCache.state = 1;
        } else {
            g_textureCache.state = 4;
        }
        break;
    case 1:
        for (s32 index = 0; index < g_textureCache.count; ++index, ++request) {
            if (request->texture->image.physicalAddress == 0 && request->loaded == 0) {
                snprintf(path, sizeof(path), "%s%s.tga", "battle/effect/tex/", request->name);
                request->loadingState = 1;
                asdLoadFileAsyncDefault(path, &request->file, 0, FUN_001f4b3c, request);
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
        g_textureCache.state = 4;
        break;
    case 4:
        break;
    default:
        break;
    }
}
}
