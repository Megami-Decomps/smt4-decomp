/* NON_MATCHING: the battle flag and always-proc mask loads and their AND registers differ from retail. */
#include "battle/BtlMainAccess.h"
#include "battle/BtlEntryLookup.h"
#include "battle/btlMain.h"
#include "gamedata/SkillDataRecord.h"
#include "battle/BattleSkillResponseMasks.h"
#include "util/Random.h"

extern "C" {
void source4CCopyHalves(BtlCombatantEntryA *unit, u16 *skills);

/* Rolls each of the unit's chance skills in order and returns the first that procs, or 0. */
u16 FUN_004c5ec0(u32 unitId)
{
    BtlMainStateA *battle = btlGetMainState();
    BtlCombatantEntryA *unit = btlMainFindEntryByListedId(battle, unitId);
    u16 skills[10] = {0};
    s32 i;

    source4CCopyHalves(unit, skills);
    u16 procced = 0;
    for (i = 0; i < 9; i++) {
        if (skills[i] != 0) {
            const Table04ExtraRecord *skill = dataTable41FindById(skills[i]);
            u32 chance = skill != NULL ? skill->stats.chance : 0;

            if (chance != 0) {
                s32 roll = lcgRandomRange(99);

                u64 stateFlags = battle->stateFlags64.bits;
                roll = (stateFlags & g_btlSkillResponseMasks.alwaysProc) ? 0 : roll;
                if ((s32)chance > roll) {
                    procced = skills[i];
                    break;
                }
            }
        }
    }
    return procced;
}
} /* extern "C" */
