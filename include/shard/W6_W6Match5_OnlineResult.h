#ifndef SHARD_W6_W6MATCH5_ONLINERESULT_H
#define SHARD_W6_W6MATCH5_ONLINERESULT_H

#include "common.h"

struct OnlineCallbackResult {
    s32 status; // 0x00
    u32 value;  // 0x04
    u32 extra;  // 0x08
};

/* OnlineCore's Result additionally records the diagnostic source location. */
struct OnlineDiagnosticResult {
    /* 0x00 */ u32 code;
    /* 0x04 */ const char *file;
    /* 0x08 */ u32 line;
};

#endif
