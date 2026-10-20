/* AsdSDK/Source/Sys/Kernel/AsdSequence.cpp: a small state machine driven by a process.
 *
 * A sequence is a table of states. Each state has an `enter` callback (called with an optional
 * argument block), an `exit` callback and an `update` callback. State 0 is the idle state:
 * its `update` runs every frame whatever the current state, and when the sequence has nothing
 * else to do it goes back to state 0. Requesting a transition stores the next state and a copy
 * of its argument, and calls the current state's `exit`; the switch happens on a later update. */
#ifndef ASDSDK_SOURCE_SYS_KERNEL_ASDSEQUENCE_H
#define ASDSDK_SOURCE_SYS_KERNEL_ASDSEQUENCE_H

#include "AsdSDK/Source/Sys/Kernel/AsdProcess.h"

typedef void (*AsdSeqEnterFunc)(void *arg, u32 argSize);
typedef void (*AsdSeqExitFunc)(void);
typedef s32 (*AsdSeqUpdateFunc)(void); /* nonzero: the state keeps the frame to itself */

typedef struct AsdSeqState {
    /* 0x00 */ AsdSeqEnterFunc enter;   /* NULL: the state does not exist */
    /* 0x04 */ AsdSeqExitFunc exit;
    /* 0x08 */ AsdSeqUpdateFunc update;
} AsdSeqState;

typedef struct AsdSequence {
    /* 0x00 */ AsdSeqState *states;
    /* 0x04 */ u32 stateCount;
    /* 0x08 */ s32 current;      /* -1: none */
    /* 0x0c */ s32 next;         /* -1: no transition pending */
    /* 0x10 */ void *nextArg;    /* heap copy of the pending state's argument */
    /* 0x14 */ u32 nextArgSize;
} AsdSequence;

#endif
