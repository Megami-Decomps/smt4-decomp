/* battle/btlUnit.c: the battle unit, the work block of one acting combatant, and the action module's
 * slots that hold the units (g_btlAction.slots). btlUnitGet (battle/BattleUnitSlot.h, per game) returns
 * the unit a script context selects. */
#ifndef BATTLE_BTLUNITWORK_H
#define BATTLE_BTLUNITWORK_H

#include "common.h"
#include <stddef.h>

struct BtlEntry;
struct BtlCombatantEntryA;
struct BtlActionRecord;

/* Halfword index of the per-slot table in a unit's data block (BtlUnitDataA.values). */
#define BTL_UNIT_SLOT_TABLE 0xA9
/* The same table in Shin Megami Tensei IV (BtlUnitData.values). */
#define BTL_UNIT_SLOT_TABLE_IV 0x93

/* A unit's data block: the part of its battle entry from 0xCC on (Shin Megami Tensei IV layout); the
 * block btlFindEntryBlockByMemberId returns. */
typedef struct BtlUnitData {
    /* 0x000 */ u8 flags;          /* bit 2: the unit fights on the second side */
    /* 0x001 */ u8 unk001;
    /* 0x002 */ u16 id;            /* the entry's id (BtlEntry.id) */
    /* 0x004 */ u8 unk004[8];
    /* 0x00C */ u32 parts[50];     /* ids of the unit's part objects (idSlotsFindEntryById) */
    /* 0x0D4 */ u8 unk0D4[0x14];
    /* 0x0E8 */ s16 hp;
    /* 0x0EA */ s16 maxHp;
    /* 0x0EC */ s16 mp;
    /* 0x0EE */ s16 maxMp;
    /* 0x0F0 */ s16 strength;
    /* 0x0F2 */ s16 magic;
    /* 0x0F4 */ s16 level;         /* scales an attack's base power */
    /* 0x0F6 */ u8 unk0F6[4];
    /* 0x0FA */ u16 statusFlags;   /* status bits (0x800: inactive, ...) */
    /* 0x0FC */ u8 unk0FC[4];
    /* 0x100 */ u16 unk100;
    /* 0x102 */ u8 unk102[0x24];
    /* 0x126 */ u16 values[0x12];  /* bits 10 and up hold a kind (BtlEntry.values) */
    /* 0x14A */ u8 unk14A;
    /* 0x14B */ u8 affinityIndex;  /* index into an attack summary's resistance percents */
    /* 0x14C */ s16 actionKind;    /* the action the unit takes next */
    /* 0x14E */ s16 actionArg;
} BtlUnitData;

/* A unit's data block (Apocalypse layout): the part of its battle entry from 0x164 on. */
typedef struct BtlUnitDataA {
    /* 0x000 */ u8 flags;          /* bits 0-1: the unit's appearance animates */
    /* 0x001 */ u8 unk001;
    /* 0x002 */ u16 id;            /* the entry's id (BtlCombatantEntryA.id) */
    /* 0x004 */ u8 unk004[8];
    /* 0x00C */ u32 parts[50];     /* ids of the unit's part objects (stateEntryFindById) */
    /* 0x0D4 */ u8 unk0D4[0x20];
    /* 0x0F4 */ s32 hp;
    /* 0x0F8 */ s32 maxHp;
    /* 0x0FC */ s32 mp;
    /* 0x100 */ s32 maxMp;
    /* 0x104 */ u8 unk104[0xC];
    /* 0x110 */ u16 statusFlags;  /* status bits */
    /* 0x112 */ u8 unk112[4];
    /* 0x116 */ u16 unk116;
    /* 0x118 */ u8 unk118[0x3A];
    /* 0x152 */ u16 values[0x36];  /* bits 10 and up hold a kind */
    /* 0x1BE */ s16 actionKind;    /* the action the unit takes next */
    /* 0x1C0 */ s16 actionArg;
    /* 0x1C2 */ u8 unk1C2[0x66];
    /* 0x228 */ s32 unk228;
} BtlUnitDataA;

/* One per-target pair a unit keeps (0x5A8 / 0x5B8): the battle entry and a value; entry -1 and value
 * 0 mark a free pair. */
typedef struct BtlUnitTargetPair {
    /* 0x0 */ s32 entry;
    /* 0x4 */ s32 value;
} BtlUnitTargetPair;

#define BTL_UNIT_TARGET_PAIR_COUNT 133

/* A battle unit (Shin Megami Tensei IV): the work block of one acting combatant. The action module
 * keeps four of them (g_btlAction.slots); btlUnitGet returns the one a script context selects. */
typedef struct BtlUnit {
    /* 0x000 */ u32 flags;
    /* 0x004 */ s8 state;           /* 5: down */
    /* 0x005 */ u8 command;         /* the action command requested next */
    /* 0x006 */ u16 frames;
    /* 0x008 */ u32 timer;
    /* 0x00C */ u8 unk00C[4];
    /* 0x010 */ u32 phase;
    /* 0x014 */ u8 unk014[4];
    /* 0x018 */ u32 drawState;
    /* 0x01C */ u8 unk01C[4];
    /* 0x020 */ BtlEntry *entry;    /* the unit's battle entry */
    /* 0x024 */ BtlActionRecord *record;
    /* 0x028 */ BtlUnitData *data;  /* the entry's data block (btlFindEntryBlockByMemberId) */
    /* 0x02C */ s16 index;
    /* 0x02E */ u8 unk02E[2];
    /* 0x030 */ s32 mode;
    /* 0x034 */ s32 argument;
    /* 0x038 */ s8 targets[0x6D]; /* indexed by battle entry: 1 = selected as a target */
    /* 0x0A5 */ u8 unk0A5[0x4DB];
    /* 0x580 */ s32 parameter;
    /* 0x584 */ u8 unk584[0x10];
    /* 0x594 */ u32 unk594;         /* the unit's secondary model group */
    /* 0x598 */ u8 unk598[0x10];
    /* 0x5A8 */ BtlUnitTargetPair pairs[BTL_UNIT_TARGET_PAIR_COUNT];
    /* 0x9D0 */ u8 unk9D0[0x548];
} BtlUnit;

/* One of the action module's unit slots: the script context that owns it, then the unit. */
typedef struct BtlActionSlot {
    /* 0x000 */ void *owner;
    /* 0x004 */ BtlUnit unit;
} BtlActionSlot;

typedef char BtlUnitLayoutCheck[
    sizeof(BtlUnit) == 0xF18 && sizeof(BtlActionSlot) == 0xF1C && offsetof(BtlActionSlot, unit) == 4 &&
    offsetof(BtlUnit, state) == 4 && offsetof(BtlUnit, command) == 5 && offsetof(BtlUnit, entry) == 0x20 &&
    offsetof(BtlUnit, data) == 0x28 && offsetof(BtlUnit, targets) == 0x38 &&
    offsetof(BtlUnit, parameter) == 0x580 && offsetof(BtlUnit, unk594) == 0x594 &&
    offsetof(BtlUnit, pairs) == 0x5A8 ? 1 : -1];

/* The same unit in Apocalypse; the action module keeps twelve of them. */
typedef struct BtlUnitA {
    /* 0x000 */ u32 flags;
    /* 0x004 */ s8 state;
    /* 0x005 */ u8 command;         /* the action command requested next */
    /* 0x006 */ u8 unk006[0x1A];
    /* 0x020 */ BtlCombatantEntryA *entry; /* the unit's battle entry */
    /* 0x024 */ u8 unk024[4];
    /* 0x028 */ BtlUnitDataA *data;  /* the entry's data block (btlFindEntryBlockByMemberId) */
    /* 0x02C */ u16 id;
    /* 0x02E */ u8 unk02E[0xA];
    /* 0x038 */ s8 targets[0x6D]; /* indexed by battle entry: 1 = selected as a target */
    /* 0x0A5 */ u8 unk0A5[0x4EF];
    /* 0x594 */ u32 cameraMode;     /* the action's camera mode (FUN_004e69e8) */
    /* 0x598 */ u8 unk598[5];
    /* 0x59D */ s8 uiMode;          /* the command menu variant (dispatchBattleCommandUiVariant) */
    /* 0x59E */ u8 unk59E[0x1A];
    /* 0x5B8 */ BtlUnitTargetPair pairs[BTL_UNIT_TARGET_PAIR_COUNT];
    /* 0x9E0 */ u8 unk9E0[0x870];
} BtlUnitA;

typedef struct BtlActionSlotA {
    /* 0x000 */ void *owner;
    /* 0x004 */ BtlUnitA unit;
} BtlActionSlotA;

typedef char BtlUnitALayoutCheck[
    sizeof(BtlUnitA) == 0x1250 && sizeof(BtlActionSlotA) == 0x1254 && offsetof(BtlUnitA, entry) == 0x20 &&
    offsetof(BtlUnitA, data) == 0x28 && offsetof(BtlUnitA, targets) == 0x38 &&
    offsetof(BtlUnitA, cameraMode) == 0x594 && offsetof(BtlUnitA, uiMode) == 0x59D && offsetof(BtlUnitA, pairs) == 0x5B8 ? 1 : -1];

typedef char BtlUnitDataLayoutCheck[
    offsetof(BtlUnitData, id) == 2 && offsetof(BtlUnitData, hp) == 0xE8 && offsetof(BtlUnitData, level) == 0xF4 &&
    offsetof(BtlUnitData, statusFlags) == 0xFA && offsetof(BtlUnitData, affinityIndex) == 0x14B &&
    offsetof(BtlUnitData, values) == 0x126 && offsetof(BtlUnitDataA, values) == 0x152 && offsetof(BtlUnitData, actionKind) == 0x14C &&
    offsetof(BtlUnitDataA, id) == 2 && offsetof(BtlUnitDataA, hp) == 0xF4 && offsetof(BtlUnitDataA, statusFlags) == 0x110 && offsetof(BtlUnitDataA, actionKind) == 0x1BE &&
    offsetof(BtlUnitDataA, unk228) == 0x228 ? 1 : -1];

#endif
