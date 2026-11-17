/* NON_MATCHING: saved float and loop registers differ; retail saves the three coordinates separately rather than pairing x/y. */
#include "map/MapIfGlobals.h"
#include "util/MathFunctions.h"

extern "C" {

// Activate the first eligible map marker within ten units of the supplied position.
void FUN_002f3b14(f32 x, f32 y, f32 z)
{
    MapIfState *map = g_mapIf.state;
    for (s32 i = 0; i < 128; ++i) {
        MapIfRecord *record = &map->records[i];
        if (record->active &&
            (record->category == 29 || record->category == 38 ||
             record->category == 30 || record->category == 31 || record->category == 37)) {
            if (mathDistanceBetweenPoints(x, y, z, record->position.x, record->position.y, record->position.z) < 10.0f) {
                record->state = 18;
                return;
            }
        }
    }
}
}
