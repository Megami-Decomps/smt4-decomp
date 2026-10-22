#ifndef ASDSDK_SOURCE_NET_CEC_ASDCECPROCESS_H
#define ASDSDK_SOURCE_NET_CEC_ASDCECPROCESS_H

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
    /* 0xd34 */ u32 syncHandle;
    /* 0xd38 */ u8 stopRequested;
    /* 0xd39 */ u8 unkD39[3];
    /* 0xd3c */ u32 unkD3C;
    /* 0xd40 */ ThreadHandleState thread;
    /* 0xd48 */ u8 unkD48[0xc];
    /* 0xd54 */ void *buffer;
};

typedef char AsdCecProcessWorkLayoutCheck[sizeof(AsdCecProcessWork) == 0xd58 &&
    offsetof(AsdCecProcessWork, thread) == 0xd40 &&
    offsetof(AsdCecProcessWork, buffer) == 0xd54 ? 1 : -1];

#endif
