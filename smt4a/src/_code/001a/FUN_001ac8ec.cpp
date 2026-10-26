/* NON_MATCHING: the two scratch vectors now share the function scope like retail (36-byte frame matches); retail still evaluates the handler call's vector argument (add r1, sp, #16) before the null test and then conditionally executes the call (ldrne/blxne), copies the 4th vector component back from the scratch memory, and keeps the globals in r8/r9; ours branches around the call and uses r6/r7. */
#include "common.h"

struct Vec4 {
    f32 x;
    f32 y;
    f32 z;
    f32 w;
};

/* A particle emitter's engine-side object: its type indexes the handler table. */
struct EmitterObject {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 type;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ u32 handle;
};

/* One particle of an emitter set (a linked list through `next`). */
struct Particle {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ Vec4 color;
    /* 0x30 */ u8 unk30[0x10];
    /* 0x40 */ Vec4 velocity;
    /* 0x50 */ u8 unk50[0x10];
    /* 0x60 */ f32 intensity;
    /* 0x64 */ u8 unk64[4];
    /* 0x68 */ u32 flags;
    /* 0x6C */ u8 unk6C[0x18];
    /* 0x84 */ u32 flags2;
    /* 0x88 */ u8 unk88[8];
    /* 0x90 */ EmitterObject *emitter;
    /* 0x94 */ u8 unk94[0x18];
    /* 0xAC */ Particle *next;
};

#define PARTICLE_HAS_COLOR 0x100
#define PARTICLE_HAS_OFFSET 0x80
#define PARTICLE_FIXED_HEIGHT 0x04
#define PARTICLE_TIME_SCALED 0x01

/* The set of particles one effect owns. */
struct EmitterSet {
    /* 0x00 */ Vec4 origin;
    /* 0x10 */ u8 unk10[0x30];
    /* 0x40 */ Vec4 offset;
    /* 0x50 */ u8 unk50[0x10];
    /* 0x60 */ f32 time;
    /* 0x64 */ u8 unk64[0x10];
    /* 0x74 */ f32 timeScale;
    /* 0x78 */ u8 unk78[0x14];
    /* 0x8C */ Particle *first;
};

/* Per-emitter-type callbacks (0x44 bytes each). */
struct EmitterHandler {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ void (*placed)(u32 handle, const Vec4 *position);
    /* 0x24 */ u8 unk24[4];
    /* 0x28 */ void (*plain)(u32 handle, f32 intensity);
    /* 0x2C */ void (*colored)(u32 handle, const Vec4 *color);
    /* 0x30 */ u8 unk30[0x14];
};

/* Scratch vectors shared by the update functions (starting at 0x6471DC). */
struct EmitterScratch {
    /* 0x000 */ u8 unk000[0x100];
    /* 0x100 */ Vec4 first;
    /* 0x110 */ Vec4 second;
};

extern "C" {

extern EmitterHandler g_handlerTable[];
extern EmitterScratch DAT_006471dc;

/* Multiplies each component of the vector by `factor`. */
static inline void scale(Vec4 &vector, f32 factor)
{
    vector.x = vector.x * factor;
    vector.y = vector.y * factor;
    vector.z = vector.z * factor;
    vector.w = vector.w * factor;
}

/* Adds `other` to the vector component-wise. */
static inline void add(Vec4 &vector, const Vec4 &other)
{
    vector.x = vector.x + other.x;
    vector.y = vector.y + other.y;
    vector.z = vector.z + other.z;
    vector.w = vector.w + other.w;
}

/* Advances every particle of the set by `deltaTime`: calls the emitter type's handler with the
 * particle's color, and (when it has an offset) its position. */
void FUN_001ac8ec(EmitterSet *set, f32 deltaTime)
{
    f32 scaledTime = set->timeScale * deltaTime;
    Particle *particle;
    Vec4 color;
    Vec4 position;

    set->time = deltaTime;
    for (particle = set->first; particle != NULL; particle = particle->next) {
        if ((particle->flags & PARTICLE_HAS_COLOR) == 0) {
            f32 factor = particle->intensity;

            if ((particle->flags2 & PARTICLE_TIME_SCALED) != 0) {
                factor = factor * scaledTime;
            }
            if (g_handlerTable[particle->emitter->type].plain != NULL) {
                g_handlerTable[particle->emitter->type].plain(particle->emitter->handle, factor);
            }
        } else {
            f32 factor;

            DAT_006471dc.first = particle->color;
            factor = particle->intensity;
            if ((particle->flags2 & PARTICLE_TIME_SCALED) != 0) {
                factor = factor * scaledTime;
            }
            scale(DAT_006471dc.first, factor);
            color = DAT_006471dc.first;
            if (g_handlerTable[particle->emitter->type].colored != NULL) {
                g_handlerTable[particle->emitter->type].colored(particle->emitter->handle, &color);
            }
        }
        if ((particle->flags & PARTICLE_HAS_OFFSET) != 0) {
            DAT_006471dc.first = set->offset;
            DAT_006471dc.second = set->origin;
            add(DAT_006471dc.first, DAT_006471dc.second);
            if ((particle->flags & PARTICLE_FIXED_HEIGHT) != 0) {
                DAT_006471dc.first.y = 5.0f;
            }
            DAT_006471dc.second = particle->velocity;
            scale(DAT_006471dc.second, scaledTime);
            add(DAT_006471dc.first, DAT_006471dc.second);
            position = DAT_006471dc.first;
            if (g_handlerTable[particle->emitter->type].placed != NULL) {
                g_handlerTable[particle->emitter->type].placed(particle->emitter->handle, &position);
            }
        }
    }
}

} /* extern "C" */
