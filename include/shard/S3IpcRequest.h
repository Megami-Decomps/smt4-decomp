/* Parameter blocks of IPC requests built from structures the caller passes in. */
#ifndef SHARD_S3IPCREQUEST_H
#define SHARD_S3IPCREQUEST_H

#include "common.h"

/* Five words copied as a block into a request. */
typedef struct IpcBlock5 {
    u32 word[5];
} IpcBlock5;

/* Six words copied verbatim into a request: a block of five, then one more. */
typedef struct IpcParams6 {
    IpcBlock5 block;
    u32 last;
} IpcParams6;

#endif
