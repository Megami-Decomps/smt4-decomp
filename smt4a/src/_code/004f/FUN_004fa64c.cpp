/* NON_MATCHING: retail's placement search compares two entries per iteration and keeps a zero value in a saved register. */
#include "battle/btlMain.h"
#include "battle/BattleRosterCache.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "shard/W6_W6Match8_BattleRosterRecordA.h"
#include "shard/Shard0042.h"

struct BattleTransitionAssetA { u8 data[0x34]; };
struct BattleTransitionPlacementA {
    u32 key;
    u32 unk04;
    BattleTransitionAssetA asset;
};
// Apocalypse uses 0x3C-byte placements, unlike MaterialMergeOwner's 0x30-byte view.
struct BattlePlacementTransitionViewA {
    u8 prefix[0x1398];
    BattleTransitionPlacementA placements[50];
    u8 unk1F50[0x1464];
    /* 0x33B4 */ u8 state;
    u8 unk33B5[7];
    /* 0x33BC */ BattleRosterRecordA* roster;
    /* 0x33C0 */ State2C* controller;
    u32 unk33C4;
    /* 0x33C8 */ struct BattleTransitionCommandA* command;
};
struct BattleTransitionCommandA { u32 unk00; s16 kind; };
struct BattleTransitionStatusViewA { u8 prefix[0x164]; BattleCombatantStatusKey status; };
extern "C" {
BtlMainStateA* btlGetMainState(void);
BtlCombatantEntryA* FUN_003f0e20(BtlMainStateA* battle, s32 group);
s32 state2CIsNot1(State2C* controller);
void FUN_00421514(State2C* controller, BattleTransitionAssetA* asset, f32 scale);
void attachmentsSetOffset(State2C* controller, const f32* position);
void FUN_00421858(State2C* controller);
void FUN_004cae0c(BtlMainStateA* battle, BattleRosterRecordA* roster, u32 first, u32 second);
void FUN_00421078(State2C* controller);
void FUN_004fa15c(BattlePlacementTransitionViewA* work);
void FUN_004fb43c(u32 first, u32 second, u32 sound, u32 fourth, u32 fifth, u32 sixth, u32 seventh);

void FUN_004fa64c(BattlePlacementTransitionViewA* work)
{
    if (!state2CIsNot1(work->controller)) {
        return;
    }
    BtlCombatantEntryA* combatant = FUN_003f0e20(btlGetMainState(), work->roster->motion.group);
    u32 key = reinterpret_cast<BattleTransitionStatusViewA*>(combatant)->status.key;
    BattleTransitionPlacementA* placement = NULL;
    for (s32 index = 0; index < 50; ++index) {
        if (work->placements[index].key == key) {
            placement = &work->placements[index];
            break;
        }
    }
    BtlMainStateA* battle = btlGetMainState();
    if (placement) {
        FUN_00421514(work->controller, &placement->asset, work->roster->marker.scale);
        attachmentsSetOffset(work->controller, work->roster->motion.position);
        FUN_00421858(work->controller);
        FUN_004cae0c(battle, work->roster, 0, 0);
    }
    FUN_00421078(work->controller);
    work->state = 8;
    FUN_004fa15c(work);
    if (work->command->kind == 15 || work->command->kind == 16) {
        FUN_004fb43c(0, 0, 0x1000131, 0, 0, 0, 0);
    } else {
        FUN_004fb43c(0, 0, 0x1000133, 0, 0, 0, 0);
    }
}
}
