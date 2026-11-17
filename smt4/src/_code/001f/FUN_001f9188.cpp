/* NON_MATCHING: scalar vector subtraction/scaling does not reproduce retail's inlined vector-helper loads and saved-register allocation. */
#include "map/MapEnemyGlobal.h"

namespace {
struct EnemyMotionRecord {
    u8 unk00[0x18];
    s16 startX, startY, startZ, startHeading;
    s16 endX, endY, endZ, endHeading;
    s16 duration, wait;
};
struct EnemyMotionSelection {
    u8 unk00[0x46];
    s16 contentId;
};
}

extern "C" {
extern EnemyMotionSelection DAT_0049fb1c;

void FUN_001f9188(void)
{
    MapEnemy *map = g_mapEnemy;
    EnemyMotionRecord *motion = reinterpret_cast<EnemyMotionRecord *>(contentEntryGetD(DAT_0049fb1c.contentId));
    for (s32 i = 0; i < MAP_ENEMY_COUNT; ++i) {
        MapEnemyEntry *enemy = &map->entries[i];
        if (enemy->active != 0 && enemy->kind != 0 && enemy->kind < 11 && enemy->state == 2) {
            enemy->start.x = motion->startX;
            enemy->start.y = motion->startY;
            enemy->start.z = motion->startZ;
            enemy->startHeading = motion->startHeading;
            enemy->end.x = motion->endX;
            enemy->end.y = motion->endY;
            enemy->end.z = motion->endZ;
            enemy->endHeading = motion->endHeading;
            enemy->duration = motion->duration;
            enemy->velocity.x = enemy->end.x - enemy->start.x;
            enemy->velocity.y = enemy->end.y - enemy->start.y;
            enemy->velocity.z = enemy->end.z - enemy->start.z;
            f32 inverseDuration = 1.0f / enemy->duration;
            enemy->velocity.x *= inverseDuration;
            enemy->velocity.y *= inverseDuration;
            enemy->velocity.z *= inverseDuration;
            enemy->wait = motion->wait;
            enemy->basePosition = enemy->start;
            enemy->position = enemy->start;
            enemy->heading = enemy->startHeading;
            enemy->state = 25;
            enemy->elapsed = 0;
            return;
        }
    }
}
}
