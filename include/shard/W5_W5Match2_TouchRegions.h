#ifndef SHARD_W5_W5MATCH2_TOUCHREGIONS_H
#define SHARD_W5_W5MATCH2_TOUCHREGIONS_H
#include "common.h"
struct TouchRegions { u8 unk00[0x54]; s16 first; s16 second; u16 unk58; u16 count; };
#ifdef __cplusplus
extern "C" {
#endif

void touchRegisterFirstRegion(TouchRegions *regions,s32 x,s32 y,s32 width,s32 height);

#ifdef __cplusplus
}
#endif

#endif
