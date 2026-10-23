#ifndef SHARD_FILEQUEUEREQUEST_H
#define SHARD_FILEQUEUEREQUEST_H

#include "common.h"

struct FileQueueRequest {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 flags;
    union {
        /* 0x08 */ u8 unk08[0x10];
        struct {
            /* 0x08 */ u8 state;
            /* 0x09 */ u8 unk09[0xB];
            /* 0x14 */ u32 result;
        } operation;
    };
    /* 0x18 */ u32 *completion;
    union {
        /* 0x1c */ u8 unk1c[0xc];
        struct {
            /* 0x1C */ u8 unk1C[8];
            /* 0x24 */ u32 transferredBytes;
        } output;
    };
    /* 0x28 */ u32 mode;
    /* 0x2c */ u32 bytes;
    /* 0x30 */ u8 path[132];
    /* 0xb4 */ void *context;
};

typedef char FileQueueRequestSizeCheck[sizeof(FileQueueRequest) == 0xb8 ? 1 : -1];
typedef char FileQueueRequestOutputOffsets[
    __INTADDR__(&((FileQueueRequest *)0)->operation.state) == 8 &&
    __INTADDR__(&((FileQueueRequest *)0)->operation.result) == 0x14 &&
    __INTADDR__(&((FileQueueRequest *)0)->output.transferredBytes) == 0x24 ? 1 : -1];

#endif
