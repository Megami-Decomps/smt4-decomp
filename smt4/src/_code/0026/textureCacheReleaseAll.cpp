#include "gfx/NamedTextureCache.h"


extern "C" {
extern NamedTextureCache g_textureCache;
void asdTextureRelease(AsdTexture *texture);

// Release every cached texture and reset the cache count.
void textureCacheReleaseAll(void)
{
    NamedTextureCache *cache = &g_textureCache;
    BattleEffectTextureSlot *entry = cache->entries;
    for (s32 index = 0; index < cache->count; ++index, ++entry) {
        if (entry->texture != NULL) {
            asdTextureRelease(entry->texture);
            entry->texture = NULL;
        }
    }
    cache->count = 0;
}
}
