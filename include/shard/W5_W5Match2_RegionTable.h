#ifndef SHARD_W5_W5MATCH2_REGIONTABLE_H
#define SHARD_W5_W5MATCH2_REGIONTABLE_H
#include "common.h"
struct RegionRecord { f32 minX; u32 unk04; f32 minY; f32 maxX; u32 unk10; f32 maxY; s16 result; s16 kind; };
struct RegionTable { RegionRecord regions[256]; s32 count; };
#endif
