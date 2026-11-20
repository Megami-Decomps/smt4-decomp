#ifndef ASDSDK_EFFECT_PARTICLECREATE_H
#define ASDSDK_EFFECT_PARTICLECREATE_H
#include "common.h"
#include "sys/Task.h"
struct ParticleNode;
struct QuadEffectConfig;
struct QuadEffectTask;
extern "C" {
/* Creates a quad effect task with no destroy callback (smt4 quadEffectCreate, smt4a quadEffectCreate). */
ParticleNode *quadEffectCreate(u32 owner, const void *base, const void *extra, u32 hasExtra,
    QuadEffectConfig *config, ParticleNode **ownerSlot, u32 index, u32 flags, u32 time, u32 value268);
ParticleNode *quadEffectCreate(u32 owner, const void *base, const void *extra, u32 hasExtra,
    QuadEffectConfig *config, ParticleNode **ownerSlot, u32 index, u32 flags, u32 time, u32 value268);
/* Creates a quad effect task (smt4 quadEffectTaskCreate, smt4a quadEffectTaskCreate). */
QuadEffectTask *quadEffectTaskCreate(u32 owner, const void *base, const void *extra, u32 hasExtra,
    QuadEffectConfig *config, ParticleNode **ownerSlot, TaskFunc destroy, u32 index, u32 flags, u32 time, u32 value268);
QuadEffectTask *quadEffectTaskCreate(u32 owner, const void *base, const void *extra, u32 hasExtra,
    QuadEffectConfig *config, ParticleNode **ownerSlot, TaskFunc destroy, u32 index, u32 flags, u32 time, u32 value268);
}
#endif
