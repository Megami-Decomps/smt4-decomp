/* NON_MATCHING: retail loads the move's end through three separate vldr and its start through vldmia with
 * writeback, then stores the difference field by field; the build loads both with vldmia and stores it with vstmia,
 * and the scale's base registers differ (r2/r3). */
#include "map/MapEnemyGlobal.h"
#include "game/GameState.h"

namespace {
struct EnemyMotionRecord {
    u8 unk00[0x18];
    s16 startX, startY, startZ, startHeading;
    s16 endX, endY, endZ, endHeading;
    s16 duration, wait;
};
}

extern "C" {

/* Starts the scripted move of the first active enemy waiting for one (state 2), from the current content entry. */
void mapEnemyStartScriptedMove(void)
{
    MapEnemy *map = g_mapEnemy;
    EnemyMotionRecord *motion = reinterpret_cast<EnemyMotionRecord *>(contentEntryGetD(g_gameState.map.contentId));
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
            enemy->velocity = mapVectorSub(enemy->end, enemy->start);
            mapVectorScale(&enemy->velocity, &enemy->velocity, 1.0f / enemy->duration);
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
