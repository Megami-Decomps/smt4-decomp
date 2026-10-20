#include "shard/Shard0037.h"

extern "C" {

typedef struct JobsOwner {
    /* 0x000 */ u8 unk000[0x634];
    /* 0x634 */ u32 jobs[4];
} JobsOwner;

typedef struct JobsOwnerRef {
    /* 0x00 */ JobsOwner *obj;
} JobsOwnerRef;

extern s32 jobIsValid(u32 job);
extern void FUN_00164ce0(u32 unused, u8 value);

/* Stops sub-jobs 1..3 of the owner that are still valid. */
u32 jobsOwnerStopSubJobs(JobsOwnerRef *ref)
{
    JobsOwner *owner = ref->obj;
    s32 i;

    if (owner != NULL) {
        for (i = 1; i < 4; i++) {
            if (jobIsValid(owner->jobs[i]) != 0) {
                FUN_00164ce0(owner->jobs[i], 0);
            }
        }
    }
    return 1;
}

} /* extern "C" */
