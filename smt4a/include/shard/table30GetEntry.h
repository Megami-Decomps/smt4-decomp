#ifndef SHARD_TABLE30GETENTRY_H
#define SHARD_TABLE30GETENTRY_H

#include "common.h"
#include "shard/Shard0050.h"

#ifdef __cplusplus
extern "C" {
#endif

void table30GetEntry(u8 **out, Table30 *table, u32 index);

#ifdef __cplusplus
}
#endif

#endif
