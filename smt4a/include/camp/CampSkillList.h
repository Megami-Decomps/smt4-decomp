/* Apocalypse: the camp's skill list (g_camp->grids[3]) and the status screen's remembered row. */
#ifndef SMT4A_CAMP_CAMPSKILLLIST_H
#define SMT4A_CAMP_CAMPSKILLLIST_H

#include "camp/CampStateA.h"
#include "camp/CampMenuEntry.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotRecord.h"
#include "code/Code002a_Smt4a.h"
#include "code/Code002a_VariantA.h"

/* The row of the skill list (grids[3]) the cursor is on. */
static __inline s32 campSkillListRow(CampStateA *camp)
{
    return resourceRunOperationIfUnblocked(reinterpret_cast<Object *>(&camp->grids[3])) +
           listCursorGetRowIfUnblocked(&camp->grids[3]);
}

/* Whether the skill's user can act: the player must not be down; a demon must exist, have neither ailment
 * bit 1 (down) nor bit 10 set, and game flag 0x401 must be set. */
static __inline bool campSkillUserCanAct(const CampListEntryA *entry)
{
    bool usable = true;

    if (entry->unit < 0) {
        if (gameGetPlayerData()->ailments & 2) {
            return false;
        }
    } else {
        SlotRecordA *record = gameGetSlotRecord(entry->unit);
        if (record == NULL || (record->ailments & 2) || (record->ailments & 0x400)) {
            usable = false;
        }
        return gameFlagIsSet(0x401) && usable;
    }
    return true;
}

#endif
