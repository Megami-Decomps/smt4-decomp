#include "shard/Shard003D.h"

extern "C" {

extern u8 *gameFlagBlockGetEntry(s32 index);

/* Bit 6 of the first byte of party entry `index`. */
u32 partyEntryGetBit6(s32 index)
{
    u8 *entry = gameFlagBlockGetEntry(index);

    return (*entry & 0x40) >> 6;
}

} /* extern "C" */
