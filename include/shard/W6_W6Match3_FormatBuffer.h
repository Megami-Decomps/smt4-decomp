#ifndef SHARD_W6_W6MATCH3_FORMATBUFFER_H
#define SHARD_W6_W6MATCH3_FORMATBUFFER_H

#include "common.h"
#include <stdarg.h>
#include "gamedata/X14_Table21.h"

// A zero capacity permits allocation and growth, initially to 64 bytes.
extern "C" char* asdStringFormatGrow(char* buffer, s32 capacity, const char* format, va_list arguments);

#ifdef __cplusplus
extern "C" {
#endif

Table21Entry *FUN_002e26c4(u32 id);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u8 FUN_002e2b38(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void campCecDispatchMode(u32 value);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void campCecSetObjectValue(u8 value);

#ifdef __cplusplus
}
#endif

#endif
