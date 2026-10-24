#include "gamedata/RosterView.h"

extern "C" {
void *gameFlagBlockGet(void);
s32 FUN_001bd100(u32);
s32 FUN_001bd118(u32);

// Find the persistent roster entry matching a unit identifier.
void *gameFindRosterEntry(u32 unitId)
{
    RosterView *roster = static_cast<RosterView *>(gameFlagBlockGet());
    if (FUN_001bd100(unitId)) {
        for (s32 i = 0; i < 4; ++i) {
            if (roster->active[i].id == unitId)
                return &roster->active[i];
        }
    } else if (FUN_001bd118(unitId) == 1) {
        for (s32 i = 1; i < 20; ++i) {
            if (roster->stock[i].id == unitId)
                return &roster->stock[i];
        }
    }
    return NULL;
}
}
