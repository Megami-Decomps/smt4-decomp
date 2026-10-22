#include "common.h"

extern "C" {

void sysMemClear(void *block, s32 size);
extern u8 g_textureCache[];

/* Clears the 0x1308-byte block at 0x5CB200. */
void textureCacheReset(void)
{
    sysMemClear(g_textureCache, 0x1308);
}

} /* extern "C" */
