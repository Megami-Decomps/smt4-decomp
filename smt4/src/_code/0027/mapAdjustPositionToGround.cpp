#include "map/mapDepart.h"

extern "C" {
s32 mapProjectPositionToGround(MapVector *candidate, MapVector *previous);

/* Tries an upward adjustment, then up to five downward samples, retaining the last candidate. */
void mapAdjustPositionToGround(MapVector *position)
{
    MapVector candidate = *position;
    MapVector previous = *position;
    for (s32 attempt = 0; attempt < 6; ++attempt) {
        if (attempt == 0) {
            candidate.y += 1.0f;
        } else {
            candidate.y -= 15.0f;
        }
        if (mapProjectPositionToGround(&candidate, &previous) != 0) {
            break;
        }
        previous = candidate;
    }
    *position = candidate;
}
}
