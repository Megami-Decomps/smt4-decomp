#include "common.h"
#include "shard/JobWork.h"

extern "C" {

typedef struct EventTextureJobWork {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 state;
    /* 0x10 */ u8 unk10[0x18];
    /* 0x28 */ f32 velocity;
    /* 0x2C */ u8 unk2C[4];
    /* 0x30 */ u8 moving;
    /* 0x31 */ u8 unk31[0x57];
    /* 0x88 */ u8 holding;
} EventTextureJobWork;

extern u32 eventTexGetCurrent(void);
extern s32 jobIsValid(u32 job);
extern s32 scrGetCommandFrame(void);
extern void eventTexRemoveHandle(u32 job);
extern void jobStop(u32 job, s32 arg);

/* Script step: while the job is valid, stops it once its state is 1; otherwise starts it moving
 * backwards (slowly while holding, faster otherwise). Returns 1 when done, 0 to keep waiting. */
s32 scrCommEventTextureMoveBackward(void)
{
    u32 job = eventTexGetCurrent();

    if (jobIsValid(job) != 0) {
        EventTextureJobWork *work = (EventTextureJobWork *)jobGetWork(job);

        if (work->state == 1) {
            eventTexRemoveHandle(job);
            jobStop(job, 0);
            return 1;
        }
        if (work->holding != 0) {
            if (scrGetCommandFrame() == 0) {
                work->moving = 1;
                work->velocity = -0.1f;
            }
            return 0;
        }
        work->moving = 1;
        work->velocity = -0.25f;
    }
    return 1;
}

} /* extern "C" */
