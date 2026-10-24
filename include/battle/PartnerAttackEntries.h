/* battle/btlPartnerAttack.cpp: the table of partner attack entries (BtlPartnerAttackA::entries). */
#ifndef BATTLE_PARTNERATTACKENTRIES_H
#define BATTLE_PARTNERATTACKENTRIES_H

#include "common.h"
#include <stddef.h>
#include "shard/W6_W6Match7_DrawParameters.h"

#define PARTNER_ATTACK_ENTRY_COUNT 12

/* One entry (0xb0 bytes). Its constructor does nothing; the table clears the fields. */
class PartnerAttackEntry {
public:
    PartnerAttackEntry();

    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ f32 unk08;
    /* 0x0c */ f32 unk0c;
    /* 0x10 */ f32 unk10;
    /* 0x14 */ u8 unk14[0x8c];
    /* 0xa0 */ u8 unkA0;
    /* 0xa4 */ u32 unkA4;
    /* 0xa8 */ void **slot;      /* buffer slot released with asdMemFreeSlot */
    /* 0xac */ u32 unkAC;
};

/* The entries, then the draw parameter packet they share (0x860 bytes). */
class PartnerAttackEntries {
public:
    PartnerAttackEntries();

    /* 0x000 */ PartnerAttackEntry entries[PARTNER_ATTACK_ENTRY_COUNT];
    /* 0x840 */ Params002c312c parameters;
};

typedef char PartnerAttackEntriesLayoutCheck[sizeof(PartnerAttackEntry) == 0xb0 &&
    offsetof(PartnerAttackEntry, slot) == 0xa8 &&
    offsetof(PartnerAttackEntries, parameters) == 0x840 &&
    sizeof(PartnerAttackEntries) == 0x860 ? 1 : -1];

#endif
