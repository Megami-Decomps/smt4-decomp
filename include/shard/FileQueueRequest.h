#ifndef SHARD_FILEQUEUEREQUEST_H
#define SHARD_FILEQUEUEREQUEST_H

#include "common.h"

struct FileQueueRequest {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 flags;
    /* 0x08 */ u8 unk08[0x10];
    /* 0x18 */ u32 *completion;
    /* 0x1c */ u8 unk1c[0xc];
    /* 0x28 */ u32 mode;
    /* 0x2c */ u32 bytes;
    /* 0x30 */ u8 path[132];
    /* 0xb4 */ void *context;
};

typedef char FileQueueRequestSizeCheck[sizeof(FileQueueRequest) == 0xb8 ? 1 : -1];

#endif
