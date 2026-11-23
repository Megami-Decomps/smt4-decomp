#include "sound/SoundTestWork.h"

extern "C" {

s32 jobFind(u32 id);

/* Returns 1 when the sound-test job is found or has not started. */
u32 jobRefIsRunning(void)
{
    s32 found;
    SoundTestWork *work;

    work = DAT_00588fc8;
    if ((work != NULL) && ((found = jobFind(work->job), found != 0 || (work->requested == 0)))) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
