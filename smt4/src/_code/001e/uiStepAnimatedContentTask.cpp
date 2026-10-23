#include "common.h"

struct NkdwPreviewResource;
struct AnimatedContentTaskWork {
    u32 unk00;
    s32 state;
    u32 unk08;
    f32 opacity;
    f32 fadeStep;
    u8 stopWhenHidden;
    u8 unk15[0x1F];
    NkdwPreviewResource *resource;
    u32 requested;
    u32 unk3C;
    f32 frame;
    u8 animate;
};
extern "C" {
AnimatedContentTaskWork *jobGetWork(u32 job);
f32 asdAnimGetTrackLastFrame(NkdwPreviewResource *resource, s32 track);
s32 FUN_002c1d5c(void);
NkdwPreviewResource *FUN_00294090(u32 request, u32 mode);
s32 nkdwHeaderParse(NkdwPreviewResource *resource);
void aocHandleButtons(NkdwPreviewResource *resource, s32 mode);
s32 FUN_00294fe0(NkdwPreviewResource *resource);
void jobStop(u32 job, s32 mode);

/* Loads the requested content, enables it, then advances its looping animation and opacity fade. */
u32 uiStepAnimatedContentTask(u32 job)
{
    AnimatedContentTaskWork *work = jobGetWork(job);
    switch (work->state) {
    case 0:
        if (work->resource != NULL && work->animate != 0) {
            work->frame += 2.0f;
            f32 lastFrame = asdAnimGetTrackLastFrame(work->resource, 0);
            if (lastFrame <= work->frame) {
                work->frame -= lastFrame;
            }
        }
        if (work->fadeStep != 0.0f) {
            work->opacity += work->fadeStep;
            if (work->opacity < 0.0f) {
                work->opacity = 0.0f;
                work->fadeStep = 0.0f;
                if (work->stopWhenHidden != 0) {
                    jobStop(job, 0);
                }
            } else if (work->opacity > 1.0f) {
                work->opacity = 1.0f;
                work->fadeStep = 0.0f;
            }
        }
        break;
    case 1:
        if (FUN_002c1d5c() == 0 && work->requested != 0) {
            NkdwPreviewResource *resource = FUN_00294090(work->requested, 1);
            work->state = 2;
            work->resource = resource;
        }
        break;
    case 2:
        if (nkdwHeaderParse(work->resource) != 0) {
            aocHandleButtons(work->resource, 7);
            work->state = 3;
        }
        break;
    case 3:
        if (FUN_00294fe0(work->resource) != 0) {
            work->state = 0;
        }
        break;
    }
    return 0;
}
}
