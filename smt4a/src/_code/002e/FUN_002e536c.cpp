#include "common.h"

extern "C" {

void FUN_001656e0(u32 job, s32 flag);
void FUN_0016572c(u32 job, s32 flag);
s32 jobIsValid(u32 job);
s32 FUN_00165058(u32 job);

typedef struct JobSet {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 jobs[16];
    /* 0x44 */ s32 jobCount;
    /* 0x48 */ u8 unk48[4];
    /* 0x4C */ u32 extraJobs[16];
} JobSet;

/* Stops the jobs of the set `*set` (the first ones unless they are in state 4, then all 16 extra ones); always returns 1. */
u32 FUN_002e536c(JobSet **set)
{
    s32 valid;
    s32 i;
    JobSet *jobs;

    jobs = *set;
    if (jobs != NULL) {
        i = 0;
        if (i < jobs->jobCount) {
            do {
                valid = jobIsValid(jobs->jobs[i]);
                if ((valid != 0) && (valid = FUN_00165058(jobs->jobs[i]), valid != 4)) {
                    FUN_001656e0(jobs->jobs[i], 0);
                }
                i = i + 1;
            } while (i < jobs->jobCount);
        }
        i = 0;
        do {
            valid = jobIsValid(jobs->extraJobs[i]);
            if (valid != 0) {
                FUN_0016572c(jobs->extraJobs[i], 0);
            }
            i = i + 1;
        } while (i < 0x10);
    }
    return 1;
}

} /* extern "C" */
