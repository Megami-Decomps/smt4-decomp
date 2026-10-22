/* NON_MATCHING: rectangle and radial particle initialization are recovered; one LDRD and the VFP constant/register allocation differ. */
#include "classes/Obj420794.h"

struct FilterRectVertex {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0C */ u32 x;
    /* 0x10 */ u32 y;
};

struct FilterParticle {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ f32 velocity[3];
    /* 0x4C */ s32 frame;
};

struct FilterParticleParameters {
    /* 0x00 */ u32 left;
    /* 0x04 */ u32 top;
    /* 0x08 */ u32 right;
    /* 0x0C */ u32 bottom;
    /* 0x10 */ u8 unk10[0x14];
    /* 0x24 */ f32 minimumSpeed;
    /* 0x28 */ f32 maximumSpeed;
    /* 0x2C */ s32 count;
    /* 0x30 */ s32 frameStep;
};

struct Filter4PolyView {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ FilterRectVertex *vertices;
    /* 0x08 */ u8 unk08[0xc];
    /* 0x14 */ Obj420794Child *child;
    /* 0x18 */ FilterParticle *particles;
    /* 0x1C */ FilterParticleParameters *parameters;
};

extern "C" {
s32 FUN_00184964(s32 minimum, s32 maximum);
u32 randRange(u32 limit);
f32 FUN_001b63b0(f32 phase);
f32 FUN_001a1ee0(f32 phase);
}

// Initialize the filter rectangle and give each particle a staggered radial velocity.
extern "C" void _ZN9Obj42094c25refreshTextureCoordinatesEv(Filter4PolyView *self)
{
    self->child->refreshRects();
    self->vertices[0].x = self->parameters->left;
    self->vertices[0].y = self->parameters->top;
    self->vertices[1].x = self->parameters->left;
    self->vertices[1].y = self->parameters->bottom;
    self->vertices[2].x = self->parameters->right;
    self->vertices[2].y = self->parameters->top;
    self->vertices[3].x = self->parameters->right;
    self->vertices[3].y = self->parameters->bottom;
    for (s32 index = 0; index < self->parameters->count; ++index) {
        self->particles[index].frame = self->parameters->frameStep * index;
        f32 fraction = FUN_00184964(-32767, 32768) * (1.0f / 32768.0f);
        f32 speed = self->parameters->maximumSpeed - self->parameters->minimumSpeed;
        speed *= fraction;
        speed += self->parameters->minimumSpeed;
        f32 phase = (f32)randRange(65535) * (1.0f / 65536.0f) * 256.0f;
        f32 *velocity = self->particles[index].velocity;
        f32 x = FUN_001b63b0(phase);
        f32 y = FUN_001a1ee0(phase);
        velocity[0] = x;
        velocity[1] = y;
        velocity[2] = 0;
        velocity = self->particles[index].velocity;
        velocity[0] *= speed;
        velocity[1] *= speed;
        velocity[2] *= speed;
    }
}
