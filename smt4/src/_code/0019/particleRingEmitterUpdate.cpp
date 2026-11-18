#include "AsdSDK/Source/Gfx/Effect/ParticleEmitter.h"
#include "camp/ButtonHelp/ButtonHelp.h"

extern "C" {
f32 FUN_00291620(s32 mode, s32 maximum, u32 divisor);
f32 FUN_00291234(s32 mode, s32 lower, s32 upper, u32 divisor);
f32 FUN_0029118c(s32 mode, u32 numerator, u32 denominator);
void FUN_00291340(void *params, void *a, void *b, void *c, void *d);
void FUN_00291060(void *params, void *a, void *b, void *c, void *d, void *e, void *f, void *g);

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
            FUN_00291340(&emitter->colorValue, &emitter->spawnA, &emitter->spawnC, &emitter->cycle.channels[2],
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
        ParticleNode *node = reinterpret_cast<ParticleNode *>(FUN_00291310(emitter->context, reinterpret_cast<u32>(emitter->position), reinterpret_cast<u32>(&emitter->colorValue), 2, reinterpret_cast<const void *>(emitter->contextB), reinterpret_cast<u32>(&emitter->nodes[index]), (u8)index, emitter->flag, 1, emitter->contextC));
        emitter->nodes[index] = node;
        node->life = FUN_00291620(2, emitter->lifeJitter, 100) + node->life;
        node->size = FUN_00291234(0, life, 10, 10) * node->size;
        node->tint = (f32)emitter->tintValue;
        node->offsetA = FUN_00291620(0, emitter->offsetBase, 100) + (f32)emitter->colorValue * 0.01f;
        node->origin = emitterPlane;
        node->offsetB = FUN_0029118c(2, emitter->offsetRange, 100);
        emitter->spawned++;
        emitter->tail = index;
    }
    FUN_00291060(&emitter->colorValue, &emitter->spawnB, &emitter->spawnA, &emitter->spawnC, emitter,
                 &emitter->cycle.channels[2], &emitter->cycle.channels[5], &emitter->spawned);
    emitter->frame++;
}

} /* extern "C" */
