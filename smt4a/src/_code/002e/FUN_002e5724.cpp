#include "common.h"

extern "C" {

void FUN_00164ce0(u32 job, s32 flag);
void messageMainSetMode(s32 mode);
s32 jobIsValid(u32 job);

typedef struct JobSet {
    /* 0x000 */ u8 unk000[0x634];
    /* 0x634 */ u32 jobs[4];
} JobSet;
extern JobSet *g_bustupCutAnim;

/* Stops sub-actor jobs 1..3, then enters message mode 2. */
u32 FUN_002e5724(void)
{
    s32 valid;
    s32 i;
    JobSet *jobs;

    jobs = g_bustupCutAnim;
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
    messageMainSetMode(2);
    return 1;
}

} /* extern "C" */
