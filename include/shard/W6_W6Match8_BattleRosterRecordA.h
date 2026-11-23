#ifndef SHARD_W6_W6MATCH8_BATTLE_ROSTER_RECORD_A_H
#define SHARD_W6_W6MATCH8_BATTLE_ROSTER_RECORD_A_H

#include "common.h"
#include <stddef.h>
#include "shard/W6_W6Match7_BattleEffects.h"

struct BattleRosterRecordA {
    union {
        u8 data[0x1d0];
        BattleEffectSetup render;
        BattleRosterMotionA motion;
        /* 0x000 */ f32 initialPositionX;
        struct {
            u8 unk00[0x3c];
            s8 group; // 0x3c
            u8 unk3d[3];
            f32 scale; // 0x40
            u8 unk44[0x1c];
            u16 flags; // 0x60
        } marker;
        struct {
            /* 0x00 */ u8 unk00[0x64];
            /* 0x64 */ u32 key;
        } modelMatch;
        struct {
            /* 0x00 */ u8 unk00[0x50];
            /* 0x50 */ u32 unk50; /* 1, 0x80: active; 2: excluded */
            /* 0x54 */ u8 unk54[0x4];
            /* 0x58 */ u32 unk58; /* 4: excluded */
            /* 0x5C */ u8 unk5C[0xB0];
            /* 0x10C */ u32 unk10C;
        } liveFlags;
        struct {
            /* 0x000 */ u8 unk000[0x1BC];
            /* 0x1BC */ u32 holder;
        } script;
        struct {
            /* 0x000 */ u8 unk000[0x1C8];
            /* 0x1C8 */ s16 category;
        } classification;
        struct {
            /* 0x000 */ u8 unk000[0x44];
            /* 0x044 */ s8 column;
            /* 0x045 */ s8 row;
        } selection;
        struct {
            /* 0x000 */ u8 unk000[0x68];
            /* 0x068 */ s16 combatantIndex;
            /* 0x06A */ s16 parameterIndex;
        } combatant;
        /* What the summon effect sets on the record it takes (btlSummonLoadAndSpawn). */
        struct {
            /* 0x000 */ u8 unk000[0xC];
            /* 0x00C */ f32 position[3];
            /* 0x018 */ u8 unk018[0x28];
            /* 0x040 */ f32 scale;
            /* 0x044 */ u8 unk044[0xC];
            /* 0x050 */ u32 status;
            /* 0x054 */ u8 unk054[0xC];
            /* 0x060 */ u16 presentationFlags;
            /* 0x062 */ u16 unk062;
            /* 0x064 */ u8 unk064[4];
            /* 0x068 */ s16 combatantIndex;
            /* 0x06A */ s16 memberId;
            /* 0x06C */ u32 tints[3];
        } summon;
        struct {
            /* 0x000 */ u8 unk000[0x60];
            /* 0x060 */ u16 flags;
            /* 0x062 */ u16 nameId;
            /* 0x064 */ u8 unk064[0xCC];
            /* 0x130 */ u32 enabled;
        } label;
        struct {
            /* 0x000 */ u8 unk000[0x104];
            /* 0x104 */ s32 group;
        } reflection;
        struct {                              /* what removing the record's combatant resets */
            /* 0x000 */ u8 unk000[0x48];
            /* 0x048 */ u32 task;
            /* 0x04C */ u8 unk04C[4];
            /* 0x050 */ u32 status;           /* bit 0x200000: `holder` is owned */
            /* 0x054 */ u8 unk054[4];
            /* 0x058 */ u64 flags;            /* cleared as one 64-bit mask */
            /* 0x060 */ u16 labelFlags;
            /* 0x062 */ u8 unk062[2];
            /* 0x064 */ u32 pendingValue;
            /* 0x068 */ s16 combatantIndex;
            /* 0x06A */ u8 unk06A[2];
            /* 0x06C */ u32 work[12];
            /* 0x09C */ u32 stateFlags;
            /* 0x0A0 */ u8 shown;
            /* 0x0A1 */ u8 unk0A1[0x63];
            /* 0x104 */ s32 slot;
            /* 0x108 */ s32 nextSlot;
            /* 0x10C */ u32 groupWork[7];
            /* 0x128 */ u8 workState[0x94];   /* FUN_0041a7dc resets it */
            /* 0x1BC */ void **holder;        /* an object reference, deleted with the record's combatant */
        } removal;
        struct {
            /* 0x000 */ u8 unk000[0x1B0];
            /* 0x1B0 */ f32 x;
            /* 0x1B4 */ f32 y;
        } spriteOffset;
    };
};
typedef char BattleRosterRecordASizeCheck[sizeof(BattleRosterRecordA) == 0x1D0 ? 1 : -1];
typedef char BattleRosterRecordASummonCheck[offsetof(BattleRosterRecordA, summon.scale) == 0x40 &&
    offsetof(BattleRosterRecordA, summon.status) == 0x50 && offsetof(BattleRosterRecordA, summon.combatantIndex) == 0x68 &&
    offsetof(BattleRosterRecordA, summon.tints) == 0x6C ? 1 : -1];
typedef char BattleRosterRecordARemovalCheck[offsetof(BattleRosterRecordA, removal.combatantIndex) == 0x68 &&
    offsetof(BattleRosterRecordA, removal.stateFlags) == 0x9C && offsetof(BattleRosterRecordA, removal.slot) == 0x104 &&
    offsetof(BattleRosterRecordA, removal.workState) == 0x128 && offsetof(BattleRosterRecordA, removal.holder) == 0x1BC ? 1 : -1];
typedef char BattleRosterRecordALiveFlagsCheck[offsetof(BattleRosterRecordA, liveFlags.unk58) == 0x58 ? 1 : -1];
typedef char BattleRosterRecordALiveFlags10CCheck[offsetof(BattleRosterRecordA, liveFlags.unk10C) == 0x10C ? 1 : -1];
typedef char BattleRosterRecordAReflectionGroupOffsetCheck[
    offsetof(BattleRosterRecordA, reflection.group) == 0x104 &&
    sizeof(BattleRosterRecordA) == 0x1D0 ? 1 : -1];
typedef char BattleRosterRecordAHolderOffsetCheck[
    offsetof(BattleRosterRecordA, script.holder) == 0x1BC ? 1 : -1];
typedef char BattleRosterRecordACategoryOffsetCheck[
    offsetof(BattleRosterRecordA, classification.category) == 0x1C8 ? 1 : -1];

typedef char BattleRosterRecordAInitialPositionOffsetCheck[
    offsetof(BattleRosterRecordA, initialPositionX) == 0 && sizeof(BattleRosterRecordA) == 0x1D0 ? 1 : -1];
typedef char BattleRosterRecordASelectionOffsetsCheck[
    offsetof(BattleRosterRecordA, selection.column) == 0x44 &&
    offsetof(BattleRosterRecordA, selection.row) == 0x45 ? 1 : -1];
typedef char BattleRosterRecordACombatantOffsetCheck[
    offsetof(BattleRosterRecordA, combatant.combatantIndex) == 0x68 &&
    sizeof(BattleRosterRecordA) == 0x1D0 ? 1 : -1];
typedef char BattleRosterRecordAParameterIndexOffsetCheck[
    offsetof(BattleRosterRecordA, combatant.parameterIndex) == 0x6A ? 1 : -1];
typedef char BattleRosterRecordALabelOffsetsCheck[
    offsetof(BattleRosterRecordA, label.flags) == 0x60 &&
    offsetof(BattleRosterRecordA, label.nameId) == 0x62 &&
    offsetof(BattleRosterRecordA, label.enabled) == 0x130 &&
    sizeof(BattleRosterRecordA) == 0x1D0 ? 1 : -1];
typedef char BattleRosterRecordASpriteOffsetCheck[
    offsetof(BattleRosterRecordA, spriteOffset.x) == 0x1B0 &&
    offsetof(BattleRosterRecordA, spriteOffset.y) == 0x1B4 &&
    sizeof(BattleRosterRecordA) == 0x1D0 ? 1 : -1];

#endif
