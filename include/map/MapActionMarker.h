#pragma once
#include "common.h"

/* Position (xyz) and heading (w, degrees about the y axis) of a map marker. */
struct MapMarkerPosition {
    f32 x, y, z, w;
};

extern "C" {

/* Creates the map action-down marker model at the given position and starts it. */
void FUN_00248114(MapMarkerPosition position);

/* Creates the map action-cave marker model at the given position and starts it. */
void FUN_001b4478(MapMarkerPosition position);

} /* extern "C" */
