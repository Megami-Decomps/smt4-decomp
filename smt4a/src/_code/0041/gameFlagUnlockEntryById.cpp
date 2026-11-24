#include "code/Code001b.h"
#include "code/Code003d_Smt4a.h"
#include "gamedata/GameFlagWrite.h"
#include "gamedata/RosterUnlock.h"
#include "gamedata/RosterView.h"

/* Marks the roster entry known and active, then unlocks its linked flag, if any. */
extern "C" void gameFlagUnlockEntryById(u16 id)
{
    RosterFlags *entry = &((RosterView *)gameFlagBlockGet())->flags[id];
    entry->partner = 0;
    entry->status.known = 1;
    entry->status.active = 1;
    entry->status.hasPartner = 0;
    entry->status.cleared = 0;
    entry->details.unk0 = 0;
    entry->details.goalMet = 0;

    s32 kind = table1bOr1cGetRecordValue(id);
    if (kind != 6 && kind != 9 && kind != 0xB && kind != 0xC && itemDataIsFlagClear(id) != 0) {
        rosterAddUnit(id);
    }
    u32 linked = itemDataGetValue(id);
    if (linked != 0) {
        gameFlagWrite(linked, 1);
    }
}
