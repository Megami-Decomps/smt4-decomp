#include "common.h"

struct ChildJobWork {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 child;
};

extern "C" ChildJobWork *jobGetWork(u32 handle);
extern "C" s32 jobStop(u32 handle, u16 delay);

/* Stop the child job retained by this job's work area. */
extern "C" void jobStopChild(u32 handle)
{
    jobStop(jobGetWork(handle)->child, 0);
}
