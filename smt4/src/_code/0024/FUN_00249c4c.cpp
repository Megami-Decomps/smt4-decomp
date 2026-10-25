/* NON_MATCHING: release-node argument recovered; snapshot store, cached-node clear register and immediate/queued tail placement differ. */
#include "ui/SpriteTransition.h"

extern "C" {
SpriteTransitionWork *jobGetWork(u32);
s32 gameFlagIsSet(u32);
void asdTMTexTableReleaseNode(s32 table, s32 node);
void FUN_002a60cc(void *, u32, s32);
void aocSlotRelease(SpriteTransitionWork *);
s32 FUN_0024ecc0(u32, u32);
void FUN_002a880c(SpriteTransitionWork *, s32, s32);
void FUN_002a4e18(Vec3f *, u32);
extern void *g_aocSystem;

void FUN_00249c4c(u32 job, u32 resourceId, s32 immediate)
{
    // Resource ownership extends beyond SpriteTransitionWork's shared prefix.
    struct SpriteResourceView {
        u8 unk00[0x34];
        Vec3f position;
        u8 unk40[0x40];
        u32 active;
        s32 node;
    };
    typedef char SpriteResourceOffsets[offsetof(SpriteResourceView, position) == 0x34 &&
        offsetof(SpriteResourceView, active) == 0x80 &&
        offsetof(SpriteResourceView, node) == 0x84 ? 1 : -1];
    if (gameFlagIsSet(0x522) && !job)
        return;
    SpriteTransitionWork *work = jobGetWork(job);
    SpriteResourceView *resource = reinterpret_cast<SpriteResourceView *>(work);
    if (resource->node != -1 && resource->active) {
        asdTMTexTableReleaseNode(work->unk10, resource->node);
        FUN_002a60cc(g_aocSystem, work->unk10, resource->node);
        resource->node = -1;
        resource->active = 0;
    }
    work->initialized = 1;
    aocSlotRelease(work);
    work->unk08 = resourceId;
    switch (FUN_0024ecc0(job, resourceId)) {
    case 0:
        work->mode = 0;
        if (work->state) {
            work->state = 1;
        } else {
            work->initialized = 0;
            work->progress = 0.0f;
        }
        break;
    case 1:
        FUN_002a880c(work, 2, 0);
        work->state = 2;
        break;
    case 2:
        if (immediate)
            FUN_002a880c(work, 6, 0);
        else
            FUN_002a880c(work, 7, 0);
        work->state = 2;
        break;
    case 3: {
        FUN_002a880c(work, 5, 0);
        SpriteTransitionWork *current = jobGetWork(job);
        current->state = 1;
        current->start = reinterpret_cast<SpriteResourceView *>(current)->position;
        FUN_002a4e18(&work->target, work->unk08);
        break;
    }
    }
}
}
