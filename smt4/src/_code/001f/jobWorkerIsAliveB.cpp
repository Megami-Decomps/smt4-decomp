#include "sound/SoundTestWork.h"

extern "C" {

extern int jobFind(u32 job);

/* 1 when the worker exists and its job is still alive (or it was never asked to stop). */
u32 jobWorkerIsAliveB(void)
{
    SoundTestWork *worker = g_soundTestWork;

    if (worker != NULL && (jobFind(worker->job) != 0 || worker->requested == 0)) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
