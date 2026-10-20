#ifndef OBJ420990_H
#define OBJ420990_H

#include "common.h"

/* The object at +0x14 of Obj420990: the source its UV data is refreshed from. Only the two
 * methods Obj420990 calls are known (slots 0 and 1 are the destructor's). */
class Obj420990Source {
public:
    virtual ~Obj420990Source();
    virtual void refreshOffsets();   /* +0x08 */
    virtual void refreshRects();     /* +0x0c */
};

/* One vertex of the two quads: texture coordinates at +0x0C. */
struct Obj420990Vertex {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ f32 u;
    /* 0x10 */ f32 v;
};

/* UV rectangles and offsets for the two quads. */
struct Obj420990Rects {
    /* 0x00 */ f32 rectA[4];    /* left, top, right, bottom */
    /* 0x10 */ u8 unk10[0x10];
    /* 0x20 */ f32 offsetA[2];  /* u, v added to quad A */
    /* 0x28 */ f32 rectB[4];    /* left, top, right, bottom */
    /* 0x38 */ u8 unk38[0x10];
    /* 0x48 */ f32 offsetB[2];  /* u, v added to quad B */
};

/* The object whose vtable is at 0x420990 (named after it until its real name is known): a
 * filter object, like filter4Poly, owning eight vertices (two quads) whose UVs it updates. The
 * vtable is stored by FUN_0034c24c and FUN_0034c6b0 (its destructor). */
class Obj420990 {
public:
    virtual ~Obj420990();
    virtual void addUvOffsets();   /* +0x08: shift both quads' UVs by the offsets in `rects` */
    virtual void vfunc0c();        /* +0x0C */
    virtual void setUvRects();     /* +0x10: set both quads' UVs from the rects in `rects` */

private:
    /* 0x00: vtable pointer */
    /* 0x04 */ Obj420990Vertex *vertices;   /* eight vertices, 0x14 bytes each */
    /* 0x08 */ u8 unk08[0xC];
    /* 0x14 */ Obj420990Source *source;
    /* 0x18 */ u8 unk18[4];
    /* 0x1C */ Obj420990Rects *rects;
};

#endif
