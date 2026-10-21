#ifndef SHARD_W6_W6MATCH1_PARTYSLOT_H
#define SHARD_W6_W6MATCH1_PARTYSLOT_H

#include "common.h"

struct PartySlotA {
    u8 unk000[0x12c];
    u16 id; // 0x12c
    u16 unk12e;
    u32 flags; // 0x130
};

struct PartySlotTableA {
    u8 unk0000[0x1ddc];
    PartySlotA slots[12]; // 0x1ddc
};

#endif
