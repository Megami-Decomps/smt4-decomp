#ifndef SHARD_LINKEDFINDITEMBYINDEX_H
#define SHARD_LINKEDFINDITEMBYINDEX_H

#include "common.h"
#include "shard/W5_W5Match2_LinkedItems.h"

#ifdef __cplusplus
extern "C" {
#endif

LinkedItem *linkedFindItemByIndex(const LinkedItems *owner,u32 index);

#ifdef __cplusplus
}
#endif

#endif
