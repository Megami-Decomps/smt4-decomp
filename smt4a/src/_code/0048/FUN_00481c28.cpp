/* NON_MATCHING: actor base versus flags-subobject addressing and shared visibility-branch placement differ. */
#include "map/DistanceVisibilityWork.h"
#include "map/lmapMain.h"

extern "C" {
extern GameStateA g_gameState;
extern LmapSceneA *g_lmapScene;
void FUN_00481ba8(DistanceVisibilityWork *);
f32 distSpatial(MapVector, MapVector);

void FUN_00481c28(DistanceVisibilityWork *work)
{
    // This gate lies in the byte-aligned mapFlags union; do not change its alignment.
    struct VisibilityGateView {
        u8 unk000[0x2a0];
        u32 active;
    };
    typedef char VisibilityGateOffset[offsetof(VisibilityGateView, active) == 0x2a0 ? 1 : -1];
    union OrderedDistance {
        f32 value;
        s32 bits;
    };
    DistanceVisibilityActor *actor = work->actor;
    if (g_gameState.unk5C8 || g_gameState.inputBlocked ||
        g_gameState.controllerFlags.primary || g_gameState.controllerFlags.secondary)
        return;
    if (work->mode != 0) {
        if (work->mode != 1)
            return;
        FUN_00481ba8(work);
        actor->position.x += work->offset.x;
        actor->position.y += work->offset.y;
        actor->position.z += work->offset.z;
        return;
    }
    if (reinterpret_cast<VisibilityGateView *>(&g_gameState)->active)
        return;
    bool hidden;
    OrderedDistance distance;
    // Positive distances use the engine's ordered IEEE-754 integer representation.
    if (actor->category == 1) {
        distance.value = distSpatial(actor->position,
            *reinterpret_cast<MapVector *>(g_lmapScene->transform.position));
        hidden = distance.bits >= 0x44960000; // 1200.0f
    } else if (actor->category == 2) {
        distance.value = distSpatial(actor->position,
            *reinterpret_cast<MapVector *>(g_lmapScene->transform.position));
        hidden = distance.bits >= 0x44160000; // 600.0f
    } else {
        return;
    }
    if (hidden) {
        actor->flags &= ~8u;
        work->actor->graphics->model->flags |= 3;
    } else {
        actor->flags |= 8;
        work->actor->graphics->model->flags &= ~3u;
    }
}
}
