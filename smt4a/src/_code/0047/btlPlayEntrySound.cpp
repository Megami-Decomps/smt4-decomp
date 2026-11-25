#include "battle/BtlMainAccess.h"
#include "shard/W6_W6Match3_BtlCombatantEntryA.h"
#include "battle/BtlGlobals.h"
#include "battle/BtlEntryVoice.h"

extern "C" {

/* Plays voice line 4 for the listed entry if it is eligible and has a unit. */
void btlPlayEntrySound(u32 id, f32 volume)
{
    BtlCombatantEntryA *entry = btlMainFindEntryByListedId(btlGetMainState(), id);

    if (entry != NULL && (entry->flags & DAT_00573cc0.byListedId) != 0 && entry->data.id != 0) {
        FUN_0015f490(entry->data.id, 4, volume, 0, 0);
    }
}

} /* extern "C" */
