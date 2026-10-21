#ifndef SHARD_W6_W6MATCH3_FORMATBUFFER_H
#define SHARD_W6_W6MATCH3_FORMATBUFFER_H

#include "common.h"
#include <stdarg.h>

// A zero capacity permits allocation and growth, initially to 64 bytes.
extern "C" char* FUN_002e3338(char* buffer, s32 capacity, const char* format, va_list arguments);

#endif
