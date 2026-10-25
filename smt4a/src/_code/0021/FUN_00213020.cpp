/* NON_MATCHING: restored four-argument random-range call; ring index registers, cleanup owner register, and floating constant hoisting differ. */
#include "common.h"

/* A spawned particle node (only the fields the emitter sets). */
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

#define EMITTER_RING 50

/* A particle emitter. */
struct ParticleEmitter {
    /* 0x000 */ f32 count;              /* particles to have spawned by the end of the frame */
    /* 0x004 */ u32 state[8];
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
    /* 0x21C */ u32 contextB;
    /* 0x220 */ u32 contextC;
    /* 0x224 */ u32 context;
    /* 0x228 */ u32 *owner;
    /* 0x22C */ u8 flag;
    /* 0x22D */ u8 unk22D[3];
    /* 0x230 */ s32 head;
    /* 0x234 */ s32 tail;
    /* 0x238 */ ParticleNode *nodes[EMITTER_RING];
    /* 0x300 */ s16 repeats;
};

extern "C" {
void nodeTreeReleaseItemClearOwner(ParticleNode *node);
void nodeTreeReleaseItem(void *item);
ParticleNode *FUN_00237da0(u32 context, void *position, void *params, s32 two, u32 contextB, ParticleNode **slot,
                           u32 index, u32 flag, s32 one, u32 contextC);
f32 FUN_002039d0(s32 mode, s32 maximum, u32 divisor);
f32 FUN_0028324c(s32 mode, s32 lower, s32 upper, u32 divisor);
f32 FUN_00283328(s32 mode, u32 numerator, u32 denominator);
void FUN_0034a16c(void *params, void *a, void *b, void *c, void *d);
void FUN_0035cc80(void *params, void *a, void *b, void *c, void *d, void *e, void *f, void *g);

/* Advances a particle emitter by one frame: spawns the particles due this frame into its ring of
 * nodes, or at the end of its duration restarts it (while repeats remain) or releases it. */
void FUN_00213020(ParticleEmitter *emitter)
{
    if (emitter->duration == emitter->frame) {
        emitter->repeats--;
        emitter->frame = 0;
        if (emitter->repeats <= 0) {
            if (emitter != NULL) {
                for (s32 i = 0; i < EMITTER_RING; i++)
                    nodeTreeReleaseItemClearOwner(emitter->nodes[i]);
                emitter->frame = 0;
                emitter->spawnA = 0;
                emitter->spawnB = 0;
                emitter->spawnC = 0;
                if (emitter->owner != NULL)
                    *emitter->owner = 0;
                nodeTreeReleaseItem(emitter);
            }
        } else {
            for (s32 i = 0; i < 9; i++)
                ((u32 *)emitter)[i] = 0;
            emitter->spawnA = 0;
            emitter->spawnB = 0;
            emitter->spawnC = 0;
            emitter->spawned = 0;
            FUN_0034a16c(&emitter->colorValue, &emitter->spawnA, &emitter->spawnC, &emitter->state[2],
                         &emitter->state[5]);
        }
        return;
    }
    if (emitter->head >= 0 && emitter->nodes[emitter->head] == NULL) {
        do {
            if (emitter->tail == emitter->head)
                break;
            emitter->head = (emitter->head + 1) % EMITTER_RING;
        } while (emitter->nodes[emitter->head] == NULL);
    }
    s32 due = (s32)emitter->count - emitter->spawned;
    for (s32 n = 0; n < due; n++) {
        s32 index = (emitter->tail + 1) % EMITTER_RING;
        if (emitter->head < 0)
            emitter->head = 0;
        else if (emitter->nodes[index] != NULL)
            nodeTreeReleaseItem(emitter->nodes[index]);
        u32 life = (u32)(emitter->lifeSeconds * 10.0f);
        ParticleNode *node = FUN_00237da0(emitter->context, emitter->position, &emitter->colorValue, 2,
                                          emitter->contextB, &emitter->nodes[index], (u8)index, emitter->flag, 1,
                                          emitter->contextC);
        emitter->nodes[index] = node;
        node->life = FUN_002039d0(2, emitter->lifeJitter, 100) + node->life;
        node->size = FUN_0028324c(0, life, 10, 10) * node->size;
        node->tint = (f32)emitter->tintValue;
        node->offsetA = FUN_002039d0(0, emitter->offsetBase, 100) + (f32)emitter->colorValue * 0.01f;
        node->origin = 0.0f;
        node->offsetB = FUN_00283328(2, emitter->offsetRange, 100);
        emitter->spawned++;
        emitter->tail = index;
    }
    FUN_0035cc80(&emitter->colorValue, &emitter->spawnB, &emitter->spawnA, &emitter->spawnC, emitter,
                 &emitter->state[2], &emitter->state[5], &emitter->spawned);
    emitter->frame++;
}

} /* extern "C" */
