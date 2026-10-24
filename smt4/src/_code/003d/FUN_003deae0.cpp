/* NON_MATCHING: fills a vertex buffer with the quads of a particle group range (corners projected through the matrix, tinted by an RGBA colour and the particle alpha); written from the decompilation, the inlined projection and the unrolled vertex copy are not compared with retail */
#include "nw/math/MTX44.h"

#define QUAD_MODE_FROM_FIRST 4
#define QUAD_MODE_RANGE 5
#define QUAD_MODE_AFTER 6
#define QUAD_COLOR_SCALE (1.0f / 255.0f)

/* One particle (0x58 bytes): four corners, per-corner texture coordinates and an alpha. */
struct QuadParticle {
    /* 0x00 */ f32 corners[4][3];
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
void mtx44Copy(nw::math::MTX44 *destination, const nw::math::MTX44 *source);

/* Projects (x, y, z) through the matrix with a perspective divide. */
static __inline void quadProject(const nw::math::MTX44 &m, const f32 *p, f32 *out)
{
    f32 w = 1.0f / (m.m[3][0] * p[0] + m.m[3][1] * p[1] + m.m[3][2] * p[2] + m.m[3][3]);
    out[0] = (m.m[0][0] * p[0] + m.m[0][1] * p[1] + m.m[0][2] * p[2] + m.m[0][3]) * w;
    out[1] = (m.m[1][0] * p[0] + m.m[1][1] * p[1] + m.m[1][2] * p[2] + m.m[1][3]) * w;
    out[2] = (m.m[2][0] * p[0] + m.m[2][1] * p[1] + m.m[2][2] * p[2] + m.m[2][3]) * w;
}

void FUN_003deae0(QuadGroup *group, QuadVertex *out, s32 rangeIndex, s32 mode, u32 color)
{
    if (group->enabled == 0)
        return;

    f32 red = (f32)(color >> 24) * QUAD_COLOR_SCALE;
    f32 green = (f32)((color & 0xFF0000) >> 16) * QUAD_COLOR_SCALE;
    f32 blue = (f32)((color & 0xFF00) >> 8) * QUAD_COLOR_SCALE;
    f32 alphaScale = (f32)(color & 0xFF) * QUAD_COLOR_SCALE;

    QuadRangeEntry *range = &group->ranges[rangeIndex];
    u32 first;
    s32 last;
    if (mode == QUAD_MODE_FROM_FIRST || mode == QUAD_MODE_AFTER) {
        first = range->count + range->first;
        last = (first - 1) + range->after;
    } else if (mode == QUAD_MODE_RANGE) {
        first = range->first;
        last = range->count + (first - 1);
    } else {
        return;
    }

    nw::math::MTX44 matrix = nw::math::MTX44::Identity();
    for (; (s32)first <= last; first++) {
        QuadParticle *particle = &group->particles[first];
        if (!(mode == QUAD_MODE_RANGE
              || ((particle->alpha != 1.0f || mode == QUAD_MODE_FROM_FIRST)
                  && (particle->alpha >= 1.0f || mode == QUAD_MODE_AFTER))))
            continue;

        for (s32 corner = 0; corner < 4; corner++) {
            f32 projected[3];
            quadProject(matrix, particle->corners[corner], projected);
            out[corner].x = projected[0];
            out[corner].y = projected[1];
            out[corner].z = projected[2];
            out[corner].r = red;
            out[corner].g = green;
            out[corner].b = blue;
            out[corner].a = alphaScale * particle->alpha;
            out[corner].u = particle->u[corner];
            out[corner].v = -particle->v[corner];
        }
        out += 4;
    }
}

} /* extern "C" */
