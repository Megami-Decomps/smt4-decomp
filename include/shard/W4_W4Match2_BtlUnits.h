/* The battle state block and its unit entries as the script commands see them (Shin Megami Tensei IV). */
#ifndef SHARD_W4_W4MATCH2_BTLUNITS_H
#define SHARD_W4_W4MATCH2_BTLUNITS_H

#include "common.h"

/* The object a unit is linked to; its id at +0x46 is what a script refers to the unit by. */
typedef struct BtlUnitLink {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 id;
} BtlUnitLink;

typedef struct BtlUnitEntry {
    /* 0x000 */ u32 flags;      /* 1 = present, 0x10 / 0x40 = excluded here */
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ s16 mainIndex;  /* index of the unit in the battle's main unit list, negative when none */
    /* 0x00A */ u8 unk00A[0x68];
    /* 0x072 */ s16 stat[12];   /* indexed by the script's stat selector (7, 10, 11) */
    /* 0x08A */ u8 unk08A[0x10];
    /* 0x09A */ s16 counter;    /* positive while the unit has a pending effect */
    /* 0x09C */ u8 unk09C[0x32];
    /* 0x0CE */ u16 groupId;
    /* 0x0D0 */ u8 unk0D0[0xE4];
    /* 0x1B4 */ s16 hp;
    /* 0x1B6 */ s16 hpMax;
    /* 0x1B8 */ u8 unk1B8[0xE];
    /* 0x1C6 */ u16 flagMask;   /* bit n set: flag n is on */
    /* 0x1C8 */ u8 unk1C8[4];
    /* 0x1CC */ u16 level;      /* averaged by the script */
    /* 0x1CE */ u8 unk1CE[0x24];
    /* 0x1F2 */ u16 values[1];  /* per slot: the top 6 bits hold a kind */
    /* 0x1F4 */ u8 unk1F4[0x84];
    /* 0x278 */ u8 unk278[4];
    /* 0x27C */ BtlUnitLink *link;
    /* 0x280 */ u8 unk280[8];
} BtlUnitEntry; /* 0x288 bytes */

typedef struct BtlState {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ BtlUnitEntry *units;
    /* 0x1FC4 */ u8 unk1FC4[0x2A01];
    /* 0x49C5 */ s8 hasActiveEntry;
} BtlState;

#endif
