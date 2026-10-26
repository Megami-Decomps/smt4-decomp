/* NON_MATCHING: the actor is addressed through its two sub-blocks and the hidden/visible placement (per-category compare, show arm first, shared hide tail) now matches retail; remaining: retail forms &block->position in r1 before the first vldmia and loads position.z before the offset in the move path. */
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
    DistanceVisibilityBlock *block = &actor->block;
    DistanceVisibilityTail *tail = &actor->tail;
    if (g_gameState.unk5C8 || g_gameState.inputBlocked ||
        g_gameState.controllerFlags.primary || g_gameState.controllerFlags.secondary)
        return;
    if (work->mode != 0) {
        if (work->mode != 1)
            return;
        FUN_00481ba8(work);
        block->position.x += work->offset.x;
        block->position.y += work->offset.y;
        block->position.z += work->offset.z;
        return;
    }
    if (reinterpret_cast<VisibilityGateView *>(&g_gameState)->active)
        return;
    OrderedDistance distance;
    // Positive distances use the engine's ordered IEEE-754 integer representation.
    if (tail->category == 1) {
        distance.value = distSpatial(block->position,
            *reinterpret_cast<MapVector *>(g_lmapScene->transform.position));
        if (distance.bits < 0x44960000) { // 1200.0f
            block->flags |= 8;
            work->actor->block.graphics->model->flags &= ~3u;
        } else {
            block->flags &= ~8u;
            work->actor->block.graphics->model->flags |= 3;
        }
    } else if (tail->category == 2) {
        distance.value = distSpatial(block->position,
            *reinterpret_cast<MapVector *>(g_lmapScene->transform.position));
        if (distance.bits < 0x44160000) { // 600.0f
            block->flags |= 8;
            work->actor->block.graphics->model->flags &= ~3u;
        } else {
            block->flags &= ~8u;
            work->actor->block.graphics->model->flags |= 3;
        }
    }
}
}
