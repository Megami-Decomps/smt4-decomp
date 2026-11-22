/* NON_MATCHING: 114 lines: retail lays the radius branches out in another order, its frame is 60 bytes (end at sp+12, start at sp+28) against 36 here, and the base-register choice for the globals differs. */
#include "map/MapEnemyGlobal.h"
#include "game/GameState.h"
#include "map/LmapGlobals.h"
#include "shard/W6_W6Match6_CollisionQuad.h"
#include "util/TrigF32.h"
#include "map/LmapViewGlobals.h"

extern "C" {
u32 randNextInRange(u32 maximum);
s32 mapCollisionRaySegmentTest(const MapVector *start, const MapVector *end, MapVector *hit);
f32 mathPositionHeadingDegrees(f32 x, f32 y, f32 z, f32 targetX, f32 targetY, f32 targetZ);

u32 mapEnemyPickSpawnPosition(MapEnemyEntry *entry)
{
    MapEnemy *enemies = g_mapEnemy;
    for (s32 attempt = 0; attempt < 4; ++attempt) {
        MapVector candidate = g_lmapScene->pose.position;
        s32 sequence = enemies->spawnAttempts;
        f32 heading = g_mapCamera->heading;
        f32 radius;
        if (g_gameState.map.unk44 != 0) {
            if (sequence > 0) {
                if ((sequence & 1) != 0)
                    heading -= static_cast<f32>((sequence + 1) / 2) * 25.0f;
                else
                    heading += static_cast<f32>((sequence + 1) / 2) * 25.0f;
            }
            if (sequence > 12)
                radius = static_cast<f32>(randNextInRange(50)) + 500.0f;
            else
                radius = static_cast<f32>(randNextInRange(50)) + 900.0f;
        } else {
            if (sequence > 0) {
                if ((sequence & 1) != 0)
                    heading -= static_cast<f32>((sequence + 1) / 2) * 35.0f;
                else
                    heading += static_cast<f32>((sequence + 1) / 2) * 35.0f;
            }
            if (sequence > 12)
                radius = static_cast<f32>(randNextInRange(50)) + 250.0f;
            else
                radius = static_cast<f32>(randNextInRange(50)) + 560.0f;
        }
        heading *= 0.017453292f;
        candidate.x += libm_sinf(heading) * radius;
        candidate.z += libm_cosf(heading) * radius;
        ++enemies->spawnAttempts;
        MapVector start = g_lmapScene->pose.position;
        start.y += 35.0f;
        MapVector end = candidate;
        end.y += 35.0f;
        if (mapCollisionRaySegmentTest(&start, &end, NULL) == -1) {
            entry->position.x = candidate.x;
            entry->position.y = candidate.y;
            entry->position.z = candidate.z;
            entry->heading = mathPositionHeadingDegrees(end.x, end.y, end.z, start.x, start.y, start.z);
            return 1;
        }
    }
    return 0;
}
}
