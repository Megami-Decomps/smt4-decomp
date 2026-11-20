/* NON_MATCHING: the two scratch vectors now share the function scope like retail (36-byte frame matches); retail still evaluates the handler call's vector argument (add r1, sp, #16) before the null test and then conditionally executes the call (ldrne/blxne), copies the 4th vector component back from the scratch memory, and keeps the globals in r8/r9; ours branches around the call and uses r6/r7. */
#include "common.h"
#include "shard/Resource.h"
#include "gfx/VectorScratch.h"
#include "effect/Particle.h"

/* One particle of an emitter set (a linked list through `next`). */

#define PARTICLE_HAS_COLOR 0x100
#define PARTICLE_HAS_OFFSET 0x80
#define PARTICLE_FIXED_HEIGHT 0x04
#define PARTICLE_TIME_SCALED 0x01

/* The set of particles one effect owns. */
struct EmitterSet {
    /* 0x00 */ Vector4 origin;
    /* 0x10 */ u8 unk10[0x30];
    /* 0x40 */ Vector4 offset;
    /* 0x50 */ u8 unk50[0x10];
    /* 0x60 */ f32 time;
    /* 0x64 */ u8 unk64[0x10];
    /* 0x74 */ f32 timeScale;
    /* 0x78 */ u8 unk78[0x14];
    /* 0x8C */ Particle *first;
};

/* Per-emitter-type callbacks (0x44 bytes each). */
/* Scratch vectors shared by the update functions (starting at 0x6471DC). */

extern "C" {

/* Multiplies each component of the vector by `factor`. */
static inline void scale(Vector4 &vector, f32 factor)
{
    vector.x = vector.x * factor;
    vector.y = vector.y * factor;
    vector.z = vector.z * factor;
    vector.w = vector.w * factor;
}

/* Adds `other` to the vector component-wise. */
static inline void add(Vector4 &vector, const Vector4 &other)
{
    vector.x = vector.x + other.x;
    vector.y = vector.y + other.y;
    vector.z = vector.z + other.z;
    vector.w = vector.w + other.w;
}

/* Advances every particle of the set by `deltaTime`: calls the emitter type's handler with the
 * particle's color, and (when it has an offset) its position. */
void effectParticleEmitterSetAdvance(EmitterSet *set, f32 deltaTime)
{
    f32 scaledTime = set->timeScale * deltaTime;
    Particle *particle;
    Vector4 color;
    Vector4 position;

    set->time = deltaTime;
    for (particle = set->first; particle != NULL; particle = particle->next) {
        if ((particle->flags & PARTICLE_HAS_COLOR) == 0) {
            f32 factor = particle->intensity;

            if ((particle->flags2 & PARTICLE_TIME_SCALED) != 0) {
                factor = factor * scaledTime;
            }
            if (g_handlerTable[particle->emitter->type].setIntensity != NULL) {
                g_handlerTable[particle->emitter->type].setIntensity(particle->emitter->data, factor);
            }
        } else {
            f32 factor;

            g_vectorScratch.first.vector = particle->color;
            factor = particle->intensity;
            if ((particle->flags2 & PARTICLE_TIME_SCALED) != 0) {
                factor = factor * scaledTime;
            }
            scale(g_vectorScratch.first.vector, factor);
            color = g_vectorScratch.first.vector;
            if (g_handlerTable[particle->emitter->type].setColor != NULL) {
                // The handler table takes its own (incomplete) Vec4: the value is a Vector4.
                g_handlerTable[particle->emitter->type].setColor(particle->emitter->data, reinterpret_cast<const Vec4 *>(&color));
            }
        }
        if ((particle->flags & PARTICLE_HAS_OFFSET) != 0) {
            g_vectorScratch.first.vector = set->offset;
            g_vectorScratch.second.vector = set->origin;
            add(g_vectorScratch.first.vector, g_vectorScratch.second.vector);
            if ((particle->flags & PARTICLE_FIXED_HEIGHT) != 0) {
                g_vectorScratch.first.vector.y = 5.0f;
            }
            g_vectorScratch.second.vector = particle->velocity;
            scale(g_vectorScratch.second.vector, scaledTime);
            add(g_vectorScratch.first.vector, g_vectorScratch.second.vector);
            position = g_vectorScratch.first.vector;
            if (g_handlerTable[particle->emitter->type].setPosition != NULL) {
                // The handler table takes its own (incomplete) Vec4: the value is a Vector4.
                g_handlerTable[particle->emitter->type].setPosition(particle->emitter->data, reinterpret_cast<const Vec4 *>(&position));
            }
        }
    }
}

} /* extern "C" */
