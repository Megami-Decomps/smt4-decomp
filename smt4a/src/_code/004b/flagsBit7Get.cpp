#include "gamedata/GameDataEntries.h"
#include "gamedata/FlagBitTests.h"

extern "C" {

/* Bit 7 of the flag byte of the state entry of the key pair (`groupId`, `itemId`). */
u8 flagsBit7Get(u32 groupId, u32 itemId)
{
    return (gameDataGetTableEntry(groupId, itemId)->flags & 0x80) >> 7;
}

} /* extern "C" */
