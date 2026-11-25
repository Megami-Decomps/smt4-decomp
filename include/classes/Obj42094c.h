#ifndef CLASSES_OBJ42094C_H
#define CLASSES_OBJ42094C_H

#include "classes/Obj420794.h"
#include "nw/math/MTX33.h"
#include "nw/math/MTX44.h"
#include <stddef.h>

/* The four-polygon screen filter (Filter4Poly; vtable at 0x42094c, named after it until its real
 * name is settled): the filter base plus a second heap block. */
struct Filter4PolyConfig;

class Obj42094c : public Obj420794 {
public:
    Obj42094c(Obj420794Child *owned) : config(NULL) { child = owned; }
    virtual ~Obj42094c();
    virtual void prepareGeometry(); /* +0x08 */
    virtual void draw(); /* +0x0C */
    virtual void refreshTextureCoordinates(); /* +0x10 */

protected:
    /* 0x18 */ void *dataB;     /* heap block */
    /* 0x1C */ Filter4PolyConfig *config;

public:
    void setConfig(Filter4PolyConfig *source) { config = source; }
    Filter4PolyConfig *getConfig() { return config; }
    void setMotions(void *block) { dataB = block; }
    void *getMotions() { return dataB; }
};

struct Filter4PolyVertex {
    /* 0x00 */ f32 position[3];
    /* 0x0C */ f32 u;
    /* 0x10 */ f32 v;
};
struct Filter4PolyMotion {
    /* 0x00 */ nw::math::MTX44 matrix;
    /* 0x40 */ nw::math::VEC3 velocity;
    /* 0x4C */ s32 frame;
};
struct Filter4PolyConfig {
    /* 0x00 */ f32 left;
    /* 0x04 */ f32 top;
    /* 0x08 */ f32 right;
    /* 0x0C */ f32 bottom;
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ u32 blendMode;
    /* 0x1C */ u32 unk1c;
    /* 0x20 */ s32 period;
    /* 0x24 */ f32 minimumSpeed;
    /* 0x28 */ f32 maximumSpeed;
    /* 0x2C */ s32 count;
    /* 0x30 */ s32 frameStep;
    /* 0x34 */ u32 colorA;
    /* 0x38 */ u32 colorB;
    /* 0x3C */ u32 colorC;
};
struct Filter4PolyView {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ Filter4PolyVertex *vertices;
    /* 0x08 */ u32 texture;
    /* 0x0C */ u8 unk0c[8];
    /* 0x14 */ Obj420794Child *child;
    /* 0x18 */ Filter4PolyMotion *motions;
    /* 0x1C */ Filter4PolyConfig *config;
};

/* The filter's refresh and periodic geometry update both set an unscaled XY direction first. */
static __inline void setFilterPlanarVelocity(nw::math::VEC3 *out, f32 phase,
                                             f32 (*cosine)(f32), f32 (*sine)(f32))
{
    const f32 planarZ = 0.0f;
    f32 x = cosine(phase);
    f32 y = sine(phase);
    out->x = x;
    out->y = y;
    out->z = planarZ;
}

typedef char Filter4PolyVertexSizeCheck[sizeof(Filter4PolyVertex) == 0x14 ? 1 : -1];
typedef char Filter4PolyMotionSizeCheck[sizeof(Filter4PolyMotion) == 0x50 &&
    offsetof(Filter4PolyMotion, velocity) == 0x40 && offsetof(Filter4PolyMotion, frame) == 0x4C ? 1 : -1];

#endif
