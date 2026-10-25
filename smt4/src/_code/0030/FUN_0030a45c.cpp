/* Script command: starts a slot transition on a bust-up cut. Arguments: job, slot. When flag 0x522 is set the request is
 * also recorded for the UI. Always returns 1. */
#include "common.h"
#include "shard/JobWork.h"

extern "C" {
/* The last slot transition request. */
struct SlotTransitionRequest {
    /* 0x0 */ s32 slot;
    /* 0x4 */ s32 pending;
    /* 0x8 */ s32 notified;
};

/* The part of a job's work area that holds its bust-up cut. */
struct BustupJobWork {
    /* 0x0 */ void *cut;
};

extern SlotTransitionRequest DAT_0043e068;
s32 scrGetArg(u32 index);
void FUN_002bf6fc(void *cut, s32 slot, s32 first, s32 second, s32 third);
s32 gameFlagIsSet(u32 flag);

s32 FUN_0030a45c(void)
{
    void *cut = ((BustupJobWork *)jobGetWork(scrGetArg(0)))->cut;
    s32 slot = scrGetArg(1);

    FUN_002bf6fc(cut, slot, 1, 1, -1);
    if (gameFlagIsSet(0x522) != 0) {
        DAT_0043e068.pending = 1;
        DAT_0043e068.slot = slot;
        DAT_0043e068.notified = 1;
    }
    return 1;
}
}
