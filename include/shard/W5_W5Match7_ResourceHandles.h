#ifndef SHARD_W5_W5MATCH7_RESOURCEHANDLES_H
#define SHARD_W5_W5MATCH7_RESOURCEHANDLES_H

#include "common.h"

struct ResourceHandles {
    /* 0x00 */ union {
        void *primary;
        u8 operationActive;
    };
    /* 0x04 */ void *secondary;
};

extern "C" {
extern ResourceHandles g_engineResourceHandles;
}

#endif
