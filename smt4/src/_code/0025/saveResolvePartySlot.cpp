/* NON_MATCHING: compiler folds the save-header and party-slot addresses differently from the retail nested header. */
#include "common.h"
extern "C" {
struct SavedUnitRecord { u8 data[0x604]; };
struct SavedPartyImage { u8 unk00[0x11C]; SavedUnitRecord records[24]; u8 unk917C[0x18]; s8 slots[1]; };
struct SavedPartyGlobals { u32 unk00; SavedPartyImage *image; };
extern SavedPartyGlobals g_gameDataBlocks;
/* Resolve a saved party slot to its unit record, or null for an empty slot. */
SavedUnitRecord *saveResolvePartySlot(u32 slot) { s32 index=g_gameDataBlocks.image->slots[slot]; return index<0 ? NULL : &g_gameDataBlocks.image->records[index]; }
}
