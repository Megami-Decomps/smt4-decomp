/* NON_MATCHING: saved-register assignment differs, including reduction accumulator reuse after the holder scan; instruction count agrees. */
#include "gamedata/Table04Record.h"
#include "shard/Shard004B.h"
#include "shard/PassiveSkill.h"
#include "shard/W9_W9Match7_ModifierLists.h"
#include "gamedata/DataTableAccess.h"
#include "code/Code004b_Smt4a.h"

extern "C" {
s32 gameDataFlagTestBit(u32 bit);
s32 FUN_0034a304(const AttributeModifierLists *record, s32 rank, s32 kind);

// Apply unlocked cost reductions and the holder's skill-rank modifiers, clamping to one.
s32 FUN_004bcbb4(const ItemRankRecord *holder, u32 skillId)
{
    Table04Record *record = dataTable04FindById(skillId);
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
        if (holder) {
            for (s32 index = 0; index < 8; ++index) {
                if (holder->items[index] == skillId) {
                    rank = holder->ranks[index];
                    break;
                }
            }
        }
        // Modifier lists follow the currently recovered table-four prefix.
        const AttributeModifierLists *modifiers = (const AttributeModifierLists *)record;
        reduction += FUN_0034a304(modifiers, rank, 4);
        s32 result = baseCost - (FUN_0034a304(modifiers, rank, 7) + reduction);
        if (result <= 0)
            result = 1;
        return result;
    }
    return 0;
}
}
