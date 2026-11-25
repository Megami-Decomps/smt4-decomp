/* NON_MATCHING: 42 lines of register allocation (retail keeps holder, id, record and reduction in r7, r8, r5, r4; this
 * build in r4, r6, r7, r5). A `static __inline` helper with this
 * scan matched (w94-s3/s9), but the same operation elsewhere (padGetMappedValue, playerGetSkillRank and the cost
 * functions' player scans) does not match through it in any one form, so it is not kept (wave 94 merge). */
#include "gamedata/SkillDataRecord.h"
#include "shard/Shard004B.h"
#include "shard/PassiveSkill.h"
#include "shard/W9_W9Match7_ModifierLists.h"
#include "gamedata/DataTableAccess.h"
#include "code/Code004b_Smt4a.h"
#include "gamedata/GameSaveDataA.h"

extern "C" {
s32 gameDataFlagTestBit(u32 bit);
s32 FUN_0034a304(const AttributeModifierLists *record, s32 rank, s32 kind);

/* Applies unlocked cost reductions and the holder's skill-rank modifiers, clamping to one. */
s32 skillGetAdjustedCost(const SlotRecordA *holder, u32 skillId)
{
    SkillDataRecordA *record = skillDataFindById(skillId);
    if (record) {
        s32 baseCost = record->cost.baseCost;
        s32 reduction = 0;
        if (gameDataFlagTestBit(12))
            reduction = ((const PassiveSkillRecord *)dataFindKeyedRecordWithOverrides(12))->affinity;
        if (gameDataFlagTestBit(13))
            reduction += ((const PassiveSkillRecord *)dataFindKeyedRecordWithOverrides(13))->affinity;
        if (gameDataFlagTestBit(14))
            reduction += ((const PassiveSkillRecord *)dataFindKeyedRecordWithOverrides(14))->affinity;
        if (gameDataFlagTestBit(15))
            reduction += ((const PassiveSkillRecord *)dataFindKeyedRecordWithOverrides(15))->affinity;
        s32 rank = 0;
        if (holder != NULL) {
            for (s32 index = 0; index < 8; ++index) {
                if (holder->skills[index] == skillId) {
                    rank = holder->skillRanks[index];
                    break;
                }
            }
        }
        /* Modifier lists follow the recovered table-four prefix. */
        const AttributeModifierLists *modifiers = (const AttributeModifierLists *)record;
        reduction += FUN_0034a304(modifiers, rank, 4);
        s32 result = baseCost - (FUN_0034a304(modifiers, rank, 7) + reduction);
        if (result <= 0)
            result = 1;
        return result;
    }
    return 0;
}
} /* extern "C" */
