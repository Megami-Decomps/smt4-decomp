#include "common.h"
extern "C" {
struct SavedUnitRecord { u8 data[0x604]; };
/* The save block behind the party image's 0x8c-byte header. */
struct SavedPartyBlock { u8 unk00[0x90]; SavedUnitRecord records[24]; u8 unk9110[0x18]; s8 slots[1]; };
struct SavedPartyImage { u8 unk00[0x8c]; SavedPartyBlock block; };
struct SavedPartyGlobals { u32 unk00; SavedPartyImage *image; };
extern SavedPartyGlobals g_gameDataBlocks;

/* Resolve a saved party slot to its unit record, or null for an empty slot. */
SavedUnitRecord *saveResolvePartySlot(u32 slot)
{
    SavedPartyBlock *block = &g_gameDataBlocks.image->block;
    s32 index = block->slots[slot];
    SavedUnitRecord *record = NULL;
    if (index >= 0) {
        record = &block->records[index];
    }
    return record;
}
}
