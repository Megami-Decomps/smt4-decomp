#include "status/CompendiumBrowse.h"
#include "gamedata/UnitStats.h"
#include "gamedata/GameDataAccess.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"

extern "C" {

void unitInitializeFromSavedRecord(u32 id, StatBlock *unit);
void FUN_0029da34(RelativeDirectory *directory, u32 entry, u16 devilId, u32 context);

/* Shows the selected devil's status, using the party member when the preview is on the party column. */
void bibleRefreshSelectedDevilPreview(BibleDevilWork *menu)
{
    s16 id = compendiumSelectedId(menu);

    if (menu->mode == 0) {
        StatBlock status;
        unitInitializeFromSavedRecord((u16)id, &status);
        FUN_0029da34(NULL, 1, id, (u32)&status);
    } else {
        id = compendiumSelectedId(menu);
        if (menu->column == 1) {
            FUN_0029da34(NULL, 1, id, (u32)partyMemberFindById((u16)id));
        } else {
            StatBlock status;
            unitInitializeFromSavedRecord((u16)id, &status);
            FUN_0029da34(NULL, 1, id, (u32)&status);
        }
    }
}

} /* extern "C" */
