/* NON_MATCHING: scalar vector subtraction/scaling does not reproduce retail's inlined vector-helper loads and saved-register allocation. */
#include "map/mapEnemy.h"
#include "status/StatusCamera.h"

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
// Position at 0x08 lies inside the shared slot's unaligned byte padding; keep this view local.
struct ScriptedEnemyMotionView {
    u8 active;
    u8 unk01[7];
    Vec3 previousPosition;
    u8 unk14[0xC];
    Vec3 position;
    f32 heading;
    u8 unk30[0x54];
    s32 state;
    s32 timer;
    u8 unk8C[0x78];
    Vec3 start;
    f32 startHeading;
    Vec3 end;
    f32 endHeading;
    f32 duration;
    Vec3 velocity;
    f32 wait;
    u8 unk138[0x3C];
    s32 kind;
    u8 unk178[8];
};
typedef char ScriptedEnemyMotionLayoutCheck[sizeof(ScriptedEnemyMotionView) == sizeof(MapEnemyEntry) &&
    offsetof(ScriptedEnemyMotionView, start) == 0x104 &&
    offsetof(ScriptedEnemyMotionView, velocity) == 0x128 ? 1 : -1];
}

extern "C" {
extern MapEnemy *g_mapEnemy;
extern EnemyMotionSelection DAT_0049fb1c;
EnemyMotionRecord *contentEntryGetD(s32 id);

void FUN_001f9188(void)
{
    MapEnemy *map = g_mapEnemy;
    EnemyMotionRecord *motion = contentEntryGetD(DAT_0049fb1c.contentId);
    for (s32 i = 0; i < MAP_ENEMY_COUNT; ++i) {
        ScriptedEnemyMotionView *enemy = reinterpret_cast<ScriptedEnemyMotionView *>(&map->entries[i]);
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
            enemy->previousPosition = enemy->start;
            enemy->position = enemy->start;
            enemy->heading = enemy->startHeading;
            enemy->state = 25;
            enemy->timer = 0;
            return;
        }
    }
}
}
