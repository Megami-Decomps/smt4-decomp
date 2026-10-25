/* Tail call into the function that follows. */
#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/asdTMTexTableLoadSprites.h"

extern "C" {

void asdTMTexTableLoadEntryAsync(u32 table, u32 a);

void FUN_002a5eb4(void)
{
    asdTMTexTableLoadSprites(47);
    asdTMTexTableLoadEntryAsync(47, 0);
}

}
