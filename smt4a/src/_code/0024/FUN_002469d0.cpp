/* NON_MATCHING: vector argument saves, radius literal allocation and obstacle pointer registers differ. */
#include "map/MapCircleObstacles.h"

extern "C" {
extern MapCircleObstacleTable* DAT_00581280;
s32 mapResolveCircleOverlapXZ(MapVector* result, MapVector position, f32 radius,
                             MapVector obstaclePosition, f32 obstacleRadius);
void FUN_002947b8(MapVector* result, MapVector position);
void FUN_002b563c(MapVector* result, MapVector position);

// Push a moving circle out of active obstacle circles and apply map constraints.
u32 FUN_002469d0(MapVector* result, MapVector position)
{
    u32 collided = 0;
    MapVector resolved;
    for (s32 index = 0; index < 64; ++index) {
        MapCircleObstacle* obstacle = &DAT_00581280->entries[index];
        if (obstacle->active) {
            if (obstacle->pointOnly) {
                if (mapResolveCircleOverlapXZ(&resolved, position, 50.0f, obstacle->position, 0.0f)) {
                    position = resolved;
                    collided = 1;
                }
            } else {
                if (mapResolveCircleOverlapXZ(&resolved, position, 50.0f, obstacle->position, 20.0f)) {
                    position = resolved;
                    collided = 1;
                }
            }
        }
    }
    FUN_002947b8(&resolved, position);
    FUN_002b563c(&resolved, position);
    *result = resolved;
    return collided;
}
}
