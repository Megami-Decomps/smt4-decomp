#ifndef OBJ420990_H
#define OBJ420990_H

#include "classes/Obj420794.h"

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

/* A 0x44-byte entry whose last word is a buffer handle. */
struct Obj420990Handle {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u32 handle;
};

/* The object whose vtable is at 0x420990 (named after it until its real name is known): a filter
 * object, like Obj42094c, owning eight vertices (two quads; the base's heap block) whose UVs it
 * updates. The base's child is the source its UV data is refreshed from. The vtable is stored by
 * FUN_0034c24c (constructor) and _ZN9Obj420990D0Ev (deleting destructor). */
class Obj420990 : public Obj420794 {
public:
    virtual ~Obj420990();
    virtual void addUvOffsets();   /* +0x08: shift both quads' UVs by the offsets in rects */
    virtual void vfunc0c();        /* +0x0C */
    virtual void setUvRects();     /* +0x10: set both quads' UVs from the rects in rects */

    /* The eight vertices (the base's heap block). */
    Obj420990Vertex *vertices() { return (Obj420990Vertex *)buffer; }

private:
    /* 0x18 */ Obj420990Handle *handles;   /* two entries */
    /* 0x1C */ Obj420990Rects *rects;
};

#endif
