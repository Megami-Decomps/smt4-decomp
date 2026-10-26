#ifndef SHARD_ASDTMTEXLOADMAINHEAP_H
#define SHARD_ASDTMTEXLOADMAINHEAP_H

#include "common.h"

struct TextureNode;

#ifdef __cplusplus
extern "C" {
#endif

/* Loads the texture of node `index` of texture table `table` into the main heap. */
struct TextureNode *asdTMTexLoadMainHeap(u32 table, u32 index);

#ifdef __cplusplus
}
#endif

#endif
