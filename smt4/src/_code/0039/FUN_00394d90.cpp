#include "shard/PassiveSkill.h"
#include "gamedata/ConsumableRecord.h"

struct PartnerSkillSet {
    u8 unk00[0x34];   // 0x00
    u16 skills[8];    // 0x34
};

extern "C" {

/* Returns 1 when id (1..60) names a table08 entry whose tier matches one of the set's passive skills. */
u32 FUN_00394d90(u32 id, PartnerSkillSet *set)
{
    if (id >= 1 && id <= 60) {
        ConsumableRecord *record = itemTableGetItemRecord(id);

        if ((record->useFlags & 0xF0) != 0) {
            for (s32 i = 0; i < 8; i++) {
                u32 skill = set->skills[i];

                if (skill != 0) {
                    const PassiveSkillRecord *passive = passiveSkillLookupRecord(skill);

                    if (passive != NULL && passive->rank.tier == record->useFlags >> 4) {
                        return 1;
                    }
                }
            }
        }
    }
    return 0;
}

} /* extern "C" */
