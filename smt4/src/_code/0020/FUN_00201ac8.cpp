#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/asdTMTexTableLoadSprites.h"

extern "C" {

int fileSlotLoad(int id);
int asdTMTexTableLoadEntryAsync(int table, int index);

void FUN_00201ac8(void)
{
    s32 i;

    asdTMTexTableLoadSprites(0x19);
    i = 0;
    do {
        asdTMTexTableLoadEntryAsync(0x19, i);
        i++;
    } while (i < 3);
    fileSlotLoad(0x39);
}

} /* extern "C" */
