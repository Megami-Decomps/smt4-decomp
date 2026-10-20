#include "common.h"

extern "C" {

void FUN_00164ce0(u32 job, s32 flag);
void FUN_00167f24(s32 mode);
s32 jobIsValid(u32 job);

typedef struct JobSet {
    /* 0x000 */ u8 unk000[0x634];
    /* 0x634 */ u32 jobs[4];
} JobSet;

/* Stops jobs 1..3 of the set `*set` (index 0 is skipped), then runs FUN_00167f24(2); always returns 1. */
u32 FUN_002e5728(JobSet **set)
{
    s32 valid;
    s32 i;
    JobSet *jobs;

    jobs = *set;
    if (jobs != NULL) {
        i = 1;
        do {
            valid = jobIsValid(jobs->jobs[i]);
            if (valid != 0) {
                FUN_00164ce0(jobs->jobs[i], 1);
            }
            i = i + 1;
        } while (i < 4);
    }
    FUN_00167f24(2);
    return 1;
}

} /* extern "C" */
