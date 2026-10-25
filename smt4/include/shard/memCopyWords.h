#ifndef SHARD_MEMCOPYWORDS_H
#define SHARD_MEMCOPYWORDS_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

void memCopyWords(const u32 *source, u32 *destination, u32 byteCount);

#ifdef __cplusplus
}
#endif

#endif
