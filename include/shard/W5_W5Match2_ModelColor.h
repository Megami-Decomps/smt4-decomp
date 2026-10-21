#ifndef SHARD_W5_W5MATCH2_MODELCOLOR_H
#define SHARD_W5_W5MATCH2_MODELCOLOR_H
#include "common.h"
struct ModelColor { f32 r,g,b,a; };
struct ModelColorWork { u8 unk00[0xB8]; ModelColor color; u32 packed; };
struct ModelColorSlot { u8 unk00[8]; ModelColorWork *work; u8 unk0C[0x4C]; f32 x; u8 unk5C[12]; f32 y; u8 unk6C[12]; f32 z; u8 unk7C[12]; u32 flags; };
struct ModelColorBank { u8 unk00[0x264]; ModelColorSlot *slots[8]; };
#endif
