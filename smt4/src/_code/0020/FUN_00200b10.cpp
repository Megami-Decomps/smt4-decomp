#include "common.h"

extern "C" {

int memClear(void *ptr, int size);

extern u8 g_textureCache;

void FUN_00200b10(void)
{
    memClear(&g_textureCache, 0x1308);
}

} /* extern "C" */
