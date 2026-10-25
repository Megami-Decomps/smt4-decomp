/* NON_MATCHING: saved-argument register allocation and target-vector store base differ. */
#include "ui/SpriteTransition.h"

extern "C" {
SpriteTransitionWork *jobGetWork(u32);
void aocSlotRelease(SpriteTransitionWork *);
const SpriteTextureEntry *aocContentGetIndexedRecord(void *, u32);
void uiSpriteReplaceTextureEntry(SpriteTransitionWork *, u32, u32);

/* Configure a sprite's target/start vectors, timing, and initial texture state. */
void FUN_002adca0(u32 job, const Vec3f *target, const Vec3f *start,
    u32 interpolation, s32 duration, s32 mode)
{
    SpriteTransitionWork *work = jobGetWork(job);
    work->interpolation = interpolation;
    work->duration = (f32)duration;
    work->state = 3;
    work->elapsed = 0.0f;
    work->delay = 0.0f;
    if (!work->initialized || (work->mode != 3 && work->mode != 4)) {
        work->mode = 0;
    }
    work->target = *target;
    if (!work->initialized) {
        work->initialized = 1;
        aocSlotRelease(work);
        work->start = *start;
        if (work->textureHandle == 0 && work->textureIndex == -1 &&
            work->textureSource != NULL) {
            const SpriteTextureEntry *entry = aocContentGetIndexedRecord(work->textureSource, 1);
            uiSpriteReplaceTextureEntry(work, entry->id, 0xFFFFFFFF);
        }
        work->velocity.x = 0.0f;
        work->velocity.z = 0.0f;
        work->velocity.y = 0.0f;
    }
    if (mode == 1) {
        work->mode = 1;
        work->progress = 1.0f;
        work->initialized = 0;
        work->remaining = work->duration;
    } else if (mode == 7) {
        work->mode = 7;
        work->initialized = 1;
        work->progress = 0.0f;
        work->remaining = work->duration;
        aocSlotRelease(work);
        work->velocity.x = 0.0f;
        work->velocity.y = 0.0f;
        work->velocity.z = 0.0f;
    }
}
}
