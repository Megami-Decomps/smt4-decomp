#include "common.h"
#include "shard/W6_W6Match1_PositionedStream.h"


extern "C" {
/* The distance between two points. */
f32 distSpatial(MapVector from, MapVector to)
{
    f32 dx = to.x - from.x;
    f32 dy = to.y - from.y;
    f32 dz = to.z - from.z;
    return __sqrtf(dx * dx + dy * dy + dz * dz);
}
}
