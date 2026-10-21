#ifndef SHARD_W6_W6MATCH2_SHUTDOWN_JOBS_H
#define SHARD_W6_W6MATCH2_SHUTDOWN_JOBS_H

#include "common.h"

struct ShutdownJobs {
    u32 mainJob;       // 0x00
    u32 childJobs[4];  // 0x04
    void (*finish)();  // 0x14
};

#endif
