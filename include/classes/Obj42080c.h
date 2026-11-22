#ifndef CLASSES_OBJ42080C_H
#define CLASSES_OBJ42080C_H

#include "classes/Obj420794.h"

/* One vertex of the quad: its position, then its texture coordinates at +0x0C. */
struct Obj42080cVertex {
    /* 0x00 */ f32 position[3];
    /* 0x0C */ f32 x;
    /* 0x10 */ f32 y;
};

/* A rectangle: left, top, right, bottom. */
struct Obj42080cRect {
    /* 0x00 */ f32 left;
    /* 0x04 */ f32 top;
    /* 0x08 */ f32 right;
    /* 0x0C */ f32 bottom;
};

/* What a four-polygon filter is built from (filterCreateQuad): its rectangle, blend mode, texture id and
 * three colour components. */
struct Filter4PolySource : Obj42080cRect {
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ u32 blendMode;
    /* 0x1C */ u32 textureId;
    /* 0x20 */ u8 unk20[0x14];
    /* 0x34 */ u32 colorA;
    /* 0x38 */ u32 colorB;
    /* 0x3C */ u32 colorC;
};

/* A screen filter (vtable at 0x42080c, named after it until its real name is known): a quad whose
 * four vertices (the base's heap block) it places over a rectangle. */
class Obj42080c : public Obj420794 {
public:
    Obj42080c(Obj420794Child *owned) : Obj420794(owned), uvStart(0.0f), uvEnd(1.0f), rect(NULL) {}
    virtual ~Obj42080c();
    virtual void prepareGeometry();
    virtual void draw();
    virtual void refreshTextureCoordinates();   /* refreshes the child and places the quad over rect */

    /* The four vertices (the base's heap block). */
    Obj42080cVertex *vertices() { return (Obj42080cVertex *)buffer; }

    /* The 4x4 matrix the filter draws with. */
    void *matrixSlot() { return unk18; }
    void setRect(Obj42080cRect *newRect) { rect = newRect; }
    Obj42080cRect *getRect() { return rect; }

protected:
    /* 0x18 */ u8 unk18[0x40];
    /* 0x58 */ f32 uvStart;
    /* 0x5C */ f32 uvEnd;
    /* 0x60 */ Obj42080cRect *rect;
};

#endif
