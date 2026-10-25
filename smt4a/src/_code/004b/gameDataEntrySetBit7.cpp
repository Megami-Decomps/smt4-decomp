#include "gamedata/GameDataEntries.h"
extern "C" {
/* Replaces the table entry's top flag bit. */
void gameDataEntrySetBit7(u32 groupId, u32 itemId, u32 enabled) {
    ItemFlagCacheState *entry = gameDataGetTableEntry(groupId, itemId);
    entry->flags = (entry->flags & ~0x80) | (enabled << 7);
}
}
