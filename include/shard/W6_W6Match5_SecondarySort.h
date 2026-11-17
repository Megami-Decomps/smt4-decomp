#ifndef SHARD_W6_W6MATCH5_SECONDARYSORT_H
#define SHARD_W6_W6MATCH5_SECONDARYSORT_H

#include "common.h"
#include <stddef.h>


#ifdef __cplusplus
extern "C" {
#endif

u32 asdGxGetCommandCursor(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void memCopyWords(const u32 *source, u32 *destination, u32 byteCount);

#ifdef __cplusplus
}
#endif

#endif
