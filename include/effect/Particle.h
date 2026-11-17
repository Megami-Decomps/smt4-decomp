#ifndef SMT4_EFFECT_PARTICLE_H
#define SMT4_EFFECT_PARTICLE_H

#include "common.h"
#include "shard/Resource.h"
#include "gfx/VectorScratch.h"

struct Particle {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ Vector4 color;
    /* 0x30 */ u8 unk30[0x10];
    /* 0x40 */ Vector4 velocity;
    /* 0x50 */ u8 unk50[0x10];
    /* 0x60 */ f32 intensity;
    /* 0x64 */ u8 unk64[4];
    /* 0x68 */ u32 flags;
    /* 0x6C */ u8 unk6C[0x18];
    /* 0x84 */ u32 flags2;
    /* 0x88 */ u8 unk88[8];
    /* 0x90 */ Resource *emitter;
    /* 0x94 */ u8 unk94[0x18];
    /* 0xAC */ Particle *next;
};

#endif
