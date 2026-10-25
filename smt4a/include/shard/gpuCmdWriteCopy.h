#ifndef SHARD_GPUCMDWRITECOPY_H
#define SHARD_GPUCMDWRITECOPY_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

u32 *gpuCmdWriteCopy(u32 *cursor, u32 **patchSlot, const void *source, u32 size);

#ifdef __cplusplus
}
#endif

#endif
