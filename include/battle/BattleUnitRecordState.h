#ifndef BATTLE_BATTLEUNITRECORDSTATE_H
#define BATTLE_BATTLEUNITRECORDSTATE_H

#include "battle/btlMain.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"

struct BattleUnitSlotState {
    /* 0x0000 */ u32 flags;
    /* 0x0004 */ u8 active;
    /* 0x0005 */ u8 unk0005[0xB];
    /* 0x0010 */ u32 unk0010;
    /* 0x0014 */ u8 unk0014[4];
    /* 0x0018 */ u32 unk0018;
    /* 0x001C */ u8 unk001C[4];
    /* 0x0020 */ BtlCombatantEntryA* combatant;
    /* 0x0024 */ BattleRosterRecordA* roster;
    /* 0x0028 */ void* parameters;
    /* 0x002C */ s16 combatantIndex;
    /* 0x002E */ u8 unk002E[2];
    /* 0x0030 */ u32 mode;
    /* 0x0034 */ f32 scale;
    union {
        /* 0x0038 */ u8 unk0038[0x548];
        struct {
            u8 unk0038BeforeEffectFrame[0x534];
            /* 0x056C */ u32 frame;
        } effectTiming;
    };
    /* 0x0580 */ u32 option;
    /* 0x0584 */ u8 unk0584[0xCCC];
    /* 0x1250 */ u32 unk1250;
};
struct BattleUnitRecordState {
    /* 0x0000 */ BtlMainStateA* battle;
    /* 0x0004 */ BattleUnitSlotState slots[1]; // Indexed by the battle's current slot.
};
typedef char BattleUnitSlotStateLayoutCheck[sizeof(BattleUnitSlotState) == 0x1254 &&
    offsetof(BattleUnitSlotState, option) == 0x580 &&
    offsetof(BattleUnitRecordState, slots) == 4 ? 1 : -1];
typedef char BattleUnitEffectTimingOffsetCheck[
    offsetof(BattleUnitSlotState, effectTiming.frame) == 0x56C &&
    sizeof(BattleUnitSlotState) == 0x1254 ? 1 : -1];

#endif
