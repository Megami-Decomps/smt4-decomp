/* A pair of GPU command lists that the renderer alternates between. */
#ifndef SHARD_GXCMDLISTSET_H
#define SHARD_GXCMDLISTSET_H

#include "common.h"
#include <stddef.h>

/* How many command lists to create and how large. */
struct GxCmdListConfig {
    /* 0x00 */ u32 count;
    /* 0x04 */ u32 bufferSize;
    /* 0x08 */ u32 requestCount;
};

struct GxCmdListSet {
    /* 0x00 */ u32 lists[2];      /* nngx command list ids */
    /* 0x08 */ GxCmdListConfig config;
    /* 0x14 */ u32 current;
};

typedef char GxCmdListSetCurrentOffsetCheck[offsetof(GxCmdListSet, current) == 0x14 ? 1 : -1];

#endif
