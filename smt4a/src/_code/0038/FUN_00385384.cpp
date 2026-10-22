/* NON_MATCHING: retail 48 vs built 48 rows; spatial argument preservation and record-loop register allocation differ. */
#include "map/mapIf.h"

extern "C" {
extern MapIfGlobalsA g_mapIf;
f32 distSpatial(f32, f32, f32, f32, f32, f32);
s32 FUN_003d4ed8(u32, f32, f32, f32);

// Activate the first nearby record of the proximity-trigger category.
void FUN_00385384(f32 x, f32 y, f32 z)
{
    MapIfStateA *state = g_mapIf.state;
    for (s32 index = 0; index < 128; ++index) {
        MapIfRecord *record = &state->records[index];
        if (record->active != 0 && record->display.category == 34) {
            if (distSpatial(x, y, z, record->position.x, record->position.y, record->position.z) < 10.0f) {
                FUN_003d4ed8(0x10002a9, record->position.x, y + 80.0f, record->position.z);
                record->state = 7;
                record->update.counter = 0;
                return;
            }
        }
    }
}
}
