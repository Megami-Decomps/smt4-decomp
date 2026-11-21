#include "gamedata/SkillDataRecord.h"
#include "shard/Shard004B.h"
#include "gamedata/DataTableAccess.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
s32 gameDataFlagTestBit(u32 flag);
s32 FUN_002efc44(const SkillDataRecordA *record, s32 rank, s32 kind);
}

/* The player's rank in a learned skill, 0 when not learned: the body of padGetMappedValue, written as a plain static,
   which armcc inlines with retail's pair-unrolled search (as in IV's skillGetDiscountedCost). */
static s32 findEquippedSkillRank(u32 id)
{
    const PlayerDataA *player = gameGetPlayerData();
    for (s32 index = 0; index < 8; ++index) {
        if (player->skills[index] == id) {
            return player->skillRanks[index];
        }
    }
    return 0;
}

static inline s32 skillCostBonus(u32 flag)
{
    // The modifier value lies beyond the keyed-record prefix exposed by lookup helpers.
    struct ModifierView { u8 unk00[0x38]; s32 reduction; };
    typedef char ModifierOffsetCheck[offsetof(ModifierView, reduction) == 0x38 ? 1 : -1];
    return ((const ModifierView *)(const void *)dataFindKeyedRecordWithOverrides(flag))->reduction;
}

// Calculate a skill's cost after equipped-skill rank or unlocked global cost reductions.
extern "C" s32 skillGetCostWithRankReduction(u32 id, s32 useSkillRank)
{
    const SkillDataRecordA *record = skillDataFindById(id);
    if (record == NULL) {
        return 0;
    }
    s32 baseCost = record->cost.baseCost;
    s32 reduction = 0;
    if (useSkillRank == 0) {
        if (gameDataFlagTestBit(12)) reduction = skillCostBonus(12);
        if (gameDataFlagTestBit(13)) reduction += skillCostBonus(13);
        if (gameDataFlagTestBit(14)) reduction += skillCostBonus(14);
        if (gameDataFlagTestBit(15)) reduction += skillCostBonus(15);
    }
    /* Its own test after the flag block: retail adds the rank bonus with the add the last flag shares, which an
       else arm (discount known to be zero) folds into a mov. */
    if (useSkillRank != 0) {
        reduction += FUN_002efc44(record, findEquippedSkillRank(id), 4);
    }
    s32 cost = baseCost - reduction;
    return cost > 0 ? cost : 1;
}
