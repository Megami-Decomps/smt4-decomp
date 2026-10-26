#include "shard/PassiveSkill.h"
#include "gamedata/Table04Record.h"

extern "C" {


void source4CCopyHalves(void *unit, u16 *skills);

/* Sums the weight of the unit's passive skills. */
s32 FUN_004c3d00(void *unit)
{
    s32 total = 0;

    if (unit != NULL) {
        u16 skills[10] = {0};

        source4CCopyHalves(unit, skills);
        for (s32 i = 0; i < 9; i++) {
            if (skills[i] != 0) {
                const PassiveSkillRecord *record = reinterpret_cast<const PassiveSkillRecord *>(dataTable41FindById(skills[i]));

                if (record != NULL) {
                    total += record->weighting.weight;
                }
            }
        }
    }
    return total;
}

} /* extern "C" */
