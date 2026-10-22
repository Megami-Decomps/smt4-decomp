#ifndef SHARD_CIRCULARTRANSFERQUEUE_H
#define SHARD_CIRCULARTRANSFERQUEUE_H

#include "common.h"
#include <stddef.h>

struct CircularByteStorage {
    u32 unk00;
    u8 *bytes;
    u32 capacity;
};
struct TransferPayload {
    u8 unk00[0xC];
    u32 size;
};
struct TransferDescriptor {
    u32 unk00;
    TransferPayload *payload;
    u32 unk08;
    u32 unk0C;
};
struct TransferDescriptorRing {
    u32 unk00;
    TransferDescriptor *items;
    u32 capacity;
    u32 pending;
    u32 readIndex;
};
struct CircularTransferQueue {
    u8 unk00[0xC];
    u32 capacity;
    u32 queuedBytes;
    u32 readPosition;
    u32 unk18;
    u8 output[0x10];
    TransferDescriptorRing descriptors;
};
typedef char CircularTransferQueueLayoutCheck[sizeof(TransferDescriptor) == 0x10 &&
    offsetof(CircularTransferQueue, output) == 0x1C &&
    offsetof(CircularTransferQueue, descriptors) == 0x2C &&
    sizeof(CircularTransferQueue) == 0x40 ? 1 : -1];

#endif
