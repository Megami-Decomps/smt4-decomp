#include "common.h"

extern "C" {

typedef struct JobWork {
    /* 0x0000 */ u8 unk0000[0x1EA0];
    /* 0x1EA0 */ s32 frame;
} JobWork;

extern JobWork *jobGetWork(void);

/* Advances the job's frame counter, wrapping it at 30. */
u32 jobFrameCounterAdvance(void)
{
    JobWork *work = jobGetWork();
    s32 *frame = &work->frame;
    s32 next = *frame + 1;

    *frame = next;
    if (next >= 30) {
        *frame = next - 30;
    }
    return 0;
}

} /* extern "C" */
