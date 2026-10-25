#include "common.h"
#include "shard/JobWork.h"

struct JobOwnerWork {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 job;
};
extern "C" {
void jobStop(u32 job, s32 mode);
}

/* Stop the child job held in the owner's work area. */
extern "C" void jobStopChild(u32 job)
{
    jobStop(((JobOwnerWork *)jobGetWork(job))->job, 0);
}
