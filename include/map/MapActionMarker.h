#pragma once
#include "common.h"

/* Position (xyz) and heading (w, degrees about the y axis) of a map marker. */
struct MapMarkerPosition {
    f32 x, y, z, w;
};
