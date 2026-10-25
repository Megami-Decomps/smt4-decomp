#ifndef SHARD_RECORDCONTAINSPAIREDID_H
#define SHARD_RECORDCONTAINSPAIREDID_H

#include "common.h"
#include "shard/W5_W5Match2_PairedIds.h"

#ifdef __cplusplus
extern "C" {
#endif

s32 recordContainsPairedId(const PairedIdList *list,u32 id);

#ifdef __cplusplus
}
#endif

#endif
