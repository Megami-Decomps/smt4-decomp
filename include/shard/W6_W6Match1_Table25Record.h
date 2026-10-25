#ifndef SHARD_W6_W6MATCH1_TABLE25RECORD_H
#define SHARD_W6_W6MATCH1_TABLE25RECORD_H

#include "common.h"

struct Table25Record {
    s8 id;
    u8 unk01[0x1f];
};

#ifdef __cplusplus
extern "C" {
#endif

Table25Record* FUN_002cdecc(s32 id);

#ifdef __cplusplus
}
#endif

#endif
