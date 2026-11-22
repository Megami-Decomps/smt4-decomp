/* NON_MATCHING: the direction is nn::math's VEC3Sub then VEC3Scale (map/MapVector.h); retail reloads the direction's
 * y and z after storing each scaled component and copies the start position to the scene through VFP registers
 * (the build copies it with ldm/stm). */
#include "map/LmapMainGlobals.h"
#include "shard/W6_W6Match2_AocTable23.h"
#include "gamedata/DataTableAccess_AocTable23.h"
#include "util/MathFunctions.h"
#include "map/MapVector.h"

extern "C" {
u32 table23FindRecordByKey(s32 map, s32 group, u32 point);

// Move the map scene from its current position or a named waypoint toward another waypoint.
void lmapSceneMoveToWaypoint(s32 startGroup, u32 startPoint, s32 targetGroup, u32 targetPoint)
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
            reinterpret_cast<const Table23Record *>(dataTableGetRecord23(table23FindRecordByKey(work->map, startGroup, startPoint))));
        work->start.x = point->x;
        work->start.y = point->y;
        work->start.z = point->z;
    } else {
        work->start = g_lmapScene->pose.position;
    }
    const WaypointView *target = reinterpret_cast<const WaypointView *>(
        reinterpret_cast<const Table23Record *>(dataTableGetRecord23(table23FindRecordByKey(work->map, targetGroup, targetPoint))));
    work->target.x = target->x;
    work->target.y = target->y;
    work->target.z = target->z;
    f32 distance = mathDistanceBetweenPoints(work->start.x, work->start.y, work->start.z, work->target.x, work->target.y, work->target.z);
    work->direction = mapVectorSub(work->target, work->start);
    mapVectorScale(&work->direction, &work->direction, 1.0f / distance);
    work->speed = 30.0f;
    work->elapsed = 0;
    work->duration = static_cast<s32>(distance / work->speed);
    LmapScene *scene = g_lmapScene;
    MapVector start = work->start;
    scene->pose.position.x = start.x;
    scene->pose.position.y = start.y;
    scene->pose.position.z = start.z;
    scene->pose.targetPosition.x = start.x;
    scene->pose.targetPosition.y = start.y;
    scene->pose.targetPosition.z = start.z;
    MovementView *current = reinterpret_cast<MovementView *>(g_lmapMainState);
    if (current->mode != 5) {
        current->frame = 0;
        current->mode = 5;
        current->counter = 0;
    }
}
}
