#include "gamedata/RosterView.h"

extern "C" {
void *gameFlagBlockGet(void);
s32 dataTable1bOr1cRecordHasFlag1(u32);
s32 table1bOr1cGetRecordValue(u32); // declcheck: local (the shared declaration in code/Code001b.h does not compile here: cannot overload functions distinguished by return type alone)

// Find the persistent roster entry matching a unit identifier.
void *gameFindRosterEntry(u32 unitId)
{
    RosterView *roster = static_cast<RosterView *>(gameFlagBlockGet());
    if (dataTable1bOr1cRecordHasFlag1(unitId)) {
        for (s32 i = 0; i < 4; ++i) {
            if (roster->active[i].id == unitId)
                return &roster->active[i];
        }
    } else if (table1bOr1cGetRecordValue(unitId) == 1) {
        for (s32 i = 1; i < 20; ++i) {
            if (roster->stock[i].id == unitId)
                return &roster->stock[i];
        }
    }
    return NULL;
}
}
