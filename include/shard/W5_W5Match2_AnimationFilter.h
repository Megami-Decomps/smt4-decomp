#ifndef SHARD_W5_W5MATCH2_ANIMATIONFILTER_H
#define SHARD_W5_W5MATCH2_ANIMATIONFILTER_H
#include "common.h"
struct AnimationFilterEntry { u8 unk00[0x50]; s32 weightBits; u8 unk54[4]; };
struct AnimationFilterRange { u16 unk00[2]; u16 first; u16 count; u16 extraCount; u16 unk0A; };
struct AnimationFilterTable { u8 unk00[0x2C]; AnimationFilterEntry *entries; AnimationFilterRange *ranges; };
#endif
