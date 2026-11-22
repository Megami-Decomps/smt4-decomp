#ifndef CLASSES_OBJ42083C_H
#define CLASSES_OBJ42083C_H

#include "classes/Obj420794.h"
#include "gfx/CameraMatrixCache.h"

/* One vertex of the filter's quad: its position, then its texture coordinates. */
struct Obj42083cVertex {
    /* 0x00 */ f32 position[3];
    /* 0x0C */ f32 u;
    /* 0x10 */ f32 v;
};

/* The motion the filter applies every frame (only the fields used here). */
struct Obj42083cMotion {
    /* 0x00 */ s32 lastVertex;  /* the vertex count less one */
    /* 0x04 */ u8 unk04[0x2C];
    /* 0x30 */ f32 scrollU;     /* added to every vertex's texture coordinates */
    /* 0x34 */ f32 scrollV;
    /* 0x38 */ f32 spin;        /* degrees per frame */
    /* 0x3C */ f32 grow;        /* scale per frame */
};

extern "C" void asdOperatorDelete(void *block);

/* A screen filter (vtable at 0x42083c, named after it until its real name is known) with one more
 * block, freed with the engine's delete. */
class Obj42083c : public Obj420794 {
public:
    Obj42083c(Obj420794Child *owned)
        : Obj420794(owned), angle(0.0f), scale(1.0f), motion(NULL), block(NULL)
    {
    }
    virtual ~Obj42083c();
    virtual void prepareGeometry(); /* +0x08 */
    virtual void draw();            /* +0x0c */
    virtual void refreshTextureCoordinates(); /* +0x10: stripped implementation */

protected:
    /* 0x18 */ Matrix34Data rotation;   /* rows 0-2 of the 4x4 draw matrix */
    /* 0x48 */ f32 lastRow[4];
    /* 0x58 */ f32 angle;               /* degrees */
    /* 0x5C */ f32 scale;
    /* 0x60 */ Obj42083cMotion *motion;
    /* 0x64 */ void *block;
};

#endif
