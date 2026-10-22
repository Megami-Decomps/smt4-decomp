/* NON_MATCHING: saved float and loop registers differ; retail saves the three coordinates separately rather than pairing x/y. */
#include "map/mapIf.h"

extern "C" {
extern MapIfGlobals g_mapIf;
f32 mathDistanceBetweenPoints(f32 x, f32 y, f32 z, f32 targetX, f32 targetY, f32 targetZ);

// Activate the first eligible map marker within ten units of the supplied position.
void FUN_002f3b14(f32 x, f32 y, f32 z)
{
    MapIfState *map = g_mapIf.state;
    for (s32 i = 0; i < 128; ++i) {
        MapIfRecord *record = &map->records[i];
        if (record->active &&
            (record->display.category == 29 || record->display.category == 38 ||
             record->display.category == 30 || record->display.category == 31 || record->display.category == 37)) {
            if (mathDistanceBetweenPoints(x, y, z, record->position.x, record->position.y, record->position.z) < 10.0f) {
                record->state = 18;
                return;
            }
        }
    }
}
}
