#include "map/MapGimicGlobal.h"

extern "C" {

void wordTripleClear(u32 *value);
s32 gameFlagIsSet(s32 flag);
void mapCollisionDisableByTag(s32 entryId);

void mapGimicReset(void)
{
    MapGimicA *state = g_mapGimic;
    /* The ten flag bytes and their padding are cleared as three words. */
    u32 *flags = reinterpret_cast<u32 *>(state->flags);
    s32 index;
    state->busy = 1;
    state->mode = 0;
    state->step = 0;
    state->index = 0;
    state->loaded = 0;
    state->status = 0;
    wordTripleClear(flags);
    state = g_mapGimic;
    for (index = 0; index < 10; ++index) {
        state->handles[index] = 0;
    }
    for (index = 0; index < MAP_GIMIC_ENTRIES; ++index) {
        MapGimicA *gimic = g_mapGimic;
        MapGimicEntryA *entry = &gimic->entries[index];
        if (entry->active) {
            if (entry->kind != 0x4D) {
                s32 required = entry->requiredFlag;
                s32 excluded = entry->forbiddenFlag;
                if ((!required || gameFlagIsSet(required)) &&
                    (!excluded || !gameFlagIsSet(excluded))) {
                    continue;
                }
            }
            mapCollisionDisableByTag(static_cast<s16>(entry->gimicId));
        }
    }
}
}
