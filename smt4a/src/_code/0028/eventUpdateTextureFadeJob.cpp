#include "event/3dEvent/EventTextureJob.h"

extern "C" {
EventTextureJobWork *jobGetWork(void);
void jobStop(u32 job, s32 mode);
s32 FUN_00162ea4(void);
u32 FUN_00409fe8(s32 resource, u32 first, u32 second);
s32 nkdwLoaderParse(u32 resource);
void aocHandleButtons(u32 resource, s32 mode);
s32 FUN_003fce08(u32 resource, u32 argument);
f32 asdAnimGetTrackLastFrame(u32 resource, u32 track);

// Drive resource loading, looping animation and a clamped texture-opacity fade.
u32 eventUpdateTextureFadeJob(u32 job)
{
    EventTextureJobWork *work = jobGetWork();
    switch (work->state) {
    case 0:
        if (work->resource != 0 && work->animate != 0) {
            work->animationFrame += 2.0f;
            f32 lastFrame = asdAnimGetTrackLastFrame(work->resource, 0);
            if (lastFrame <= work->animationFrame) {
                work->animationFrame -= lastFrame;
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
        if (FUN_00162ea4() == 0 && work->resourceId != 0) {
            u32 resource = FUN_00409fe8(work->resourceId, 1, 1);
            work->state = 2;
            work->resource = resource;
        }
        break;
    case 2:
        if (nkdwLoaderParse(work->resource)) {
            aocHandleButtons(work->resource, 7);
            work->state = 3;
        }
        break;
    case 3:
        if (FUN_003fce08(work->resource, 1)) {
            work->state = 0;
        }
        break;
    }
    return 0;
}
}
