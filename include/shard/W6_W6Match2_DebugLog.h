#ifndef SHARD_W6_W6MATCH2_DEBUG_LOG_H
#define SHARD_W6_W6MATCH2_DEBUG_LOG_H

#include "common.h"

// The release linker removes this optional four-argument debug output hook.
extern "C" __weak void asdDebugLogFormatted(const char* file, s32 line, s32 category, const char* message);

#endif
