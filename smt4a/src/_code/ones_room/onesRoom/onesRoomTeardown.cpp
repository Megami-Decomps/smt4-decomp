#include "ones_room/onesRoom.h"

extern "C" {

void asdMemFree(void *block);
void jobStop(u32 job, s32 arg);
void scrScriptProcessDestroy(void *process);
OnesRoomWork *jobGetWork(u32 job);
s32 FUN_00224880(void *process);
void campCommonBgRelease(s32 arg);
void campButtonHelpRelease(void);
void FUN_00212204(s32 arg);

extern OnesRoom *g_onesRoom;

/* Tears the room down once its script process has reached state 2: frees the work area's
 * blocks and stops the room's job. Returns -1 when it did, 0 otherwise. */
s32 onesRoomTeardown(u32 job)
{
    OnesRoomWork *work = jobGetWork(job);
    s32 state = FUN_00224880(work->process);

    if (state != 2) {
        return 0;
    }
    campCommonBgRelease(state);
    campButtonHelpRelease();
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
        FUN_00212204(0);
        FUN_00212204(1);
        jobStop(g_onesRoom->job, 0);
    }
    return -1;
}

} /* extern "C" */
