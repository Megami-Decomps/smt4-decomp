#include "gfx/NamedTextureCache.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {


extern NamedTextureCache g_textureCache;

void textureCacheReset(void)
{
    reinterpret_cast<int>(memClear(&g_textureCache, sizeof(g_textureCache)));
}

} /* extern "C" */
