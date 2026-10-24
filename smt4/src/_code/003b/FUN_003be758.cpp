#include "shard/PassiveSkill.h"

extern "C" {

void FUN_0022abe0(void *unit, u16 *skills);

/* Sums the weight of the unit's passive skills. */
s32 FUN_003be758(void *unit)
{
    s32 total = 0;

    if (unit != NULL) {
        u16 skills[10] = {0};

        FUN_0022abe0(unit, skills);
        for (s32 i = 0; i < 9; i++) {
            if (skills[i] != 0) {
                const PassiveSkillRecord *record = passiveSkillLookupRecord(skills[i]);

                if (record != NULL) {
                    total += record->weighting.weight;
                }
            }
        }
    }
    return total;
}

} /* extern "C" */
