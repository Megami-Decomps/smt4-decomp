#ifndef SHARD_W5_W5MATCH2_PLAINDATA_H
#define SHARD_W5_W5MATCH2_PLAINDATA_H
#include "common.h"
struct Matrix44 { f32 values[16]; };
struct EmptyRange { f32 x,y,width,height; s32 selection; };
struct ReadyResource { u8 unk00[0x45]; u8 enabled; u8 unk46[2]; void *resource; };
struct TableCount { u8 unk00[4]; u16 count; };
struct TableResourceEntry { u8 unk00[0x18]; void *resource; u8 unk1C[4]; };
struct ResourceTableView { u8 unk00[0x10]; TableCount *header; TableResourceEntry *entries; };
#endif
