#ifndef SHARD_W5_W5MATCH2_KEYEDCOPY_H
#define SHARD_W5_W5MATCH2_KEYEDCOPY_H
#include "common.h"
struct KeyedValueEntry { u32 value; u8 unk04[0x10]; };
struct KeyedCopyRecord { u8 unk00[0x2C]; u8 data[0x90]; u8 unkBC[0x80]; KeyedValueEntry *entries; u8 unk140[8]; };
#endif
