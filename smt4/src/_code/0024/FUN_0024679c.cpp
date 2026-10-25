/* NON_MATCHING: retail loads the cache+0x1000 anchor then subtracts to find entries; the compiler loads the object base and adds to find count/state. */
#include "gfx/NamedTextureCache.h"


extern "C" {
extern NamedTextureCache g_textureCache;

/* Returns 1 while a cached texture still has no image in place; otherwise marks the cache ready
 * and returns 0. */
s32 FUN_0024679c(void)
{
    NamedTextureCache *cache = &g_textureCache;
    cache->state = 0;
    for (s32 i = 0; i < cache->count; i++) {
        if (cache->entries[i].texture->image.physicalAddress == 0) {
            return 1;
        }
    }
    cache->state = 4;
    return 0;
}
}
