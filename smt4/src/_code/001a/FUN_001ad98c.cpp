#include "common.h"

extern "C" {

int asdTMTexTableLoadSprites(int table);
int FUN_002c58c8(int table, int index);

extern struct {
    s8 unk00;
    s8 spriteRefCount;
} g_gameGlobals;

/* Loads the sprite table on the first reference. */
void FUN_001ad98c(void)
{
    s32 i;

    if (g_gameGlobals.spriteRefCount <= 0) {
        asdTMTexTableLoadSprites(0x1a);
        i = 0;
        do {
            FUN_002c58c8(0x1a, i);
            i++;
        } while (i < 3);
    }
    g_gameGlobals.spriteRefCount = g_gameGlobals.spriteRefCount + 1;
}

} /* extern "C" */
