#pragma once
#include "common.h"
#include "map/MapVector.h"

/* Functions in the 0x00270000 code block whose subsystem is not known yet; each declaration matches its definition. */
extern "C" {

/* Picks the map interaction target the player at position, facing heading, is closest to. */
void mapTargetUpdateNearest(MapVector position, f32 heading);

} /* extern "C" */
