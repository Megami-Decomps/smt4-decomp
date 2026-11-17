/* NON_MATCHING: skill-array zero scheduling, battle mask loads and tier flag updates differ; -O2 candidate. */
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "battle/btlMain.h"
#include "gamedata/SkillDataRecord.h"

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
extern ActionTierMasks g_btlSkillResponseMasks;
s32 btlAnyEventFilterMatches(BtlMainStateA *, BtlCombatantEntryA *, u32);
s32 lcgRandomRange(u32);
s32 gameFlagIsSet(u32);
void source4CCopyHalves(BtlCombatantEntryA *, u16 *);

u32 btlSelectActionTier(u32 unitId)
{
    BtlCombatantEntryA *unit = btlMainFindEntryByListedId(btlGetMainState(), unitId);
    s32 tier = 0;
    BtlCombatantEntryA *special = btlMainFindEntryByListedId(btlGetMainState(), unitId);
    if (special && special->properties[24] > 0 && !btlAnyEventFilterMatches(btlGetMainState(), unit, 3)) {
        s32 roll = lcgRandomRange(99);
        ActionTierBattleFlags *battle = (ActionTierBattleFlags *)btlGetMainState();
        if (battle->flags & g_btlSkillResponseMasks.forced)
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
            const Table04ExtraRecord *skill = dataTable41FindById(skills[i]);
            if (skill && tier < skill->actionTier.tier) {
                if (!btlAnyEventFilterMatches(btlGetMainState(), unit, skill->actionTier.tier))
                    tier = skill->actionTier.tier;
            }
        }
        if (!tier)
            return 0;
    }
    if (btlAnyEventFilterMatches(btlGetMainState(), unit, tier))
        return 0;
    switch (tier) {
    case 1: unit->flags |= g_btlSkillResponseMasks.first; break;
    case 2: unit->flags |= g_btlSkillResponseMasks.second; break;
    case 3: unit->flags |= g_btlSkillResponseMasks.third; break;
    }
    return tier;
}
}
