#include "ones_room/onesRoom.h"

extern "C" {

void asdMemFree(void *block);
void jobStop(u32 job, s32 arg);
void scrScriptProcessDestroy(void *process);
OnesRoomWork *jobGetWork(u32 job);
s32 FUN_0019e0c0(void *process);
void uiFadeRelease(s32 arg);
void buttonHelpRelease(void);
void FUN_00287728(s32 arg);

extern OnesRoom *g_onesRoom;

/* Tears the room down once its script process has reached state 2: frees the work area's
 * blocks and stops the room's job. Returns -1 when it did, 0 otherwise. */
s32 onesRoomTeardown(u32 job)
{
    OnesRoomWork *work = jobGetWork(job);
    s32 state = FUN_0019e0c0(work->process);

    if (state != 2) {
        return 0;
    }
    uiFadeRelease(state);
    buttonHelpRelease();
    if (work->process != NULL) {
        scrScriptProcessDestroy(work->process);
        work->process = NULL;
    }
    if (work->dataA != NULL) {
        asdMemFree(work->dataA);
        work->dataA = NULL;
    }
    if (work->dataB != NULL) {
        asdMemFree(work->dataB);
        work->dataB = NULL;
    }
    if (work->active != 0) {
        FUN_00287728(0);
        FUN_00287728(1);
        jobStop(g_onesRoom->job, 0);
    }
    return -1;
}

} /* extern "C" */
