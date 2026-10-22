/* The battle state block and its unit entries as the script commands see them (Shin Megami Tensei IV). */
#ifndef SHARD_W4_W4MATCH2_BTLUNITS_H
#define SHARD_W4_W4MATCH2_BTLUNITS_H

#include "common.h"
#include <stddef.h>

/* The object a unit is linked to; its id at +0x46 is what a script refers to the unit by. */
typedef struct BtlUnitLink {
    /* 0x00 */ u8 unk00[0xE];
    /* 0x0E */ s16 maxHp;
    /* 0x10 */ u8 unk10[0x36];
    /* 0x46 */ u16 id;
} BtlUnitLink;

struct BtlUnitSource {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ s16 maxHp;
};

typedef struct BtlUnitEntry {
    /* 0x000 */ u32 flags;      /* 1 = present, 0x10 / 0x40 = excluded here */
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ s16 mainIndex;  /* index of the unit in the battle's main unit list, negative when none */
    /* 0x00A */ u8 unk00A[0x64];
    /* 0x06E */ s16 selectionIndex;
    /* 0x070 */ u8 unk070[2];
    /* 0x072 */ s16 stat[12];   /* indexed by the script's stat selector (7, 10, 11) */
    /* 0x08A */ u8 unk08A[0x10];
    /* 0x09A */ s16 counter;    /* positive while the unit has a pending effect */
    /* 0x09C */ u8 unk09C[0x32];
    /* 0x0CE */ u16 groupId;
    /* 0x0D0 */ u8 unk0D0[4];
    /* 0x0D4 */ s16 unk0D4;
    /* 0x0D6 */ u8 unk0D6[0xDE];
    /* 0x1B4 */ s16 hp;
    /* 0x1B6 */ s16 hpMax;
    /* 0x1B8 */ u8 unk1B8[0xE];
    /* 0x1C6 */ u16 flagMask;   /* bit n set: flag n is on */
    /* 0x1C8 */ u8 unk1C8[4];
    /* 0x1CC */ u16 level;      /* averaged by the script */
    /* 0x1CE */ u8 unk1CE[0x24];
    /* Known status entries through index 17; the full upper extent is not established. */
    /* 0x1F2 */ u16 values[0x12]; /* bits 10 and up hold the entry's kind */
    /* 0x216 */ u8 unk216[0x62];
    /* 0x278 */ BtlUnitSource *source;
    /* 0x27C */ BtlUnitLink *link;
    /* 0x280 */ u8 unk280[8];
} BtlUnitEntry; /* 0x288 bytes */

typedef struct BtlState {
    /* 0x0000 */ u8 unk0000[0x64];
    /* 0x0064 */ u32 mode;
    /* 0x0068 */ u8 unk0068[0x1F58];
    /* 0x1FC0 */ BtlUnitEntry *units;
    /* 0x1FC4 */ u8 unk1FC4[0x2A01];
    /* 0x49C5 */ s8 hasActiveEntry;
} BtlState;

struct BattleActionUnit {
    /* 0x000 */ u8 unk000[0x38];
    /* 0x038 */ u8 selectedUnits[109];
    /* 0x0A5 */ u8 unk0A5[0xE73];
};

struct TurnOrderUnit {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ s16 tieIndex;
    /* 0x00A */ u8 unk00a[0x1B8];
    /* 0x1C2 */ s16 speed;
    /* 0x1C4 */ u8 unk1c4[0x90];
    /* 0x254 */ s16 speedBonus;
    /* 0x256 */ u8 unk256[0x32];
};
struct TurnOrderState {
    /* 0x0000 */ u8 unk0000[0x1FC0];
    /* 0x1FC0 */ TurnOrderUnit *units;
    /* 0x1FC4 */ u8 unk1fc4[0xF42];
    /* 0x2F06 */ s16 order[12];
};
typedef char TurnOrderUnitSizeCheck[sizeof(TurnOrderUnit) == 0x288 ? 1 : -1];
typedef char BtlUnitLinkSizeCheck[sizeof(BtlUnitLink) == 0x48 ? 1 : -1];
typedef char BtlUnitEntrySizeCheck[sizeof(BtlUnitEntry) == 0x288 ? 1 : -1];
typedef char BtlStateSizeCheck[sizeof(BtlState) == 0x49C8 ? 1 : -1];
typedef char BtlStateModeOffsetCheck[offsetof(BtlState, mode) == 0x64 ? 1 : -1];
typedef char BtlStateUnitsOffsetCheck[offsetof(BtlState, units) == 0x1FC0 ? 1 : -1];
typedef char BtlUnitSourceOffsetCheck[offsetof(BtlUnitEntry, source) == 0x278 ? 1 : -1];
typedef char BtlUnitLinkIdOffsetCheck[offsetof(BtlUnitLink, id) == 0x46 ? 1 : -1];
typedef char BattleActionUnitSizeCheck[sizeof(BattleActionUnit) == 0xF18 ? 1 : -1];
typedef char BtlUnitSelectionIndexOffsetCheck[offsetof(BtlUnitEntry, selectionIndex) == 0x6E ? 1 : -1];
typedef char BtlUnitLookupKeyOffsetCheck[offsetof(BtlUnitEntry, unk0D4) == 0xD4 ? 1 : -1];
typedef char BtlUnitValuesOffsetCheck[offsetof(BtlUnitEntry, values) == 0x1F2 ? 1 : -1];
typedef char BtlUnitKnownValuesSizeCheck[sizeof(((BtlUnitEntry *)0)->values) == 0x24 ? 1 : -1];
typedef char BtlUnitKnownValuesEndCheck[offsetof(BtlUnitEntry, unk216) == 0x216 ? 1 : -1];

#endif
