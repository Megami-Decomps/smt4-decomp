/* NON_MATCHING: fills a vertex buffer with the quads of a particle group range (corners projected through the matrix with
 * nn::math's VEC3TransformCoordArray, tinted by an RGBA colour and the particle alpha). The code and frame size are retail's;
 * the frame layout differs (retail: matrix at sp+40, first/last as a pair at sp+104, the corners at sp+112, the output
 * cursor kept in r4 until the loop), the vertex loop's pointers take other registers, and the colour channels take
 * other VFP registers (retail red in s22). */
#include "nw/math/MTX44Transform.h"

#define QUAD_MODE_FROM_FIRST 4
#define QUAD_MODE_RANGE 5
#define QUAD_MODE_AFTER 6
#define QUAD_COLOR_SCALE (1.0f / 255.0f)

/* One particle (0x58 bytes): four corners, per-corner texture coordinates and an alpha. */
struct QuadParticle {
    /* 0x00 */ nw::math::VEC3 corners[4];
    /* 0x30 */ f32 u[4];
    /* 0x40 */ f32 v[4];
    /* 0x50 */ f32 alpha;
    /* 0x54 */ u8 unk54[4];
};

/* One output vertex (0x24 bytes). */
struct QuadVertex {
    f32 u;
    f32 v;
    f32 r;
    f32 g;
    f32 b;
    f32 a;
    f32 x;
    f32 y;
    f32 z;
};

struct QuadRangeEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 first;
    /* 0x06 */ u16 count;
    /* 0x08 */ u16 after;
    /* 0x0A */ u8 unk0A[2];
};

struct QuadGroup {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ s32 enabled;
    /* 0x14 */ u8 unk14[0x18];
    /* 0x2C */ QuadParticle *particles;
    /* 0x30 */ QuadRangeEntry *ranges;
};

extern "C" {

void FUN_004ff4e0(QuadGroup *group, QuadVertex *out, s32 rangeIndex, s32 mode, u32 color)
{
    QuadVertex *vertex = out;

    if (group->enabled == 0)
        return;

    f32 red = (f32)(color >> 24) * QUAD_COLOR_SCALE;
    f32 green = (f32)((color & 0xFF0000) >> 16) * QUAD_COLOR_SCALE;
    f32 blue = (f32)((color & 0xFF00) >> 8) * QUAD_COLOR_SCALE;
    f32 alphaScale = (f32)(color & 0xFF) * QUAD_COLOR_SCALE;

    s32 first;
    s32 last;
    switch (mode) {
    case QUAD_MODE_FROM_FIRST:
    case QUAD_MODE_AFTER:
        first = group->ranges[rangeIndex].count + group->ranges[rangeIndex].first;
        last = (first - 1) + group->ranges[rangeIndex].after;
        break;
    case QUAD_MODE_RANGE:
        first = group->ranges[rangeIndex].first;
        last = group->ranges[rangeIndex].count + (first - 1);
        break;
    default:
        return;
    }

    nw::math::MTX44 matrix;
    mtx44Copy(&matrix, &nw::math::MTX44::Identity());
    for (; first <= last; first++) {
        QuadParticle *particle = &group->particles[first];
        if (!(mode == QUAD_MODE_RANGE
              || ((particle->alpha != 1.0f || mode == QUAD_MODE_FROM_FIRST)
                  && (particle->alpha >= 1.0f || mode == QUAD_MODE_AFTER))))
            continue;

        nw::math::VEC3 projected[4];
        nw::math::VEC3TransformCoordArray(projected, &matrix, particle->corners, 4);
        for (s32 corner = 0; corner < 4; corner++) {
            vertex->x = projected[corner].x;
            vertex->y = projected[corner].y;
            vertex->z = projected[corner].z;
            vertex->r = red;
            vertex->g = green;
            vertex->b = blue;
            vertex->a = alphaScale * particle->alpha;
            vertex->u = particle->u[corner];
            vertex->v = -particle->v[corner];
            vertex++;
        }
    }
}

} /* extern "C" */
