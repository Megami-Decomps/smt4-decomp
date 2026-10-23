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
            /* 0x1C8 */ u16 category;
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
        struct {
            /* 0x000 */ u8 unk000[0x1B0];
            /* 0x1B0 */ f32 x;
            /* 0x1B4 */ f32 y;
        } spriteOffset;
    };
};
typedef char BattleRosterRecordASizeCheck[sizeof(BattleRosterRecordA) == 0x1D0 ? 1 : -1];
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
