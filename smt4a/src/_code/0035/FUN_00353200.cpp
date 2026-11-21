/* NON_MATCHING: retail has separate wide-area and normal-area branches that each hold their own step/distance constants in saved VFP registers and copies vectors with ldm/stm pairs; ours selects the step first (151 rows against 157). */
#include "common.h"
#include "map/LmapViewGlobals.h"
#include "game/GameStateA.h"
#include "util/MathFunctions.h"
#include "map/MapEnemyGlobal.h"
#include "util/TrigF32.h"

extern "C" {

u32 randRange(u32 limit);

s32 mapCollisionRaySegmentTest(MapVector *start, MapVector *end, s32 flags);
s32 mapResolveCollisionSphere(MapVector *position, MapVector *ground, s32 flags);

/* Tries up to four spots around the player (alternating left/right of the view heading, further out and
 * with a tighter spread after twelve attempts) and places the enemy on the first one the probe reaches
 * and that has ground. */
u32 FUN_00353200(MapEnemyEntryA *enemy)
{
    s32 i;

    for (i = 0; i < 4; i++) {
        MapVector origin = g_lmapScene->pose.position;
        MapVector end;
        MapVector ground;
        MapVector start;
        f32 angle = g_lmapView->heading;
        s32 attempt = g_mapEnemy->spawnAttempts;
        f32 distance;
        f32 step;
        f32 radians;

        if (g_gameState.wideArea != 0) {
            step = 25.0f;
        } else {
            step = 35.0f;
        }
        if (attempt > 0) {
            f32 offset = (f32)((attempt + 1) / 2);

            if ((attempt & 1) != 0) {
                angle = angle - offset * step;
            } else {
                angle = angle + offset * step;
            }
        }
        if (g_gameState.wideArea != 0) {
            if (attempt > 12) {
                distance = (f32)randRange(50) + 500.0f;
            } else {
                distance = (f32)randRange(50) + 900.0f;
            }
        } else if (attempt > 12) {
            distance = (f32)randRange(50) + 250.0f;
        } else {
            distance = (f32)randRange(50) + 560.0f;
        }
        radians = angle * 0.017453292f;
        origin.x = origin.x + libm_sinf(radians) * distance;
        origin.z = origin.z + libm_cosf(radians) * distance;
        g_mapEnemy->spawnAttempts++;
        end = origin;
        ground = origin;
        start = g_lmapScene->pose.position;
        end.y = end.y + 35.0f;
        start.y = start.y + 35.0f;
        if (mapCollisionRaySegmentTest(&start, &end, 0) == -1) {
            origin.y = origin.y - 5.0f;
            if (mapResolveCollisionSphere(&origin, &ground, 0) != 0) {
                enemy->position = ground;
                enemy->heading = mathPositionHeadingDegrees(end, start);
                return 1;
            }
        }
    }
    return 0;
}

} /* extern "C" */
