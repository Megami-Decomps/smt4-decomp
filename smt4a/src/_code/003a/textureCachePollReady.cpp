#include "gfx/NamedTextureCache.h"


extern "C" {
extern NamedTextureCache g_textureCache;

/* Returns 1 while a cached texture still has no image in place; otherwise marks the cache ready
 * and returns 0. */
s32 textureCachePollReady(void)
{
    g_textureCache.state = 0;
    for (s32 i = 0; i < g_textureCache.count; i++) {
        if (g_textureCache.entries[i].texture->image.physicalAddress == 0) {
            return 1;
        }
    }
    g_textureCache.state = 4;
    return 0;
}
}
