#include "gfx/NamedTextureCache.h"

extern "C" {

int memClear(void *ptr, int size);

extern NamedTextureCache g_textureCache;

void textureCacheReset(void)
{
    memClear(&g_textureCache, sizeof(g_textureCache));
}

} /* extern "C" */
