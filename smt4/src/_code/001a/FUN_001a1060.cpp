#include "common.h"

extern "C" {

int FUN_002b7184(u32 job, int arg);
int FUN_002b71d0(u32 job, int arg);
int FUN_002bff38(int arg);
extern int FUN_002b722c(u32 job);
extern int jobIsValid(u32 job);

typedef struct JobGroup {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 jobs[10];
    /* 0x2C */ s32 jobCount;
    /* 0x30 */ u8 unk30[4];
    /* 0x34 */ u32 subJobs[10];
} JobGroup;

typedef struct Owner {
    /* 0x0 */ JobGroup *group;
} Owner;

/* Stops the group's jobs (unless already in state 4) and sub jobs. */
u32 FUN_001a1060(Owner *owner)
{
    JobGroup *group = owner->group;
    s32 i;

    if (group != NULL) {
        i = 0;
        if (i < group->jobCount) {
            do {
                if (jobIsValid(group->jobs[i]) != 0 && FUN_002b722c(group->jobs[i]) != 4) {
                    FUN_002b71d0(group->jobs[i], 1);
                }
                i++;
            } while (i < group->jobCount);
        }
        i = 0;
        do {
            if (jobIsValid(group->subJobs[i]) != 0) {
                FUN_002b7184(group->subJobs[i], 1);
            }
            i++;
        } while (i < 10);
    }
    FUN_002bff38(2);
    return 1;
}

} /* extern "C" */
