/* NON_MATCHING: Boolean collision flags are materialized and stored in a different branch layout. */
#include "shard/W6_W6Match6_CollisionQuad.h"
#include "map/mapDepart.h"
extern "C" {
extern GameStateA g_gameState;
extern CollisionVectorState DAT_005ed314;

// Publishes collision availability and copies the four stored vectors when enabled.
u8 FUN_002e34a4(CollisionVector* first, CollisionVector* second,
                CollisionVector* third, CollisionVector* fourth)
{
    s8 queued = (s8)g_mapCollision.unk00[1];
    g_gameState.collision.unk3A2 = queued != 0;
    if (g_mapCollision.unk00[0] == 0) {
        g_gameState.collision.unk3A3 = 0;
        return 0;
    }
    g_gameState.collision.unk3A3 = queued == 0;
    *first = DAT_005ed314.vectors[0];
    *second = DAT_005ed314.vectors[1];
    *third = DAT_005ed314.vectors[2];
    *fourth = DAT_005ed314.vectors[3];
    return 1;
}
}
