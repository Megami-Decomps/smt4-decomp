#ifndef CLASSES_OBJ42080C_H
#define CLASSES_OBJ42080C_H

#include "classes/Obj420794.h"

/* One vertex of the quad: position at +0x0C. */
struct Obj42080cVertex {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 x;
    /* 0x10 */ u32 y;
};

/* A rectangle: left, top, right, bottom. */
struct Obj42080cRect {
    /* 0x00 */ u32 left;
    /* 0x04 */ u32 top;
    /* 0x08 */ u32 right;
    /* 0x0C */ u32 bottom;
};

/* A screen filter (vtable at 0x42080c, named after it until its real name is known): a quad whose
 * four vertices (the base's heap block) it places over a rectangle. */
class Obj42080c : public Obj420794 {
public:
    virtual ~Obj42080c();
    virtual void vfunc08();
    virtual void vfunc0c();
    virtual void vfunc10();   /* refreshes the child and places the quad over rect */

    /* The four vertices (the base's heap block). */
    Obj42080cVertex *vertices() { return (Obj42080cVertex *)buffer; }

protected:
    /* 0x18 */ u8 unk18[0x40];
    /* 0x58 */ f32 uvStart;
    /* 0x5C */ f32 uvEnd;
    /* 0x60 */ Obj42080cRect *rect;
};

#endif
