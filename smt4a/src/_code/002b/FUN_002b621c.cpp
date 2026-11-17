/* NON_MATCHING: vector subtraction batching and conversion/copy saved-register allocation differ. */
#include "map/MapEnemyGlobal.h"
#include "game/GameStateA.h"

struct EnemyMotionRecord {
    u8 prefix[0x1c];
    s16 start[3], startHeading, target[3], targetHeading, duration, holdTime;
};
extern "C" {
const EnemyMotionRecord *FUN_003a315c(s32 id);

void FUN_002b621c()
{
    MapEnemyA *state = g_mapEnemy;
    const EnemyMotionRecord *record = FUN_003a315c(g_gameState.motionId);
    for (s32 index = 0; index < MAP_ENEMY_COUNT_A; ++index) {
        MapEnemyEntryA *entry = &state->entries[index];
        if (entry->active != 0 && entry->kind != 0 && entry->kind < 11 && entry->state == 2) {
            entry->start.x = static_cast<f32>(record->start[0]);
            entry->start.y = static_cast<f32>(record->start[1]);
            entry->start.z = static_cast<f32>(record->start[2]);
            entry->startHeading = static_cast<f32>(record->startHeading);
            entry->end.x = static_cast<f32>(record->target[0]);
            entry->end.y = static_cast<f32>(record->target[1]);
            entry->end.z = static_cast<f32>(record->target[2]);
            entry->endHeading = static_cast<f32>(record->targetHeading);
            entry->duration = static_cast<f32>(record->duration);
            entry->velocity.x = entry->end.x - entry->start.x;
            entry->velocity.y = entry->end.y - entry->start.y;
            entry->velocity.z = entry->end.z - entry->start.z;
            f32 inverseDuration = 1.0f / entry->duration;
            entry->velocity.x *= inverseDuration;
            entry->velocity.y *= inverseDuration;
            entry->velocity.z *= inverseDuration;
            entry->wait = static_cast<f32>(record->holdTime);
            entry->basePosition = entry->start;
            entry->position = entry->start;
            entry->heading = entry->startHeading;
            entry->state = 26;
            entry->elapsed = 0;
            FUN_00377acc(entry, g_gameState.motionId, 3);
            return;
        }
    }
}
}
