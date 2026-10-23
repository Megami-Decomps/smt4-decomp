/* NON_MATCHING: direction normalization elides retail's intermediate reloads, and vector copies/saved registers differ. */
#include "map/lmapMain.h"
#include "shard/W6_W6Match2_AocTable23.h"
extern "C" {
extern LmapMainStateA *g_lmapMainState;
extern LmapSceneA *g_lmapScene;
extern GameStateA g_gameState;
u32 FUN_003b5714(s32 category, s32 subtype, u32 variant);
Table23Record *dataTableGetRecord23(u32 index);
f32 distSpatial(f32 x1, f32 y1, f32 z1, f32 x2, f32 y2, f32 z2);

void FUN_00291e50(s32 startId, u32 startVariant, s32 endId, u32 endVariant)
{
    // The path controller extends far beyond the recovered LmapMainStateA prefix.
    struct PathView {
        u8 prefix[0x40];
        s32 map;
        u8 unk44[0x9310 - 0x44];
        MapVector start;
        MapVector end;
        MapVector direction;
        f32 speed;
        u32 frame;
        s32 duration;
    };
    // The shared record's byte-aligned union cannot gain a short vector without changing alignment.
    struct WaypointView { u8 prefix[4]; s16 x, y, z; };
    struct PhaseView { u8 prefix[0xCC]; s32 phase; u32 frame; u32 auxiliary; };
    typedef char PathViewOffset[offsetof(PathView, start) == 0x9310 && offsetof(PathView, duration) == 0x933C ? 1 : -1];
    PathView *path = (PathView *)g_lmapMainState;
    if (startId) {
        const WaypointView *point = (const WaypointView *)dataTableGetRecord23(FUN_003b5714(path->map, startId, startVariant));
        path->start.x = (f32)point->x;
        path->start.y = (f32)point->y;
        path->start.z = (f32)point->z;
    } else {
        path->start = *(const MapVector *)g_lmapScene->transform.position;
    }
    const WaypointView *point = (const WaypointView *)dataTableGetRecord23(FUN_003b5714(path->map, endId, endVariant));
    path->end.x = (f32)point->x;
    path->end.y = (f32)point->y;
    path->end.z = (f32)point->z;
    f32 distance = distSpatial(path->start.x, path->start.y, path->start.z, path->end.x, path->end.y, path->end.z);
    path->direction.z = path->end.z - path->start.z;
    path->direction.x = path->end.x - path->start.x;
    path->direction.y = path->end.y - path->start.y;
    f32 inverseDistance = 1.0f / distance;
    path->direction.x *= inverseDistance;
    path->direction.y *= inverseDistance;
    path->direction.z *= inverseDistance;
    path->speed = 30.0f;
    path->frame = 0;
    path->duration = (s32)(distance / path->speed);
    *(MapVector *)g_lmapScene->transform.position = path->start;
    *(MapVector *)g_lmapScene->transform.positionSnapshotA = path->start;
    g_gameState.mode = 101;
    g_gameState.submode = endId;
    PhaseView *state = (PhaseView *)g_lmapMainState;
    if (state->phase != 5) {
        state->frame = 0;
        state->phase = 5;
        state->auxiliary = 0;
    }
}
}
