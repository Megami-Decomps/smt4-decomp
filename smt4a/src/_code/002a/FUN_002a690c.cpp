/* NON_MATCHING: source/preview registers differ and the compiler merges the MP deduction/clamp branches. */
#include "shard/PassiveSkill.h"
#include "shard/Shard0031.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "shard/Shard004B.h"

extern "C" {
const ActiveSkillRecord *dataTable04FindById(u32 id);
s32 FUN_0028809c(s32 source, s32 target, const ActiveSkillRecord *skill, s32 preview, s32 flags);
BtlEquip *gameGetPlayerData();
BtlEquip *gameGetSlotRecord(s32 index);
SlotTable *gameGetSlotTable();
s32 FUN_003df57c(u32 costParameter, s32 mode);
s32 FUN_004bcbb4(const ItemRankRecord *unit, u32 costParameter);

// Apply a skill to the player and all occupied demon slots, charging MP once if it succeeds.
u32 FUN_002a690c(s32 source, u32 skillId, s32 preview)
{
    u8 applied = 0;
    const ActiveSkillRecord *skill = dataTable04FindById(skillId);
    if (skill != NULL) {
        if (FUN_0028809c(source, -1, skill, preview, 0) == 0) {
            applied = 1;
        }
        SlotTable *party = gameGetSlotTable();
        for (s32 index = 0; index < 24; ++index) {
            s32 target = party->slots[index];
            if (target >= 0 && FUN_0028809c(source, target, skill, preview, 0) == 0) {
                applied = 1;
            }
        }
        if (applied != 0) {
            if (preview == 0) {
                if (source < 0) {
                    BtlEquip *unit = gameGetPlayerData();
                    unit->mp -= FUN_003df57c(skill->cost.costParameter, 1);
                    if (unit->mp < 0)
                        unit->mp = 0;
                } else {
                    BtlEquip *unit = gameGetSlotRecord(source);
                    unit->mp -= FUN_004bcbb4((const ItemRankRecord *)unit, skill->cost.costParameter);
                    if (unit->mp < 0)
                        unit->mp = 0;
                }
            }
            return 0;
        }
    }
    return 1;
}
}
