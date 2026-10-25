#include "common.h"
#include "util/GameFlagEntryGetBit.h"

extern "C" {

u8 *gameFlagBlockGetEntry(u32 index);
u32 FUN_001ada74(u32 id);

/* Reads flag `which` (bits 0-4 of the game's flag entry; 5 asks FUN_001ada74 about id). */
u32 gameFlagEntryGetBit(u32 id, u32 which)
{
    u8 *entry;
    u32 value = 0;

    entry = gameFlagBlockGetEntry(id);

    switch (which) {
    case 0:
        value = *entry & 1;
        break;
    case 1:
        value = (*entry & 2) >> 1;
        break;
    case 2:
        value = (*entry & 4) >> 2;
        break;
    case 4:
        value = (*entry & 0x10) >> 4;
        break;
    case 5:
        value = FUN_001ada74(id);
        break;
    case 3:
        value = (*entry & 8) >> 3;
        break;
    }
    return value;
}

} /* extern "C" */
