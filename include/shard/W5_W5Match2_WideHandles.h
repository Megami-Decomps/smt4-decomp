#ifndef SHARD_W5_W5MATCH2_WIDEHANDLES_H
#define SHARD_W5_W5MATCH2_WIDEHANDLES_H
#include "common.h"
struct WideHandleRecord { u8 unk00[0x60]; u64 handle; u8 unk68[8]; };
struct WideHandleTable { u8 unk00[8]; WideHandleRecord *entries; u8 unk0C[8]; u32 count; };
#endif
