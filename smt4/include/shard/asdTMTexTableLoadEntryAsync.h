#ifndef SHARD_ASDTMTEXTABLELOADENTRYASYNC_H
#define SHARD_ASDTMTEXTABLELOADENTRYASYNC_H

#include "common.h"
#include "shard/S1AsdTexTable.h"

#ifdef __cplusplus
extern "C" {
#endif

TexTableEntry *asdTMTexTableLoadEntryAsync(s32 table, s32 index);

#ifdef __cplusplus
}
#endif

#endif
