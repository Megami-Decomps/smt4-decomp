#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "shard/PassiveSkill.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlGlobals.h"

extern "C" {
void btlEntryGetPassiveSkillIds(const BtlEntry* entry, u16* skills);

// Apply the unit's passive percentage total when the target has the corresponding flag.
f32 FUN_003be670(u32 sourceId, u32 targetId)
{
    f32 scale;
    BtlEntry* source;

    scale = 1.0f;
    source = btlMainFindEntryByListedId(btlGetMainState(), sourceId);
    if (source != NULL) {
        BtlEntry* target = btlMainFindEntryByListedId(btlGetMainState(), targetId);
        if (target != NULL && (target->flags & 0x100) != 0) {
            u16 skills[10] = {0};
            btlEntryGetPassiveSkillIds(source, skills);
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
