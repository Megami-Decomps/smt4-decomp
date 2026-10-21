#ifndef SHARD_W5_W5MATCH2_TIMEDSTATE_H
#define SHARD_W5_W5MATCH2_TIMEDSTATE_H
#include "common.h"
struct TimeWords { u32 low,high; };
struct TimedState { u8 active; u8 unk01[3]; TimeWords time; u32 first; u32 second; };
#endif
