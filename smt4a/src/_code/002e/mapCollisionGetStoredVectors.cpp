#include "shard/W6_W6Match6_CollisionQuad.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"
extern "C" {
extern CollisionVectorState g_mapCollisionVectors;

/* Publishes the collision ready/loaded flags and copies the four stored vectors when collision is loaded. */
u8 mapCollisionGetStoredVectors(CollisionVector* first, CollisionVector* second,
                CollisionVector* third, CollisionVector* fourth)
{
    if (g_mapCollision.status.ready != 0)
        g_gameState.unk3A2 = 1;
    else
        g_gameState.unk3A2 = 0;
    if (g_mapCollision.status.loaded == 0) {
        g_gameState.unk3A3 = 0;
        return 0;
    }
    g_gameState.unk3A3 = 1;
    if (g_mapCollision.status.ready != 0)
        g_gameState.unk3A3 = 0;
    *first = g_mapCollisionVectors.vectors[0];
    *second = g_mapCollisionVectors.vectors[1];
    *third = g_mapCollisionVectors.vectors[2];
    *fourth = g_mapCollisionVectors.vectors[3];
    return 1;
}
} /* extern "C" */
