/* Battle entry table (smt4): the battle main state's array of 0x6d combatant entries. */
#ifndef SHARD_W4_MATCH6_BTLENTRY_H
#define SHARD_W4_MATCH6_BTLENTRY_H

#include "common.h"

#define BTL_ENTRY_COUNT 0x6D

#define BTL_ENTRY_FLAG_ACTIVE   0x01
#define BTL_ENTRY_FLAG_PRESENT  0x10
#define BTL_ENTRY_FLAG_BLOCKED  0x40

/* An equipment set: eight item ids. */
typedef struct BtlEquip {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u16 items[8];
} BtlEquip;

typedef struct BtlEntry {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x6E];
    /* 0x072 */ s16 stat[12];       /* indexed by the script's kind (7, 10 and 11 are used) */
    /* 0x08A */ u8 unk08a[0xCE - 0x8A];
    /* 0x0CE */ u16 id;             /* the id scripts refer to the entry by */
    /* 0x0D0 */ u8 unk0d0[0x1B4 - 0xD0];
    /* 0x1B4 */ s16 value;          /* returned by the script command that looks an entry up by listed id */
    /* 0x1B6 */ u8 unk1b6[0x10];
    /* 0x1C6 */ u16 groupMask;      /* one bit per script group */
    /* 0x1C8 */ u8 unk1c8[0x278 - 0x1C8];
    /* 0x278 */ BtlEquip *equipA;
    /* 0x27C */ BtlEquip *equipB;
    /* 0x280 */ u32 unk280;
    /* 0x284 */ void *devil;        /* non-NULL when the entry is a demon */
} BtlEntry; /* 0x288 bytes */

typedef struct BtlMainState {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ BtlEntry *entries; /* BTL_ENTRY_COUNT entries */
    /* 0x1FC4 */ u8 unk1fc4[0x49C5 - 0x1FC4];
    /* 0x49C5 */ s8 hasActiveEntry;
} BtlMainState;

#endif
