#include "shard/W6_W6Match6_CollisionQuad.h"


extern "C" {
extern CollisionVectorState g_mapCollisionVectors;

// Copy all four stored collision vectors when the collision state is enabled.
u8 mapCollisionGetStoredVectors(CollisionVector *first, CollisionVector *second,
                  CollisionVector *third, CollisionVector *fourth)
{
    if (g_mapCollision.unk00[0] == 0) {
        return 0;
    }
    *first = g_mapCollisionVectors.vectors[0];
    *second = g_mapCollisionVectors.vectors[1];
    *third = g_mapCollisionVectors.vectors[2];
    *fourth = g_mapCollisionVectors.vectors[3];
    return 1;
}
}
