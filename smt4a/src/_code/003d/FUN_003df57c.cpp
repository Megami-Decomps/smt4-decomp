/* NON_MATCHING: equipped-skill scan is not pair-unrolled; saved registers and global/rank reduction block ordering differ. */
#include "gamedata/Table04Record.h"
#include "shard/Shard004B.h"

extern "C" {
Table04Record *dataTable04FindById(u32 id);
ItemRankRecord *gameGetPlayerData(void);
s32 gameDataFlagTestBit(u32 flag);
const void *dataFindKeyedRecordWithOverrides(u32 id);
s32 FUN_002efc44(const Table04Record *record, s32 rank, s32 kind);
}

static inline s32 findEquippedSkillRank(const ItemRankRecord *player, u32 id)
{
    for (s32 index = 0; index < 8; ++index) {
        if (player->items[index] == id) {
            return player->ranks[index];
        }
    }
    return 0;
}

static inline s32 skillCostBonus(u32 flag)
{
    // The modifier value lies beyond the keyed-record prefix exposed by lookup helpers.
    struct ModifierView { u8 unk00[0x38]; s32 reduction; };
    typedef char ModifierOffsetCheck[offsetof(ModifierView, reduction) == 0x38 ? 1 : -1];
    return ((const ModifierView *)dataFindKeyedRecordWithOverrides(flag))->reduction;
}

// Calculate a skill's cost after equipped-skill rank or unlocked global cost reductions.
extern "C" s32 FUN_003df57c(u32 id, s32 useSkillRank)
{
    const Table04Record *record = dataTable04FindById(id);
    if (record == NULL) {
        return 0;
    }
    s32 baseCost = record->cost.baseCost;
    s32 reduction = 0;
    if (useSkillRank != 0) {
        s32 rank = findEquippedSkillRank(gameGetPlayerData(), id);
        reduction += FUN_002efc44(record, rank, 4);
    } else {
        if (gameDataFlagTestBit(12)) reduction = skillCostBonus(12);
        if (gameDataFlagTestBit(13)) reduction += skillCostBonus(13);
        if (gameDataFlagTestBit(14)) reduction += skillCostBonus(14);
        if (gameDataFlagTestBit(15)) reduction += skillCostBonus(15);
    }
    s32 cost = baseCost - reduction;
    return cost > 0 ? cost : 1;
}
