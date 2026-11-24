/* battle/btlUnit.c: the battle unit, the work block of one acting combatant, and the action module's
 * slots that hold the units (g_btlAction.slots). btlUnitGet (battle/BattleUnitSlot.h, per game) returns
 * the unit a script context selects. */
#ifndef BATTLE_BTLUNITWORK_H
#define BATTLE_BTLUNITWORK_H

#include "common.h"
#include <stddef.h>

struct BtlEntry;
struct BtlUnitData;
struct BtlCombatantEntryA;
struct BtlUnitDataA;
struct BtlActionRecord;
struct BattleRosterRecordA;

/* Halfword index of the per-slot table in a unit's data block (BtlUnitDataA.values). */
#define BTL_UNIT_SLOT_TABLE 0xA9
/* The same table in Shin Megami Tensei IV (BtlUnitData.values). */
#define BTL_UNIT_SLOT_TABLE_IV 0x93

/* One per-target pair a unit keeps (0x5A8 / 0x5B8): the battle entry and a value; entry -1 and value
 * 0 mark a free pair. */
typedef struct BtlUnitTargetPair {
    /* 0x0 */ s32 entry;
    /* 0x4 */ s32 value;
} BtlUnitTargetPair;

#define BTL_UNIT_TARGET_PAIR_COUNT 133

/* The HP values an IV unit keeps for one target while its action plays out. */
struct BtlUnitTargetState {
    /* 0x00 */ u16 hp;
    /* 0x02 */ u16 maxHp;
    /* 0x04 */ u8 unk04[6];
};

enum { BTL_UNIT_TARGET_COUNT = 109 };

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
    /* 0x9D0 */ u8 unk9D0[4];
    /* 0x9D4 */ BtlUnitTargetState targetStates[BTL_UNIT_TARGET_COUNT];
    /* 0xE16 */ u8 unkE16[0x102];
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
    offsetof(BtlUnit, pairs) == 0x5A8 && offsetof(BtlUnit, targetStates) == 0x9D4 &&
    sizeof(BtlUnitTargetState) == 0xA ? 1 : -1];

/* What an Apocalypse unit tracks for one target while its action plays out (0x10 bytes). */
typedef struct BtlUnitTargetStateA {
    /* 0x0 */ u16 startFrame;       /* the target's animation window (btlCommandExtendAnimationWindow) */
    /* 0x2 */ u16 endFrame;
    /* 0x4 */ s32 hp;               /* the HP the target is left with as the queued hits land (FUN_004e5f2c) */
    /* 0x8 */ s32 recoveryPercent;  /* the percentage a tier-2 survival restores */
    /* 0xC */ u8 unk0C[4];
} BtlUnitTargetStateA;

#define BTL_UNIT_TARGET_STATE_COUNT 135

/* The same unit in Apocalypse; the action module keeps twelve of them. */
typedef struct BtlUnitA {
    /* 0x000 */ u32 flags;
    /* 0x004 */ s8 state;
    /* 0x005 */ u8 command;         /* the action command requested next */
    /* 0x006 */ u8 unk006[6];
    /* 0x00C */ u32 unk00C;         /* cleared when an action starts (btlUnitStartAction) */
    /* 0x010 */ u8 unk010[0xC];
    /* 0x01C */ u32 unk01C;         /* cleared when an action starts */
    /* 0x020 */ BtlCombatantEntryA *entry; /* the unit's battle entry */
    /* 0x024 */ BattleRosterRecordA *record; /* the roster record of the action's current target */
    /* 0x028 */ BtlUnitDataA *data;  /* the entry's data block (btlFindEntryBlockByMemberId) */
    /* 0x02C */ u16 id;
    /* 0x02E */ u8 unk02E[0xA];
    /* 0x038 */ s8 targets[0x85]; /* indexed by battle entry: 1 = selected as a target */
    /* 0x0BD */ u8 unk0BD[0x4AF];
    /* 0x56C */ u32 unk56C;         /* 0x56C-0x574 and 0x584-0x58C: cleared when an action starts (btlUnitStartAction) */
    /* 0x570 */ u32 unk570;
    /* 0x574 */ u32 unk574;
    /* 0x578 */ u8 unk578[0xC];
    /* 0x584 */ u32 unk584;
    /* 0x588 */ u32 unk588;
    /* 0x58C */ u32 unk58C;
    /* 0x590 */ u8 unk590[4];
    /* 0x594 */ u32 cameraMode;     /* the action's camera mode (FUN_004e69e8) */
    /* 0x598 */ u8 unk598[4];
    /* 0x59C */ u8 unk59C;          /* cleared when an action starts */
    /* 0x59D */ s8 uiMode;          /* the command menu variant (dispatchBattleCommandUiVariant) */
    /* 0x59E */ u8 unk59E[0xA];
    /* 0x5A8 */ s32 menuArgument;   /* the argument of the command menu's kind-7 choice (btlUnitStepCommandMenu) */
    /* 0x5AC */ u8 unk5AC[0xC];
    /* 0x5B8 */ BtlUnitTargetPair pairs[BTL_UNIT_TARGET_PAIR_COUNT];
    /* 0x9E0 */ BtlUnitTargetStateA targetStates[BTL_UNIT_TARGET_STATE_COUNT]; /* indexed by a target's listed id */
} BtlUnitA;

typedef struct BtlActionSlotA {
    /* 0x000 */ void *owner;
    /* 0x004 */ BtlUnitA unit;
} BtlActionSlotA;

typedef char BtlUnitALayoutCheck[
    sizeof(BtlUnitA) == 0x1250 && sizeof(BtlActionSlotA) == 0x1254 && offsetof(BtlUnitA, entry) == 0x20 &&
    offsetof(BtlUnitA, data) == 0x28 && offsetof(BtlUnitA, targets) == 0x38 &&
    offsetof(BtlUnitA, cameraMode) == 0x594 && offsetof(BtlUnitA, uiMode) == 0x59D && offsetof(BtlUnitA, pairs) == 0x5B8 &&
    offsetof(BtlUnitA, record) == 0x24 && offsetof(BtlUnitA, unk01C) == 0x1C && offsetof(BtlUnitA, unk56C) == 0x56C &&
    offsetof(BtlUnitA, unk584) == 0x584 && offsetof(BtlUnitA, unk59C) == 0x59C && offsetof(BtlUnitA, targetStates) == 0x9E0 && sizeof(BtlUnitTargetStateA) == 0x10 ? 1 : -1];

#endif
