#ifndef SHARD_W6_W6MATCH3_MAP_SCENE_TRANSITION_H
#define SHARD_W6_W6MATCH3_MAP_SCENE_TRANSITION_H

#include "common.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "shard/S1Mover.h"

struct MapVector;

extern "C" {
f32 mathPositionHeadingDegrees(MapVector from, MapVector to);
void lmapSceneBeginPositionTransition(f32 x, f32 y, f32 z, f32 endX, f32 endY, f32 endZ);
void lmapSceneBeginPositionTransition(f32 x, f32 y, f32 z, f32 endX, f32 endY, f32 endZ);
}

#ifdef __cplusplus
extern "C" {
#endif

void FUN_002d55f0(u32 arg);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void FUN_002e00e0(u8 *flag);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

TexNode* FUN_002e151c(s32 tableIndex, s32 nodeIndex);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 cecWriteMessageBoxNameAndData(u32 id, u32 expectedTag, const u16* name, const void* data, u32 dataSize);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

s32 mapCountActiveEntries(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void memFill8(u32 *dst, u32 value);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_0032530c();

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void eplSlotApplyParameters(s32 index, s32 arg);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

f32 mathVec3Dot(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ);

#ifdef __cplusplus
}
#endif

#endif
