/* cec/CecProcess.cpp: the StreetPass (CEC) process behind g_cecProcess (cecProcessStart allocates
 * it cleared, cecProcessDestroy frees it). It owns the StreetPass message-box object and a worker
 * thread that reads the inbox in batches. Shin Megami Tensei IV: CecProcess, 0x460 bytes;
 * Apocalypse: CecProcessA, 0xD68 bytes. Each game declares g_cecProcess in cec/CecProcessGlobal.h. */
#ifndef CEC_CECPROCESS_H
#define CEC_CECPROCESS_H

#include "common.h"
#include "nn/os/Thread.h"
#include "nn/os/ThreadLaunch.h"
#include "cec/CecMessage.h"
#include <stddef.h>

class Obj420a1c;
class Obj557ec0;

/* The StreetPass process (Shin Megami Tensei IV, 0x460 bytes). */
struct CecProcess {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ Obj420a1c *messageBox;  /* the StreetPass message-box object */
    /* 0x008 */ u8 unk008[0x64];
    /* 0x06C */ s32 nextMessageIndex;    /* the next inbox message the worker reads */
    /* 0x070 */ s32 messageCount;        /* messages in the inbox */
    /* 0x074 */ u8 unk074[4];
    /* 0x078 */ u32 producedBatches;     /* inbox batches the worker queued (a ring of 12 slots) */
    /* 0x07C */ u32 consumedBatches;
    /* 0x080 */ CecProcessSlot slots[12];
    /* 0x410 */ u8 unk410[0x10];
    /* 0x420 */ u8 lock[8];              /* critical section over the batch counters */
    /* 0x428 */ s32 state;               /* -1 once the worker is shut down */
    /* 0x42C */ NnOsThread thread;       /* the inbox worker */
    /* 0x434 */ ThreadStackStorage stack;
    /* 0x44C */ void *buffer;            /* the worker's stack */
    /* 0x450 */ u8 unk450[0x10];
};

typedef char CecProcessOffsetCheck[offsetof(CecProcess, producedBatches) == 0x78 &&
    offsetof(CecProcess, nextMessageIndex) == 0x6C && offsetof(CecProcess, messageCount) == 0x70 &&
    offsetof(CecProcess, slots) == 0x80 && offsetof(CecProcess, lock) == 0x420 &&
    offsetof(CecProcess, thread) == 0x42C && offsetof(CecProcess, stack) == 0x434 &&
    offsetof(CecProcess, buffer) == 0x44C &&
    sizeof(CecProcess) == 0x460 ? 1 : -1];

/* One inbox batch the worker reads (Apocalypse). */
struct AsdCecInboxBatch {
    /* 0x00 */ u8 data[100];
};

/* The StreetPass process (Apocalypse, 0xD68 bytes). */
struct CecProcessA {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ Obj557ec0 *messageBox;  /* the StreetPass message-box object */
    /* 0x008 */ u8 unk008[0x7C];
    /* 0x084 */ s32 receivedCount;       /* messages read so far */
    /* 0x088 */ s32 requestedCount;      /* messages in the inbox */
    /* 0x08C */ u32 unk08C;
    /* 0x090 */ u32 producedBatches;
    /* 0x094 */ u32 consumedBatches;
    /* 0x098 */ AsdCecInboxBatch batches[32];
    /* 0xD18 */ u8 unkD18[0x10];
    /* 0xD28 */ u8 lock[8];              /* critical section over the batch counters */
    /* 0xD30 */ s32 state;               /* -1 once the worker is shut down */
    /* 0xD34 */ NnOsThread thread;       /* the inbox worker */
    union {
        /* 0xD3C */ ThreadStackStorage workerStack;
        /* 0xD3C */ u8 stack[0x18]; /* legacy address-only view used by teardown */
    };
    /* 0xD54 */ void *buffer;            /* the worker's stack */
    /* 0xD58 */ u8 unkD58[0x10];
};

typedef char CecProcessAOffsetCheck[offsetof(CecProcessA, receivedCount) == 0x84 &&
    offsetof(CecProcessA, batches) == 0x98 && offsetof(CecProcessA, lock) == 0xD28 &&
    offsetof(CecProcessA, thread) == 0xD34 && offsetof(CecProcessA, stack) == 0xD3C &&
    offsetof(CecProcessA, buffer) == 0xD54 && sizeof(CecProcessA) == 0xD68 ? 1 : -1];

/* The launcher's argument description and the process pointer copied onto the worker stack. */
template <typename Process>
struct CecThreadBinding {
    ThreadArgumentDescriptor descriptor;
    Process *argument;
};

#endif
