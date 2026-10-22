/* A job's state machine (Apocalypse): the current, requested and previous states plus a pending
 * load that, when it finishes, requests the state queued behind it. */
#ifndef SHARD_X14_JOBSTATEMACHINE_H
#define SHARD_X14_JOBSTATEMACHINE_H

#include "common.h"
#include <stddef.h>

typedef struct JobStateMachine {
    /* 0x00 */ s32 current;
    /* 0x04 */ s32 next;
    /* 0x08 */ s32 previous;
    /* 0x0C */ u8 loading;
    /* 0x0D */ u8 unk0D;
    /* 0x0E */ u8 loadDone;
    /* 0x0F */ u8 unk0F;
    /* 0x10 */ s32 queued;       /* state requested once the load finishes */
    /* 0x14 */ u8 unk14[0x14];
    /* 0x28 */ u32 loadArg;
    /* 0x2C */ u8 load[4];       /* load handle passed to the finisher */
} JobStateMachine;

typedef struct JobStateMachineWork {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ JobStateMachine *machine;
} JobStateMachineWork;

typedef char JobStateMachineOffsets[offsetof(JobStateMachine, loadDone) == 0xE &&
    offsetof(JobStateMachine, queued) == 0x10 && offsetof(JobStateMachine, load) == 0x2C &&
    offsetof(JobStateMachineWork, machine) == 0xC ? 1 : -1];

#endif
