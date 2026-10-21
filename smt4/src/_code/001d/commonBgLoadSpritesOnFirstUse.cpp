#include "common.h"

extern "C" {

int asdTMTexTableLoadSprites(int table);
int FUN_002c58c8(int table, int index);

extern struct {
    u8 unk00;
    s8 spriteRefCount;
} g_commonBg;

/* Loads the sprite table on the first reference. */
void commonBgLoadSpritesOnFirstUse(void)
{
    if (g_commonBg.spriteRefCount <= 0) {
        asdTMTexTableLoadSprites(0x11);
        FUN_002c58c8(0x11, 0);
    }
    g_commonBg.spriteRefCount = g_commonBg.spriteRefCount + 1;
}

} /* extern "C" */
