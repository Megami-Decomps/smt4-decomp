#ifndef W6_W6MATCH3_FORWARD_EFFECT_H
#define W6_W6MATCH3_FORWARD_EFFECT_H

#include "common.h"
#include "gamedata/GroupedFileTables.h"
#include "shard/W4_Match1b_Node.h"

extern "C" void effectSpawnAheadOfScene(f32 headingOffset, f32 distance);

#ifdef __cplusplus
extern "C" {
#endif

void FUN_0025921c(u32 a, u32 b);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_0025bed8(GroupedFileTables *owner, s32 kind, u32 tableIndex);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void *asdListBoxCreateDefault(u32 first,u32 second,u32 third,u32 fourth);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 cecProcessForward(s32 arg);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void forwardRecoveredCallback(void *context);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void nodeSetScale(NodeOwner *owner, NodeVec3 scale);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u32 randomGetLowerTenBits(u32 first,u32 second);

#ifdef __cplusplus
}
#endif

#endif
