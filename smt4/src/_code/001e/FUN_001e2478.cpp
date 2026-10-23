/* NON_MATCHING: direction intermediate stores are folded, and scene-position snapshots use integer copies. */
#include "map/lmapMain.h"
#include "shard/W6_W6Match2_AocTable23.h"

extern "C" {
extern LmapMainState *g_lmapMainState;
extern LmapScene *g_lmapScene;
u32 FUN_0027d7b0(s32 map, s32 group, u32 point);
const Table23Record *dataTableGetRecord23(u32 key);
f32 mathDistanceBetweenPoints(MapVector first, MapVector second);

// Move the map scene from its current position or a named waypoint toward another waypoint.
void FUN_001e2478(s32 startGroup, u32 startPoint, s32 targetGroup, u32 targetPoint)
{
    struct WaypointView { u32 key; s16 x, y, z; };
    struct MovementView {
        u8 unk0000[0x40];
        s32 map;
        u8 unk0044[0x88];
        u32 mode;
        u32 frame;
        u32 counter;
        u8 unk00d8[0x4de4];
        MapVector start;
        MapVector target;
        MapVector direction;
        f32 speed;
        u32 elapsed;
        s32 duration;
    };
    // This movement tail is outside the canonical LmapMainState prefix.
    MovementView *work = reinterpret_cast<MovementView *>(g_lmapMainState);
    if (startGroup != 0) {
        const WaypointView *point = reinterpret_cast<const WaypointView *>(
            dataTableGetRecord23(FUN_0027d7b0(work->map, startGroup, startPoint)));
        work->start.x = point->x;
        work->start.y = point->y;
        work->start.z = point->z;
    } else {
        work->start = *reinterpret_cast<const MapVector *>(g_lmapScene->transform.position);
    }
    const WaypointView *target = reinterpret_cast<const WaypointView *>(
        dataTableGetRecord23(FUN_0027d7b0(work->map, targetGroup, targetPoint)));
    work->target.x = target->x;
    work->target.y = target->y;
    work->target.z = target->z;
    f32 distance = mathDistanceBetweenPoints(work->start, work->target);
    work->direction.x = work->target.x - work->start.x;
    work->direction.y = work->target.y - work->start.y;
    work->direction.z = work->target.z - work->start.z;
    f32 inverseDistance = 1.0f / distance;
    work->direction.x *= inverseDistance;
    work->direction.y *= inverseDistance;
    work->direction.z *= inverseDistance;
    work->speed = 30.0f;
    work->elapsed = 0;
    work->duration = static_cast<s32>(distance / work->speed);
    LmapScene *scene = g_lmapScene;
    MapVector start = work->start;
    scene->transform.position[0] = start.x;
    scene->transform.position[1] = start.y;
    scene->transform.position[2] = start.z;
    scene->transform.positionSnapshotA[0] = start.x;
    scene->transform.positionSnapshotA[1] = start.y;
    scene->transform.positionSnapshotA[2] = start.z;
    MovementView *current = reinterpret_cast<MovementView *>(g_lmapMainState);
    if (current->mode != 5) {
        current->frame = 0;
        current->mode = 5;
        current->counter = 0;
    }
}
}
