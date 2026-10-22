#include "common.h"

extern "C" {

int memClear(void *ptr, int size);

extern u8 g_textureCache;

void textureCacheReset(void)
{
    memClear(&g_textureCache, 0x1308);
}

} /* extern "C" */
