/* NON_MATCHING: reset stores share the loop-counter zero register and the initial position address is calculated later. */
#include "map/mapGimic.h"

/* The shared byte-padding region begins at five; a typed union there would shift its alignment. */
struct MapGimicResetView {
    u32 job;
    u8 ready;
    u8 padding05[5];
    u16 state;
    u16 tableIndex;
    u8 padding0E[2];
    u32 count;
    u8 padding14[0x20];
    u32 position[3];
    u32 settings[10];
    u8 padding68[0x18];
    u32 pending;
};

extern "C" {
extern MapGimic *g_mapGimic;
void wordTripleClear(u32 *value);
s32 gameFlagIsSet(s32 flag);
void FUN_00319f64(s32 entryId);

void FUN_003538d0(void)
{
    MapGimicResetView *state = reinterpret_cast<MapGimicResetView *>(g_mapGimic);
    state->ready = 1;
    state->job = 0;
    state->state = 0;
    state->tableIndex = 0;
    state->count = 0;
    state->pending = 0;
    wordTripleClear(state->position);
    state = reinterpret_cast<MapGimicResetView *>(g_mapGimic);
    for (u32 index = 0; index < 10; ++index) {
        state->settings[index] = 0;
    }
    for (s32 index = 0; index < MAP_GIMIC_ENTRIES; ++index) {
        MapGimicEntry *entry = &g_mapGimic->entries[index];
        if (entry->active) {
            if (entry->id != 0x4D) {
                s32 required = entry->gates.required;
                s32 excluded = entry->gates.excluded;
                if ((!required || gameFlagIsSet(required)) &&
                    (!excluded || !gameFlagIsSet(excluded))) {
                    continue;
                }
            }
            FUN_00319f64(static_cast<s16>(entry->gates.entryId));
        }
    }
}
}
