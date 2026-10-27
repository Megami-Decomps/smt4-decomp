#ifndef GFX_TRANSFORMSOURCE_H
#define GFX_TRANSFORMSOURCE_H

#include "common.h"
#include "nw/math/MTX34.h"

/* The fallback transform handed out when a node has no source: the identity matrix, a unit scale in every
 * axis and the default flag word. */
struct TransformDefault {
    /* 0x00 */ nw::math::MTX34 matrix;
    /* 0x30 */ f32 scaleX;
    /* 0x34 */ f32 scaleY;
    /* 0x38 */ f32 scaleZ;
    /* 0x3C */ u32 flags;
};

/* The object a node asks for its transform. Only the two accessors the nodes call are named. */
class TransformSource {
public:
    virtual void reserved0() = 0;
    virtual void reserved1() = 0;
    virtual void reserved2() = 0;
    virtual void reserved3() = 0;
    virtual void reserved4() = 0;
    virtual void reserved5() = 0;
    virtual const TransformDefault *getTransform() = 0;
    virtual const TransformDefault *getInverseTransform() = 0;
};

/* A node that borrows its transform from `source` (the field at 0x0C) when it has one. */
struct TransformSourceNode {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ TransformSource *source;
};

#endif
