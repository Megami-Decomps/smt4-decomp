#ifndef SHARD_W6_W6MATCH7_QUADVECTORS_H
#define SHARD_W6_W6MATCH7_QUADVECTORS_H
#include "common.h"
#include <stddef.h>

struct QuadVector3 {
    f32 x, y, z;
};

/* A colour or position with a W component. The inline default constructor sets all four components to one:
   commonBgDraw inlines it, array users call its out-of-line copy (_ZN10QuadVectorC1Ev) through
   __aeabi_vec_ctor_nocookie_nodtor. The empty inline destructor makes the type non-trivial, so by-value
   QuadVector arguments travel as pointers to caller-made copies, as retail's quadSetOrderedVectors callers show. */
struct QuadVector {
    /* 0x00 */ QuadVector3 xyz;
    /* 0x0c */ f32 w;

    QuadVector()
    {
        xyz.x = 1.0f;
        xyz.y = 1.0f;
        xyz.z = 1.0f;
        w = 1.0f;
    }
    ~QuadVector() {}
};
typedef char QuadVectorSizeCheck[sizeof(QuadVector) == 0x10 ? 1 : -1];

struct QuadVectorState {
    /* 0x00 */ u8 unk00[0x2c];
    /* 0x2c */ QuadVector corners[4];
    /* 0x6c */ u8 mode;
    /* 0x6d */ u8 unk6d[0x10];
    /* 0x7d */ u8 dirty;
    /* 0x7e */ u8 unk7e[6];
    /* 0x84 */ f32 defaultW;
};
typedef char QuadVectorStateCheck[offsetof(QuadVectorState, defaultW) == 0x84 ? 1 : -1];

/* Stores the four corner vectors in the order the mode's table gives, replacing their W components with
   the default unless preserveW is set. A C++ function: armcc 4.1 faults on an extern "C" function taking
   a non-trivial class by value. */
void quadSetOrderedVectors(QuadVector first, QuadVector second, QuadVector third, QuadVector fourth,
    s32 mode, s32 preserveW);
#endif
