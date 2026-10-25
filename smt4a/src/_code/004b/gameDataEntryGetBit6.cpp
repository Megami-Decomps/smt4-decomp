#include "gamedata/GameDataEntries.h"

extern "C" {

u32 gameDataEntryGetBit6(u32 groupId, u32 itemId)
{
    return (gameDataGetTableEntry(groupId, itemId)->flags & 0x40) >> 6;
}

} /* extern "C" */
