#ifndef SHARD_W6_W6MATCH3_FILTERTEXTURE_H
#define SHARD_W6_W6MATCH3_FILTERTEXTURE_H

#include "common.h"

struct Filter4Poly;

extern "C" void btlFilterLoadTexture(Filter4Poly* filter, u32 flags, u32 textureIndex);

#ifdef __cplusplus
extern "C" {
#endif

void FUN_0040a378(s32 amount);

#ifdef __cplusplus
}
#endif

#endif
