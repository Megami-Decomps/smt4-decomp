#include "common.h"

extern "C" {

int asdTMTexTableLoadSprites(int table);
int FUN_002c58c8(int table, int index);

extern struct {
    u8 unk00;
    s8 spriteRefCount;
} DAT_0043dc20;

/* Loads the sprite table on the first reference. */
void FUN_001dc994(void)
{
    if (DAT_0043dc20.spriteRefCount <= 0) {
        asdTMTexTableLoadSprites(0x11);
        FUN_002c58c8(0x11, 0);
    }
    DAT_0043dc20.spriteRefCount = DAT_0043dc20.spriteRefCount + 1;
}

} /* extern "C" */
