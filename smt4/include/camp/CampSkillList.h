/* IV: the camp's skill list (g_camp->grids[3]). */
#ifndef SMT4_CAMP_CAMPSKILLLIST_H
#define SMT4_CAMP_CAMPSKILLLIST_H

#include "camp/CampState.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/GamePlayerData.h"

/* Whether the skill's user can act: the player must not be down; a demon must exist and have none of
 * the ailment bits 1 (down), 2 and 10. */
static __inline bool campSkillUserCanAct(const CampSkillEntry *entry)
{
    if (entry->unit < 0) {
        if (gameGetPlayerData()->ailments & 2) {
            return false;
        }
    } else {
        StatBlock *record = gameGetUnitRecord(entry->unit);
        if (record == NULL || (record->ailments & 2) || (record->ailments & 0x400) || (record->ailments & 4)) {
            return false;
        }
    }
    return true;
}

#endif
