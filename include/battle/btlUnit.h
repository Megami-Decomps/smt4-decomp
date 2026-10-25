/* battle/btlUnit.c: battle units. Only the fields the battle script commands read are named. */
#ifndef BATTLE_BTLUNIT_H
#define BATTLE_BTLUNIT_H

#include "common.h"
#include <stddef.h>
#include "battle/btlMain.h"
#include "battle/btlUI.h"

/* Halfword index of the per-slot table in a unit's data block (BtlUnitDataA.unk152). */
#define BTL_UNIT_SLOT_TABLE 0xA9
/* The same table in Shin Megami Tensei IV (BtlUnitData.unk126). */
#define BTL_UNIT_SLOT_TABLE_IV 0x93

/* A unit's data block (Shin Megami Tensei IV layout). */
typedef struct BtlUnitData {
    /* 0x000 */ u8 unk000[2];
    /* 0x002 */ u16 unk02;
    /* 0x004 */ u8 unk004[0xF6];
    /* 0x0FA */ u16 unk0FA;       /* bit mask */
    /* 0x0FC */ u8 unk0FC[4];
    /* 0x100 */ u16 unk100;
    /* 0x102 */ u8 unk102[0x24];
    /* 0x126 */ u16 unk126[0x13];
    /* 0x14C */ u16 unk14C;
} BtlUnitData;

/* The record the battle script looks a unit up by (Shin Megami Tensei IV layout). */
typedef struct BtlUnit {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s16 *params;       /* parameter table, 0x39 entries in */
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ BtlUnitData *data;
    /* 0x2C */ u8 unk2C[0xC];
    /* 0x38 */ s8 targets[0x6D];  /* indexed by battle entry */
    /* 0xA5 */ u8 unkA5[0x4EF];
    /* 0x594 */ u32 unk594;
} BtlUnit;

typedef char BtlUnitTargetsOffsetCheck[offsetof(BtlUnit, targets) == 0x38 ? 1 : -1];
typedef char BtlUnitUnk594OffsetCheck[offsetof(BtlUnit, unk594) == 0x594 ? 1 : -1];

/* A skill entry the battle looks up by the main state (Shin Megami Tensei IV). */
typedef struct BtlSkill {
    /* 0x000 */ u8 unk000[0x1B4];
    /* 0x1B4 */ s16 unk1B4;
    /* 0x1B6 */ s16 unk1B6;
} BtlSkill;

/* A unit's data block (Apocalypse layout). */
typedef struct BtlUnitDataA {
    /* 0x000 */ u8 unk000[2];
    /* 0x002 */ u16 unk02;
    /* 0x004 */ u8 unk004[0x10C];
    /* 0x110 */ u16 unk110;       /* bit mask */
    /* 0x112 */ u8 unk112[4];
    /* 0x116 */ u16 unk116;
    /* 0x118 */ u8 unk118[0x3A];
    /* 0x152 */ u16 unk152[0x36];
    /* 0x1BE */ u16 unk1BE;
    /* 0x1C0 */ u8 unk1C0[0x68];
    /* 0x228 */ s32 unk228;
} BtlUnitDataA;

/* The record the battle script looks a unit up by (Apocalypse layout). */
typedef struct BtlUnitA {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ s32 *params;       /* parameter table, 0x1D entries in */
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ BtlUnitDataA *data;
} BtlUnitA;

/* A skill entry the battle looks up by the main state (Apocalypse layout). */
typedef struct BtlSkillA {
    union {
        /* 0x000 */ u8 unk000[0x258];
        struct {
            /* 0x000 */ u8 unk000[8];
            /* 0x008 */ s16 rosterIndex;
            /* 0x00A */ u8 unk00A[0x24E];
        } effect;
    };
    /* 0x258 */ u32 unk258;
    /* 0x25C */ u32 unk25C;
} BtlSkillA;
typedef char BtlSkillAEffectRosterIndexOffsetCheck[
    offsetof(BtlSkillA, effect.rosterIndex) == 8 &&
    sizeof(BtlSkillA) == 0x260 ? 1 : -1];

extern "C" {
void btlReflectCreateKind21(s32 id, u32 flags, u32 target, u32 parameter, u32 value, s32 enabled);
}

extern "C" {
bool FUN_003db7b4(void *arg0);
}

#endif
