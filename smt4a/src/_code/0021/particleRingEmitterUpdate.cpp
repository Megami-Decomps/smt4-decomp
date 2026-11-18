#include "AsdSDK/Source/Gfx/Effect/ParticleEmitter.h"

extern "C" {
f32 FUN_002039d0(s32 mode, s32 maximum, u32 divisor);
f32 FUN_0028324c(s32 mode, s32 lower, s32 upper, u32 divisor);
f32 FUN_00283328(s32 mode, u32 numerator, u32 denominator);
void FUN_0034a16c(void *params, void *a, void *b, void *c, void *d);
void FUN_0035cc80(void *params, void *a, void *b, void *c, void *d, void *e, void *f, void *g);

/* Advances a particle emitter by one frame: spawns the particles due this frame into its ring of
 * nodes, or at the end of its duration restarts it (while repeats remain) or releases it. */
void particleRingEmitterUpdate(ParticleRingEmitter *emitter)
{
    const f32 emitterPlane = 0.0f;
    if (emitter->duration == emitter->frame) {
        emitter->repeats--;
        emitter->frame = 0;
        if (emitter->repeats <= 0) {
            particleEmitterRelease(emitter);
        } else {
            emitter->cycle = EmitterCycle();
            emitter->spawnA = 0;
            emitter->spawnB = 0;
            emitter->spawnC = 0;
            emitter->spawned = 0;
            FUN_0034a16c(&emitter->colorValue, &emitter->spawnA, &emitter->spawnC, &emitter->cycle.channels[2],
                         &emitter->cycle.channels[5]);
        }
        return;
    }
    if (emitter->head >= 0 && emitter->nodes[emitter->head] == NULL) {
        do {
            if (emitter->tail == emitter->head)
                break;
            ++emitter->head;
            emitter->head %= ParticleRingEmitter::RingCapacity;
        } while (emitter->nodes[emitter->head] == NULL);
    }
    s32 due = (s32)emitter->cycle.count - emitter->spawned;
    for (s32 n = 0; n < due; n++) {
        s32 index = emitter->tail;
        ++index;
        index %= ParticleRingEmitter::RingCapacity;
        if (emitter->head < 0)
            emitter->head = 0;
        else if (emitter->nodes[index] != NULL)
            nodeTreeReleaseItem(emitter->nodes[index]);
        u32 life = (u32)(emitter->lifeSeconds * 10.0f);
        ParticleNode *node = FUN_00237da0(emitter->context, emitter->position, &emitter->colorValue, 2,
                                          emitter->effectConfig, &emitter->nodes[index], (u8)index, emitter->flag, 1,
                                          emitter->contextC);
        emitter->nodes[index] = node;
        node->life = FUN_002039d0(2, emitter->lifeJitter, 100) + node->life;
        node->size = FUN_0028324c(0, life, 10, 10) * node->size;
        node->tint = (f32)emitter->tintValue;
        node->offsetA = FUN_002039d0(0, emitter->offsetBase, 100) + (f32)emitter->colorValue * 0.01f;
        node->origin = emitterPlane;
        node->offsetB = FUN_00283328(2, emitter->offsetRange, 100);
        emitter->spawned++;
        emitter->tail = index;
    }
    FUN_0035cc80(&emitter->colorValue, &emitter->spawnB, &emitter->spawnA, &emitter->spawnC, emitter,
                 &emitter->cycle.channels[2], &emitter->cycle.channels[5], &emitter->spawned);
    emitter->frame++;
}

} /* extern "C" */
