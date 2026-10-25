/* NON_MATCHING: retail lays the three 12-byte vectors out in a 48-byte block below the two candidate lists and keeps the player position in different registers; the control flow and the range tests (900 < d < 2976 or 300 < d < 4000) follow the retail code (about 175 diff lines). */
#include "classes/Obj422318.h"
#include "shard/W5_W5Match7_SceneState.h"

/* The effect object pool of the map spawner, with the table of candidate spawn points that follows its slots. */
struct SpawnerPool {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 category;
    /* 0x08 */ u32 index;
    /* 0x0C */ u8 unk0C[0xC];
    /* 0x18 */ struct SpawnedObject *slots[32];
    /* 0x98 */ u32 model;
    /* 0x9C */ u8 unk9C[4];
    /* 0xA0 */ u16 candidateCount;
    /* 0xA2 */ u16 candidates[1]; /* spawn point ids */
};
typedef char SpawnerPoolOffsets[
    offsetof(SpawnerPool, model) == 0x98 && offsetof(SpawnerPool, candidates) == 0xA2 ? 1 : -1];

struct SpawnPoint {
    /* 0x0 */ s16 unk0;
    /* 0x2 */ s16 x;
    /* 0x4 */ s16 y;
    /* 0x6 */ s16 z;
};

/* The object a spawner creates; only the fields the spawner fills in are named. */
struct SpawnedObject {
    /* 0x00 */ void **vtable;
    /* 0x04 */ u8 unk04[0x18];
    /* 0x1C */ s32 itemKind;
    /* 0x20 */ u32 spawnPoint;
    /* 0x24 */ u8 unk24[0x3C];
    /* 0x60 */ s32 devilId;
    /* 0x64 */ s32 rank;
};

extern "C" {
double sqrt(double);
extern LmapScene *g_lmapScene;

SpawnPoint *dataTable29Sub0GetEntryWithAoc(u32 id);
u32 randNextInRange(s32 limit);
s32 FUN_002533f4(s32 category, u32 index, s32 initialize);
SpawnedObject *effectPoolCreateObject(SpawnerPool *pool, s32 kind, u32 callback);
void FUN_002329a8(SpawnedObject *object, u32 model);
void recordSetOrigin(SpawnedObject *object, const f32 *position);
void recordSetDirection(SpawnedObject *object, const f32 *direction);
void recordSetPosition(SpawnedObject *object, const f32 *position);
u8 FUN_001e2954(s32 kind);
u8 dataTable00RankOfPicked(s32 kind);
bool gameFlagIsSet(u32 index);

/* Pick one of the spawner's unused spawn points (any, or one within range of the player for modes 1 and 2) and
 * create the object there. */
void FUN_00396b08(SpawnerPool *spawner, s32 mode)
{
    u16 unused[512];
    u16 inRange[512];
    u16 total = spawner->candidateCount;
    u16 unusedCount = 0;
    for (s32 i = 0; i < total; i++) {
        bool taken = false;
        for (s32 slot = 0; slot < 32; slot++) {
            SpawnedObject *object = spawner->slots[slot];
            if (object != NULL && spawner->candidates[i] == object->spawnPoint) {
                taken = true;
                break;
            }
        }
        if (!taken) {
            unused[unusedCount++] = spawner->candidates[i];
        }
    }
    if (unusedCount == 0) {
        return;
    }
    u32 spawnPoint = 0;
    if (mode == 0) {
        spawnPoint = unused[randNextInRange((u16)(unusedCount - 1))];
    } else if (mode == 1 || mode == 2) {
        u16 inRangeCount = 0;
        f32 playerX = g_lmapScene->position.x;
        f32 playerY = g_lmapScene->position.y;
        f32 playerZ = g_lmapScene->position.z;
        for (s32 i = 0; i < unusedCount; i++) {
            SpawnPoint *point = dataTable29Sub0GetEntryWithAoc(unused[i]);
            f32 dx = playerX - (f32)point->x;
            f32 dy = playerY - (f32)point->y;
            f32 dz = playerZ - (f32)point->z;
            f32 distance = (f32)sqrt(dx * dx + dy * dy + dz * dz);
            if (mode == 1 ? (distance > 900.0f && distance < 2976.0f) : (distance > 300.0f && distance < 4000.0f)) {
                inRange[inRangeCount++] = unused[i];
            }
        }
        if (inRangeCount == 0) {
            return;
        }
        spawnPoint = inRange[randNextInRange((u16)(inRangeCount - 1))];
    }
    SpawnPoint *point = dataTable29Sub0GetEntryWithAoc(spawnPoint);
    f32 origin[3] = {(f32)point->x, (f32)point->y, (f32)point->z};
    f32 direction[3] = {0.0f, 0.0f, 0.0f};
    f32 position[3] = {50.0f, 50.0f, 50.0f};
    s32 kind = FUN_002533f4(spawner->category, spawner->index, 0);
    SpawnedObject *object = effectPoolCreateObject(spawner, 0, 0);
    if (object == NULL) {
        return;
    }
    FUN_002329a8(object, spawner->model);
    recordSetOrigin(object, origin);
    recordSetDirection(object, direction);
    recordSetPosition(object, position);
    object->itemKind = kind;
    object->spawnPoint = spawnPoint;
    object->devilId = FUN_001e2954(kind);
    object->rank = dataTable00RankOfPicked(kind);
    if (gameFlagIsSet(0x529) && mode == 1) {
        ((void (*)(SpawnedObject *))object->vtable[5])(object);
    }
}
}
