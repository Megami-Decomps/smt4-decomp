#include "common.h"

extern "C" {
void asdTMTexTableLoadSprites(u32 table);
void FUN_002c58c8(u32 table, u32 option);
}

// Load the sprite table and apply its default option.
extern "C" void spriteTable36LoadDefaults()
{
    asdTMTexTableLoadSprites(36);
    FUN_002c58c8(36, 0);
}
