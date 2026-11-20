#include "map/MapIfGlobals.h"
#include "map/MapVector.h"

extern "C" {
f32 mathDistanceBetweenPoints(MapVector from, MapVector to); // declcheck: local (util/MathFunctions.h declares six floats for its float callers; retail moves this caller's point as one by-value vector, as in mapSelectNearbyDeferredModel)

// Activate the first eligible map marker within ten units of the supplied position.
void mapIfActivateNearbyMarker(MapVector point)
{
    MapIfState *map = g_mapIf.state;
    for (s32 i = 0; i < 128; ++i) {
        MapIfRecord *record = &map->records[i];
        if (record->active &&
            (record->category == 29 || record->category == 38 ||
             record->category == 30 || record->category == 31 || record->category == 37)) {
            if (mathDistanceBetweenPoints(point, record->position) < 10.0f) {
                record->state = 18;
                return;
            }
        }
    }
}
}
