#include "shard/Shard0047.h"
#include "shard/JobWork.h"

extern "C" {

typedef struct CycleWork {
    /* 0x0000 */ u32 flags;
    /* 0x0004 */ u8 unk0004[0x1790];
    /* 0x1794 */ u32 unk1794;
    /* 0x1798 */ u32 counter;
} CycleWork;


/* Advances the job's 40-step counter (+0x1798); past 0x14 it sets flag 0x200. */
s32 cycleWorkStep(u32 job)
{
    CycleWork *work = (CycleWork *)jobGetWork(job);
    u32 *counter = &work->counter;

    *counter = (*counter + 1) % 0x28;
    if (*counter > 0x14) {
        work->flags = work->flags | 0x200;
    }
    return 0;
}

} /* extern "C" */
