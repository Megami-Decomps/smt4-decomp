#include "common.h"

extern "C" {
void *gameFlagBlockGet(void);
s32 FUN_001bd100(u32);
s32 FUN_001bd118(u32);

// Find the persistent roster entry matching a unit identifier.
void *gameFindRosterEntry(u32 unitId)
{
    // This roster is beyond the end of the currently documented FlagBlock prefix.
    struct RosterEntry {
        u16 id;
        u8 data[10];
    };
    struct RosterView {
        u8 prefix[0x8E4];
        RosterEntry active[4];
        RosterEntry stock[20];
    };
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
