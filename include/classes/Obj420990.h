#ifndef OBJ420990_H
#define OBJ420990_H

#include "classes/Obj420794.h"

struct Obj420990ResourceState {
    /* 0x00 */ u8 unk00[0x38];
    /* 0x38 */ u32 mode;
    /* 0x3C */ u32 unk3c;
    /* 0x40 */ u32 unk40;
};

struct Obj420990Resource {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Obj420990ResourceState *state;
};
/* One vertex of the two quads: texture coordinates at +0x0C. */
struct Obj420990Vertex {
    /* 0x00 */ f32 position[3];
    /* 0x0C */ f32 u;
    /* 0x10 */ f32 v;
};

/* UV rectangles and offsets for the two quads. */
struct Obj420990Rects {
    /* 0x00 */ f32 rectA[4];    /* left, top, right, bottom */
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ u32 blendA;
    /* 0x1C */ u32 unk1c;
    /* 0x20 */ f32 offsetA[2];  /* u, v added to quad A */
    /* 0x28 */ f32 rectB[4];    /* left, top, right, bottom */
    /* 0x38 */ u8 unk38[8];
    /* 0x40 */ u32 blendB;
    /* 0x44 */ u32 unk44;
    /* 0x48 */ f32 offsetB[2];  /* u, v added to quad B */
    /* 0x50 */ u32 colorTarget[3]; /* handed to the child's setTarget */

    /* The texture source id of quad `index` (0 = A, 1 = B): the two entries are 0x28 bytes apart. */
    u32 textureSource(s32 index) { s32 offset = 0x1C + index * 0x28; return *(u32 *)((u8 *)this + offset); }
};

/* A 0x44-byte entry whose last word is a buffer handle. */
struct Obj420990Handle {
    /* 0x00 */ f32 matrix[16];
    /* 0x40 */ u32 handle;
};

/* The object whose vtable is at 0x420990 (named after it until its real name is known): a filter
 * object, like Obj42094c, owning eight vertices (two quads; the base's heap block) whose UVs it
 * updates. The base's child is the source its UV data is refreshed from. The vtable is stored by
 * FUN_0034c24c (constructor) and _ZN9Obj420990D0Ev (deleting destructor). */
class Obj420990 : public Obj420794 {
public:
    Obj420990(Obj420794Child *owned) : Obj420794(owned), handles(NULL), rects(NULL) {}
    virtual ~Obj420990();
    virtual void prepareGeometry(); /* +0x08: shift both quads' UVs by their offsets */
    virtual void draw();           /* +0x0C */
    virtual void refreshTextureCoordinates(); /* +0x10 */
    virtual u32 isReady();         /* +0x18 */

    /* Allocates the vertices and the two matrix/handle entries, loads each quad's texture according
     * to `flags` (8, 0x40 or 1) and resets both matrices. */
    void initialize(Obj420990Rects *config, u32 flags);

    /* The eight vertices (the base's heap block). */
    Obj420990Vertex *vertices() { return (Obj420990Vertex *)buffer; }

private:
    /* 0x18 */ Obj420990Handle *handles;   /* two entries */
    /* 0x1C */ Obj420990Rects *rects;
};

#endif
