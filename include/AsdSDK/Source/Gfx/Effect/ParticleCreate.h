#ifndef ASDSDK_EFFECT_PARTICLECREATE_H
#define ASDSDK_EFFECT_PARTICLECREATE_H
#include "common.h"
#include "sys/Task.h"
struct ParticleNode;
struct QuadEffectConfig;
struct QuadEffectTask;
extern "C" {
ParticleNode *FUN_00237da0(u32 owner, const void *base, const void *extra, u32 hasExtra,
    QuadEffectConfig *config, ParticleNode **ownerSlot, u32 index, u32 flags, u32 time, u32 value268);
QuadEffectTask *FUN_00347688(u32 owner, const void *base, const void *extra, u32 hasExtra,
    QuadEffectConfig *config, ParticleNode **ownerSlot, TaskFunc destroy, u32 index, u32 flags, u32 time, u32 value268);
}
#endif
