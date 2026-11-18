/* Shared work layout for the effect emitter's 50-node ring in IV and Apocalypse. */
#ifndef ASDSDK_EFFECT_PARTICLEEMITTER_H
#define ASDSDK_EFFECT_PARTICLEEMITTER_H

#include "common.h"
#include "AsdSDK/Source/Gfx/Effect/ParticleCreate.h"
#include <stddef.h>

struct ParticleNode {
    /* 0x000 */ u8 unk000[0x120];
    /* 0x120 */ f32 life;
    /* 0x124 */ u8 unk124[0xD0];
    /* 0x1F4 */ f32 size;
    /* 0x1F8 */ u8 unk1F8[0x144];
    /* 0x33C */ f32 origin;
    /* 0x340 */ f32 offsetA;
    /* 0x344 */ f32 offsetB;
    /* 0x348 */ u8 unk348[4];
    /* 0x34C */ f32 tint;
};

/* Interpolation outputs reset together when a new cycle starts. */
struct EmitterCycle {
    /* 0x00 */ f32 count;
    /* 0x04 */ u32 channels[8];
};

struct ParticleRingEmitter {
    enum { RingCapacity = 50 };

    /* 0x000 */ EmitterCycle cycle;
    /* 0x024 */ s32 frame;
    /* 0x028 */ u32 spawnA;
    /* 0x02C */ u32 spawnB;
    /* 0x030 */ u32 spawnC;
    /* 0x034 */ s32 spawned;
    /* 0x038 */ u8 position[0x134];
    /* 0x16C */ s32 colorValue;
    /* 0x170 */ s32 offsetBase;
    /* 0x174 */ s32 offsetRange;
    /* 0x178 */ u8 unk178[4];
    /* 0x17C */ f32 lifeSeconds;
    /* 0x180 */ s32 lifeJitter;
    /* 0x184 */ s32 duration;
    /* 0x188 */ s32 tintValue;
    /* 0x18C */ u8 unk18C[0x90];
    /* 0x21C */ union { u32 contextB; QuadEffectConfig *effectConfig; };
    /* 0x220 */ u32 contextC;
    /* 0x224 */ u32 context;
    /* 0x228 */ u32 *owner;
    /* 0x22C */ u8 flag;
    /* 0x22D */ u8 unk22D[3];
    /* 0x230 */ s32 head;
    /* 0x234 */ s32 tail;
    /* 0x238 */ ParticleNode *nodes[RingCapacity];
    /* 0x300 */ s16 repeats;
};

typedef char ParticleRingEmitterOffsets[
    sizeof(EmitterCycle) == 0x24 && offsetof(ParticleRingEmitter, position) == 0x38 &&
    offsetof(ParticleRingEmitter, colorValue) == 0x16C && offsetof(ParticleRingEmitter, owner) == 0x228 &&
    offsetof(ParticleRingEmitter, nodes) == 0x238 && offsetof(ParticleRingEmitter, repeats) == 0x300 ? 1 : -1];

extern "C" {
void nodeTreeReleaseItemClearOwner(ParticleNode *node);
void nodeTreeReleaseItem(void *item);
}

/* Clears the node ring and counters, detaches the emitter from its owner, and frees it. */
static __inline void particleEmitterRelease(ParticleRingEmitter *emitter)
{
    s32 i = 0;
    if (emitter != NULL) {
        for (; i < ParticleRingEmitter::RingCapacity; i++)
            nodeTreeReleaseItemClearOwner(emitter->nodes[i]);
        emitter->frame = 0;
        emitter->spawnA = 0;
        emitter->spawnB = 0;
        emitter->spawnC = 0;
        if (emitter->owner != NULL)
            *emitter->owner = 0;
        nodeTreeReleaseItem(emitter);
    }
}

#endif
