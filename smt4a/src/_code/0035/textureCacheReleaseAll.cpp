#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

struct TextureCacheEntry {
    AsdTexture *texture; // 0x00
    u8 unk04[0x48];
};
struct TextureCache {
    TextureCacheEntry entries[64]; // 0x0000
    s32 count; // 0x1300
};

extern "C" {
extern TextureCache g_textureCache;
void asdTextureRelease(AsdTexture *texture);

// Release every cached texture and reset the cache count.
void textureCacheReleaseAll(void)
{
    TextureCache *cache = &g_textureCache;
    TextureCacheEntry *entry = cache->entries;
    for (s32 index = 0; index < cache->count; ++index, ++entry) {
        if (entry->texture != NULL) {
            asdTextureRelease(entry->texture);
            entry->texture = NULL;
        }
    }
    cache->count = 0;
}
}
