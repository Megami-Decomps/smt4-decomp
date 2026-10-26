#ifndef ASDSDK_SOURCE_NET_CEC_ASDCECPROCESS_H
#define ASDSDK_SOURCE_NET_CEC_ASDCECPROCESS_H

#include "nn/os/Thread.h"
#include "shard/W6_W6Match3_ThreadHandleState.h"
#include <stddef.h>

struct AsdCecInboxBatch {
    /* 0x00 */ u8 data[100];
};
struct AsdCecInboxState {
    /* 0x000 */ u8 unk000[0x84];
    /* 0x084 */ s32 receivedCount;
    /* 0x088 */ s32 requestedCount;
    /* 0x08c */ u32 unk08c;
    /* 0x090 */ u32 producedBatches;
    /* 0x094 */ u32 consumedBatches;
    /* 0x098 */ AsdCecInboxBatch batches[32];
    /* 0xd18 */ u8 unkD18[0x10];
    /* 0xd28 */ u8 lock[8];
};

struct AsdCecProcessWork {
    /* 0x000 */ AsdCecInboxState inbox;
    /* 0xd30 */ s32 state;
    /* 0xd34 */ NnOsThread thread;
    /* 0xd3c */ u8 unkD3C[0x18];
    /* 0xd54 */ void *buffer;
};

typedef char AsdCecProcessWorkLayoutCheck[sizeof(AsdCecProcessWork) == 0xd58 &&
    offsetof(AsdCecProcessWork, thread) == 0xd34 &&
    offsetof(AsdCecProcessWork, unkD3C) == 0xd3c &&
    offsetof(AsdCecProcessWork, buffer) == 0xd54 ? 1 : -1];

#endif
