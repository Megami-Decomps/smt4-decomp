/* NON_MATCHING: named extra-model records restore retail loop and task/state stores; task argument setup and vector-copy scratch registers still differ. */
#include "map/mapEnemy.h"
#include "sys/Task.h"
#include "shard/S1Mover.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

namespace {
/* The shared entry's byte-aligned padding cannot be replaced with aligned vector fields. */
struct MapEnemyInitializationView {
    u8 active;
    u8 unk01[3];
    s32 index;
    Vec3f position;
    Vec3f previousPosition;
    Vec3f displayPosition;
    f32 heading;
    s32 behavior;
    s32 targetIndex;
    u32 mode;
    f32 targetDistance;
    u8 unk40[0x10];
    u8 eventEnabled;
    u8 unk51[3];
    s32 markerIndex;
    u32 mapId;
    s32 count;
    u32 value;
    s32 scriptMode;
    s32 message;
    u32 messageArgument;
    u32 result;
    u32 unk74;
    u32 unk78;
    u8 hasMarker, markerRegistered, markerActive;
    u8 unk7F[5];
    s32 state;
    s32 elapsed;
    s32 randomDelay;
    u32 unk90;
    u8 unk94[0xA4];
    u16 firstTimer, secondTimer;
    u8 firstFlag, secondFlag, thirdFlag;
    u8 unk13F;
    u32 unk140;
    u8 flag144;
    u8 unk145[3];
    f32 speed;
    u8 unk14C[0x20];
    u32 unk16C;
    s32 encounterId;
    s32 kind;
    AsdMdlObject *model;
    u8 registered, owned;
    u8 unk17E[2];
};
typedef char MapEnemyInitializationLayoutCheck[
    sizeof(MapEnemyInitializationView) == sizeof(MapEnemyEntry) &&
    offsetof(MapEnemyInitializationView, position) == 8 &&
    offsetof(MapEnemyInitializationView, state) == 0x84 &&
    offsetof(MapEnemyInitializationView, firstTimer) == 0x138 &&
    offsetof(MapEnemyInitializationView, model) == 0x178 ? 1 : -1];
}
extern "C" {
extern MapEnemy *g_mapEnemy;
u32 taskCreateDraw(const char *name, u16 priority, u8 list, u32 bytes,
                   TaskFunc update, TaskFunc destroy, void *work, u32 parent);
s32 FUN_001d9294();
void mapEnemyFreeWork();
s32 randNextInRange(u32 limit);

void MapEnemy_Register(u32 parent)
{
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\map\\mapEnemy.cpp", 308);
    MapEnemy *work = static_cast<MapEnemy *>(asdMemAlloc(0x100, 0x100, 0, sizeof(MapEnemy), 1));
    g_mapEnemy = work;
    work->controller.task = taskCreateDraw("MENEMY", 2, 0, 0,
        reinterpret_cast<TaskFunc>(FUN_001d9294), reinterpret_cast<TaskFunc>(mapEnemyFreeWork), NULL, parent);
    work->controller.state = 0;
    work->controller.elapsed = 0;
    work->controller.unk0C = 0;
    work->controller.unk10 = 0;
    work->render.unk3034 = 0;
    work->render.modelCount = 0;
    work->render.unk303C = 0;
    work->render.unk3040 = 0;
    work->unk3048[0] = 0;
    work->unk3048[1] = 0;
    for (s32 index = 0; index < MAP_ENEMY_COUNT; ++index) {
        MapEnemyInitializationView *entry = reinterpret_cast<MapEnemyInitializationView *>(&work->entries[index]);
        entry->active = 0;
        entry->index = index;
        entry->position.x = 0.0f;
        entry->position.y = 0.0f;
        entry->position.z = 0.0f;
        entry->previousPosition = entry->position;
        entry->displayPosition.x = 0.0f;
        entry->displayPosition.y = 0.0f;
        entry->displayPosition.z = 0.0f;
        entry->heading = 0.0f;
        entry->behavior = 0;
        entry->targetIndex = -1;
        entry->mode = 1;
        entry->targetDistance = 99999.0f;
        entry->eventEnabled = 0;
        entry->markerIndex = 0;
        entry->mapId = 0;
        entry->count = 0;
        entry->value = 0;
        entry->scriptMode = 0;
        entry->message = 0;
        entry->messageArgument = 0;
        entry->result = 0;
        entry->unk74 = 0;
        entry->unk78 = 1;
        entry->hasMarker = 0;
        entry->markerRegistered = 0;
        entry->markerActive = 0;
        entry->state = 0;
        entry->elapsed = 0;
        entry->randomDelay = randNextInRange(100) + 30;
        entry->unk90 = 0;
        entry->unk16C = 0;
        entry->firstFlag = 0;
        entry->secondFlag = 0;
        entry->firstTimer = 0;
        entry->secondTimer = 0;
        entry->thirdFlag = 0;
        entry->unk140 = 0;
        entry->flag144 = 0;
        entry->speed = 0.0f;
        entry->kind = 0;
        entry->encounterId = 999;
        entry->model = NULL;
        entry->registered = 0;
        entry->owned = 0;
    }
    for (s32 index = 0; index < 21; ++index) {
        MapEnemyExtraModel *entry = &work->extraModels[index];
        entry->model = NULL;
        entry->registered = 0;
        entry->active = 0;
    }
}
}
