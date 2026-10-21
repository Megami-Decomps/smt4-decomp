/* NON_MATCHING: skill-array zero scheduling, battle mask loads and tier flag updates differ; -O2 candidate. */
#include "battle/btlMain.h"

struct ActionTierUnit {
    u64 flags;
    u8 unk008[0xcc];
    s32 specialCounter; // 0xd4
};
struct ActionTierSkill {
    u8 unk00[0x44];
    u32 tier : 2;
    u32 reserved : 30;
};
struct ActionTierBattleFlags {
    u8 unk0000[0x45a8];
    u64 flags;
};
struct ActionTierMasks {
    u8 unk00[0x48];
    u64 first, second;
    u8 unk58[0x30];
    u64 third;
    u8 unk90[0x30];
    u64 forced;
};
extern "C" {
extern ActionTierMasks DAT_005713f0;
BtlMainStateA *btlGetMainState();
ActionTierUnit *FUN_003f0e20(BtlMainStateA *, u32);
s32 btlAnyEventFilterMatches(BtlMainStateA *, ActionTierUnit *, u32);
s32 lcgRandomRange(u32);
s32 gameFlagIsSet(u32);
void source4CCopyHalves(ActionTierUnit *, u16 *);
const ActionTierSkill *FUN_0034a290(u32);

u32 btlSelectActionTier(u32 unitId)
{
    ActionTierUnit *unit = FUN_003f0e20(btlGetMainState(), unitId);
    s32 tier = 0;
    ActionTierUnit *special = FUN_003f0e20(btlGetMainState(), unitId);
    if (special && special->specialCounter > 0 && !btlAnyEventFilterMatches(btlGetMainState(), unit, 3)) {
        s32 roll = lcgRandomRange(99);
        ActionTierBattleFlags *battle = (ActionTierBattleFlags *)btlGetMainState();
        if (battle->flags & DAT_005713f0.forced)
            roll = 0;
        if (gameFlagIsSet(0x1fb) || roll < 70)
            tier = 3;
    }
    if (!tier) {
        u16 skills[10] = {0};
        source4CCopyHalves(unit, skills);
        for (s32 i = 0; i < 9; ++i) {
            if (!skills[i])
                continue;
            const ActionTierSkill *skill = FUN_0034a290(skills[i]);
            if (skill && tier < skill->tier) {
                if (!btlAnyEventFilterMatches(btlGetMainState(), unit, skill->tier))
                    tier = skill->tier;
            }
        }
        if (!tier)
            return 0;
    }
    if (btlAnyEventFilterMatches(btlGetMainState(), unit, tier))
        return 0;
    switch (tier) {
    case 1: unit->flags |= DAT_005713f0.first; break;
    case 2: unit->flags |= DAT_005713f0.second; break;
    case 3: unit->flags |= DAT_005713f0.third; break;
    }
    return tier;
}
}
