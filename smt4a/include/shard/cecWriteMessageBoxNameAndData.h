#ifndef SHARD_CECWRITEMESSAGEBOXNAMEANDDATA_H
#define SHARD_CECWRITEMESSAGEBOXNAMEANDDATA_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

u32 cecWriteMessageBoxNameAndData(u32 id, u32 expectedTag, const u16* name, const void* data, u32 dataSize);

#ifdef __cplusplus
}
#endif

#endif
