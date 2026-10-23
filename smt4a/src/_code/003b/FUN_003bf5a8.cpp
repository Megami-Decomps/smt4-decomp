/* NON_MATCHING: compiler interleaves each special gate with its unlock check; retail outlines the checks. */
#include "shard/W5_W5Match7_SceneState.h"
extern "C" {
s32 gameFlagIsSet(u32 flag);
s32 FUN_004083a8(u32 id, u32 kind);

// Gate map entries by their unlock flags and the special encounter requirements.
u32 FUN_003bf5a8(s32 index)
{
    MapEntry *entry = &g_mapEntries[index];
    if (entry == NULL)
        return 0;
    if (index != 0) {
        if (index != 4) {
            if (index != 8) {
                if (index != 14) {
                    if (index != 18) {
                        if (!gameFlagIsSet(entry->status))
                            return 0;
                    } else {
                        if (FUN_004083a8(237, 4))
                            return 0;
                        if (!gameFlagIsSet(entry->status))
                            return 0;
                    }
                } else {
                    if (FUN_004083a8(218, 5))
                        return 0;
                    if (!gameFlagIsSet(entry->status))
                        return 0;
                }
            } else {
                if (FUN_004083a8(205, 3))
                    return 0;
                if (!gameFlagIsSet(entry->status))
                    return 0;
            }
        } else {
            if (FUN_004083a8(191, 7))
                return 0;
            if (!gameFlagIsSet(entry->status))
                return 0;
        }
    } else {
        if (FUN_004083a8(78, 8))
            return 0;
        if (!gameFlagIsSet(entry->status))
            return 0;
    }
    return 1;
}
}
