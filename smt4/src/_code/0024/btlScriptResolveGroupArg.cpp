#include "shard/W4_Match6_BtlEntry.h"

extern "C" {
BtlMainState *btlGetMainState(void);

/* Resolves a script's group argument: 1-4 name a group, 0 and -1 use the selected group (0 also marks an active entry); 1 when none. */
s32 btlScriptResolveGroupArg(s32 group)
{
    if (group >= 1 && group <= 4) {
        btlGetMainState()->hasActiveEntry = 0;
        return group;
    }
    if (group == -1) {
        btlGetMainState()->hasActiveEntry = 0;
        if (btlGetMainState()->selectedGroup == 0xff) {
            return 1;
        }
        return btlGetMainState()->selectedGroup;
    } else if (group == 0) {
        btlGetMainState()->hasActiveEntry = 1;
        if (btlGetMainState()->selectedGroup == 0xff) {
            return 1;
        }
        return btlGetMainState()->selectedGroup;
    }
    return 1;
}
}
