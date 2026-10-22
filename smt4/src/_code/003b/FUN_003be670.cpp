#include "shard/W4_Match6_BtlEntry.h"
#include "shard/PassiveSkill.h"

extern "C" {
BtlMainState* btlGetMainState(void);
BtlEntry* btlMainFindEntryByListedId(BtlMainState* battle, u32 id);
void FUN_0022abe0(const BtlEntry* entry, u16* skills);

// Apply the unit's passive percentage total when the target has the corresponding flag.
f32 FUN_003be670(u32 sourceId, u32 targetId)
{
    f32 scale = 1.0f;
    BtlEntry* source = btlMainFindEntryByListedId(btlGetMainState(), sourceId);
    if (source != NULL) {
        BtlEntry* target = btlMainFindEntryByListedId(btlGetMainState(), targetId);
        if (target != NULL && (target->flags & 0x100) != 0) {
            u16 skills[10] = {0};
            FUN_0022abe0(source, skills);
            u16 total = 0;
            for (s32 i = 0; i < 9; ++i) {
                if (skills[i] != 0) {
                    const PassiveSkillRecord* skill = passiveSkillLookupRecord(skills[i]);
                    if (skill != NULL) {
                        total += skill->scaling.percent;
                    }
                }
            }
            if (total != 0) {
                scale *= (f32)(u32)total * 0.01f;
            }
        }
    }
    return scale;
}
}
