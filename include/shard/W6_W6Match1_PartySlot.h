#ifndef SHARD_W6_W6MATCH1_PARTYSLOT_H
#define SHARD_W6_W6MATCH1_PARTYSLOT_H

#include "common.h"
#include <stddef.h>

struct PartySlotA {
    /* 0x000 */ u8 unk000[0xE];
    /* 0x00E */ s16 unk0E;
    /* 0x010 */ u16 unk10;
    /* 0x012 */ u8 unk12[0x18];
    /* 0x02A */ s16 unk2A;
    /* 0x02C */ u16 unk2C;
    /* 0x02E */ u8 unk2E[0x32];
    /* 0x060 */ u16 unk60;
    /* 0x062 */ u16 unk62;
    /* 0x064 */ u8 unk64[0xC8];
    u16 id; // 0x12c
    u16 unk12e;
    u32 flags; // 0x130
};

struct PartySlotTableA {
    u8 unk0000[0x1ddc];
    PartySlotA slots[12]; // 0x1ddc
};
typedef char PartySlotASizeCheck[sizeof(PartySlotA) == 0x134 ? 1 : -1];
typedef char PartySlotAOffsetsCheck[offsetof(PartySlotA, unk2A) == 0x2A && offsetof(PartySlotA, unk62) == 0x62 && offsetof(PartySlotA, id) == 0x12C && offsetof(PartySlotA, flags) == 0x130 && offsetof(PartySlotTableA, slots) == 0x1DDC ? 1 : -1];
typedef char PartySlotAResetFieldOffsetCheck[offsetof(PartySlotA, unk60) == 0x60 ? 1 : -1];

#endif
