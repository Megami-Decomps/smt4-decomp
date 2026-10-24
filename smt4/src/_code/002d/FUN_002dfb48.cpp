/* NON_MATCHING: heading-offset arithmetic, radius branch layout, vector stack placement and VFP registers differ. */
#include "map/mapEnemy.h"
#include "shard/W6_W6Match6_CollisionQuad.h"

struct SpawnScenePose { u8 prefix[0x18]; f32 heading; CollisionVector position; };
struct SpawnModePrefix { u8 prefix[0x44]; u16 mode; };
extern "C" {
extern MapEnemy *g_mapEnemy;
extern SpawnScenePose *g_lmapScene, *DAT_004474f4;
extern SpawnModePrefix DAT_0049fb1c;
u32 randNextInRange(u32 maximum);
f32 FUN_0028250c(f32 angle);
f32 FUN_00282390(f32 angle);
s32 FUN_0025b4b0(const CollisionVector *start, const CollisionVector *end, CollisionVector *hit);
f32 mathPositionHeadingDegrees(f32 x, f32 y, f32 z, f32 targetX, f32 targetY, f32 targetZ);

u32 FUN_002dfb48(MapEnemyEncounterView *entry)
{
    MapEnemy *enemies = g_mapEnemy;
    for (s32 attempt = 0; attempt < 4; ++attempt) {
        CollisionVector candidate = g_lmapScene->position;
        s32 sequence = enemies->unk3044;
        f32 heading = DAT_004474f4->heading;
        f32 radius;
        if (DAT_0049fb1c.mode != 0) {
            if (sequence > 0) {
                f32 offset = static_cast<f32>((sequence + 1) / 2) * 25.0f;
                heading += (sequence & 1) != 0 ? -offset : offset;
            }
            if (sequence >= 13)
                radius = static_cast<f32>(randNextInRange(50)) + 500.0f;
            else
                radius = static_cast<f32>(randNextInRange(50)) + 900.0f;
        } else {
            if (sequence > 0) {
                f32 offset = static_cast<f32>((sequence + 1) / 2) * 35.0f;
                heading += (sequence & 1) != 0 ? -offset : offset;
            }
            if (sequence >= 13)
                radius = static_cast<f32>(randNextInRange(50)) + 250.0f;
            else
                radius = static_cast<f32>(randNextInRange(50)) + 560.0f;
        }
        heading *= 0.017453292f;
        candidate.x += FUN_0028250c(heading) * radius;
        candidate.z += FUN_00282390(heading) * radius;
        ++enemies->unk3044;
        CollisionVector start = g_lmapScene->position;
        start.y += 35.0f;
        CollisionVector end = candidate;
        end.y += 35.0f;
        if (FUN_0025b4b0(&start, &end, NULL) == -1) {
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
