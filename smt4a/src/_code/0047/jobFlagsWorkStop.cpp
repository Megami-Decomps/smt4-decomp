#include "shard/Shard0047.h"

extern "C" {

typedef struct JobFlagsWork {
    /* 0x0000 */ u32 flags;
    /* 0x0004 */ u8 unk0004[0x1790];
    /* 0x1794 */ u32 job;
} JobFlagsWork;

extern u32 jobIsValid(u32 job);
extern u32 jobStop(u32 job, u16 arg);

void jobFlagsWorkStop(JobFlagsWork *work)
{
    if (jobIsValid(work->job) != 0) {
        work->flags = work->flags & 0xFFFFFCFF;
        jobStop(work->job, 0);
    }
}

} /* extern "C" */
