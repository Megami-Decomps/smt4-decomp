#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/asdTMTexTableLoadSprites.h"

extern "C" {

int asdTMTexTableLoadEntryAsync(int table, int index);

void FUN_00192884(void)
{
    s32 i;

    asdTMTexTableLoadSprites(0x1d);
    i = 0;
    do {
        asdTMTexTableLoadEntryAsync(0x1d, i);
        i++;
    } while (i < 3);
}

} /* extern "C" */
