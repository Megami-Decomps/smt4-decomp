#ifndef SHARD_W5_W5MATCH2_RECORDCALLBACKS_H
#define SHARD_W5_W5MATCH2_RECORDCALLBACKS_H
#include "common.h"
struct CounterWork { u8 unk00[0x74D]; s8 value; };
struct CounterGlobals { u32 unk00; CounterWork *work; };
#endif
