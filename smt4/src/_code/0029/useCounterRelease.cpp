#include "common.h"

struct UseCounterWork {
    u32 job; // 0x00
};
struct UseCounterState {
    s8 references; // 0x00
    u8 unk01[3];
    UseCounterWork *work; // 0x04
};

extern "C" {
extern UseCounterState g_useCounter;
void jobStop(u32, s32);
void asdMemFree(void *);

// Tear down the shared use-counter task when its last reference is released.
void useCounterRelease(void)
{
    --g_useCounter.references;
    if (g_useCounter.references <= 0) {
        UseCounterWork *work = g_useCounter.work;
        jobStop(work->job, 0);
        asdMemFree(work);
        g_useCounter.work = NULL;
        g_useCounter.references = 0;
    }
}
}
