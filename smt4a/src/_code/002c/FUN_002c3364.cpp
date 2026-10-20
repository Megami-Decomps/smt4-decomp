#include "common.h"

extern "C" {

void asdTMTexTableLoadSprites(s32 table);
void FUN_001acf98(s32 table, s32 index);
void loadSlotEnsureLoaded(s32 id);

/* Prepares table 0x11, runs FUN_001acf98 on its three entries and calls loadSlotEnsureLoaded(0x39). */
void FUN_002c3364(void)
{
    s32 i;

    asdTMTexTableLoadSprites(0x11);
    i = 0;
    do {
        FUN_001acf98(0x11, i);
        i = i + 1;
    } while (i < 3);
    loadSlotEnsureLoaded(0x39);
}

} /* extern "C" */
