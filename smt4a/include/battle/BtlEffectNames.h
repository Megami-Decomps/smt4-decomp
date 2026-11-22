/* The battle effect work's name table (Apocalypse): four named effect entries the action start looks up
 * (btlEffectFindPreferredName) to pick the effect its unit plays. */
#ifndef SMT4A_BATTLE_BTLEFFECTNAMES_H
#define SMT4A_BATTLE_BTLEFFECTNAMES_H

#include "common.h"
#include <stddef.h>

struct BtlEffectNameEntry {
    /* 0x00 */ char name[0x12];
    /* 0x12 */ u16 primaryId;       /* the two values FUN_004e638c starts the unit's action with */
    /* 0x14 */ u16 secondaryId;
};

struct BtlEffectNameTable {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ BtlEffectNameEntry entries[4];
};

struct BtlEffectNameOwner {
    /* 0x0000 */ u8 unk0000[0x1f54];
    /* 0x1f54 */ BtlEffectNameTable *names;
};
typedef char BtlEffectNameOffsets[sizeof(BtlEffectNameEntry) == 0x16 && offsetof(BtlEffectNameEntry, primaryId) == 0x12 &&
    offsetof(BtlEffectNameOwner, names) == 0x1f54 ? 1 : -1];

extern "C" {
/* Finds the entry named like the preferred effect (first, when `preferFirst` is positive) or the fallback; NULL if none. */
char *btlEffectFindPreferredName(BtlEffectNameOwner *owner, s32 preferFirst);
}

#endif
