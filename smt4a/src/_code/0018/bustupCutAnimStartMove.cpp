#include "event/bustupEvent/BustupSprite.h"
#include "shard/JobWork.h"

extern "C" {

/* Start a move towards its owner over frames (or stop it when there is no owner), raising the start height by to - from. */
void bustupCutAnimStartMove(u32 job, u32 owner, s32 frames, f32 from, f32 to)
{
    BustupSprite *work = reinterpret_cast<BustupSprite *>(jobGetWork(job));
    if (owner == 0) {
        bustupSpriteStartTransition(work, 1, 0);
        work->state = 2;
    } else {
        work->moveElapsed = 0.0f;
        work->moveProgress = 0.0f;
        work->moveDuration = (f32)frames;
        work->operation = 0;
        work->progress = 1.0f;
        work->state = 3;
        work->hidden = 0;
        work->moveStartOffset = work->offset;
        work->moveEndOffset = work->offset;
        work->moveOwner = owner;
    }
    work->moveEnd = work->position;
    work->moveStart = work->position;
    work->moveStart.z += to - from;
}

} /* extern "C" */
