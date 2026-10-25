#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/asdTMTexTableLoadSprites.h"

extern "C" {

int asdTMTexTableLoadEntryAsync(int table, int index);

void spriteTable2aLoad(void)
{
    asdTMTexTableLoadSprites(0x2a);
    asdTMTexTableLoadEntryAsync(0x2a, 0);
}

} /* extern "C" */
