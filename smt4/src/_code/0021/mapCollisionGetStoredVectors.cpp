#include "shard/W6_W6Match6_CollisionQuad.h"


extern "C" {
extern CollisionVectorState DAT_0049e85c;

// Copy all four stored collision vectors when the collision state is enabled.
u8 mapCollisionGetStoredVectors(CollisionVector *first, CollisionVector *second,
                  CollisionVector *third, CollisionVector *fourth)
{
    if (g_mapCollision.unk00[0] == 0) {
        return 0;
    }
    *first = DAT_0049e85c.vectors[0];
    *second = DAT_0049e85c.vectors[1];
    *third = DAT_0049e85c.vectors[2];
    *fourth = DAT_0049e85c.vectors[3];
    return 1;
}
}
