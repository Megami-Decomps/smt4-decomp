#ifndef SHARD_W6_W6MATCH3_MAP_SCENE_TRANSITION_H
#define SHARD_W6_W6MATCH3_MAP_SCENE_TRANSITION_H

#include "common.h"

struct MapVector;

extern "C" {
f32 mathPositionHeadingDegrees(MapVector from, MapVector to);
void lmapSceneBeginPositionTransition(f32 x, f32 y, f32 z, f32 endX, f32 endY, f32 endZ);
void lmapSceneBeginPositionTransition(f32 x, f32 y, f32 z, f32 endX, f32 endY, f32 endZ);
}

#endif
