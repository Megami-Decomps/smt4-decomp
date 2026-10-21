/* NON_MATCHING: compiler selects compare-chain dispatch instead of the retail jump table and merges different state-store tails. */
#include "common.h"

struct EffectTextureResource {
    u8 unk00[0x30];
    void *texture; /* 0x30 */
};
struct EffectTextureRequest {
    EffectTextureResource *resource; /* 0x00 */
    char name[0x40];                 /* 0x04 */
    void *buffer;                    /* 0x44 */
    u8 skip;                         /* 0x48 */
    s8 state;                        /* 0x49 */
    u8 unk4a[2];
};
struct EffectTextureRequests {
    EffectTextureRequest entries[64];
    s32 count; /* 0x1300 */
    u32 state; /* 0x1304 */
};

extern "C" {
extern EffectTextureRequests g_textureCache;
s32 FUN_002522f8(char *buffer, u32 size, const char *format, ...);
void FUN_001f4b3c(void *request);
void FUN_002b6480(const char *path, void **result, u32 flags, void (*callback)(void *), void *request);
void asdMemFree(void *buffer);

// Start missing effect textures, retry failed requests, then release their temporary buffers.
void effectTextureRequestsPump()
{
    EffectTextureRequest *request = g_textureCache.entries;
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
            if (request->resource->texture == NULL && request->skip == 0) {
                FUN_002522f8(path, sizeof(path), "%s%s.tga", "battle/effect/tex/", request->name);
                request->state = 1;
                FUN_002b6480(path, &request->buffer, 0, FUN_001f4b3c, request);
            }
        }
        g_textureCache.state = 2;
        return;
    case 2:
        for (s32 index = 0; index < g_textureCache.count; ++index, ++request) {
            if (request->resource->texture == NULL && request->skip == 0) {
                if (request->state == 1) {
                    return;
                }
                if (request->state == 0) {
                    g_textureCache.state = 1;
                    return;
                }
            }
        }
        g_textureCache.state = 3;
        return;
    case 3:
        for (s32 index = 0; index < g_textureCache.count; ++index, ++request) {
            if (request->buffer != NULL) {
                asdMemFree(request->buffer);
                request->buffer = NULL;
            }
        }
        break;
    default:
        return;
    }
    g_textureCache.state = 4;
}
}
