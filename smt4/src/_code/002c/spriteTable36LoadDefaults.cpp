#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/asdTMTexTableLoadSprites.h"

extern "C" {
void asdTMTexTablePrepareNodeImage(u32 table, u32 option);
}

// Load the sprite table and apply its default option.
extern "C" void spriteTable36LoadDefaults()
{
    asdTMTexTableLoadSprites(36);
    asdTMTexTablePrepareNodeImage(36, 0);
}
