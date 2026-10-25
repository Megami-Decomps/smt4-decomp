#ifndef SHARD_SYSTEMKEYBOARDREADUTF8_H
#define SHARD_SYSTEMKEYBOARDREADUTF8_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

u32 systemKeyboardReadUtf8(u32 unused, char *output, const u16 *hint, u32 capacity, s32 password, s32 filter, u32 requestOption);

#ifdef __cplusplus
}
#endif

#endif
