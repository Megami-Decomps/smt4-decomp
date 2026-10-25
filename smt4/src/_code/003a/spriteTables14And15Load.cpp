#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/asdTMTexTableLoadSprites.h"

extern "C" {

int asdTMTexTableLoadEntryAsync(int table, int index);

void spriteTables14And15Load(void)
{
    int i;

    asdTMTexTableLoadSprites(8);
    asdTMTexTableLoadSprites(0x14);
    asdTMTexTableLoadSprites(0x15);
    asdTMTexTableLoadEntryAsync(8, 10);
    i = 0;
    do {
        asdTMTexTableLoadEntryAsync(0x14, i);
        i = i + 1;
    } while (i < 5);
    i = 0;
    do {
        asdTMTexTableLoadEntryAsync(0x15, i);
        i = i + 1;
    } while (i < 4);
}

} /* extern "C" */
