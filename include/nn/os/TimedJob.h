#ifndef NN_OS_TIMEDJOB_H
#define NN_OS_TIMEDJOB_H

#include "common.h"
#include <stddef.h>

/* SDK timed work item, including its accumulated and current-run timestamps. */
struct TimedJob {
    /* 0x000 */ u8 lock[0xc];
    /* 0x00c */ s32 state; // 1 stopped, 3 running, 5 stop requested, 6 stopping, 7 finished
    /* 0x010 */ u8 unk10[0x10];
    /* 0x020 */ u8 event[0x118];
    /* 0x138 */ s64 elapsed;
    /* 0x140 */ s64 elapsedTotal;
    /* 0x148 */ u8 unk148[8];
    /* 0x150 */ s64 startTime;
};
typedef char TimedJobLayout[sizeof(TimedJob) == 0x158 &&
    offsetof(TimedJob, state) == 0xc && offsetof(TimedJob, startTime) == 0x150 ? 1 : -1];

#endif
