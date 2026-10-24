/* NON_MATCHING: builds the vertex ring of the X polygon filter (centre, first rim vertex and the rest by repeated rotation with the table sine/cosine); written from the decompilation and the retail disassembly, float to int conversions and the unused alignment argument of asdOperatorNewE are not compared with retail */
#include "AsdSDK/AsdDebug.h"
#include "nw/math/MTX44.h"

struct XPolyVertex {
    f32 x, y, z;
    f32 u, v;
};

struct XPolyParams {
    /* 0x00 */ s32 segments;
    /* 0x04 */ f32 radius;
    /* 0x08 */ u8 unk08[8];
    /* 0x10 */ f32 centerU, centerV;
    /* 0x18 */ f32 oddU, oddV;
    /* 0x20 */ f32 evenU, evenV;
    /* 0x28 */ u8 unk28[4];
    /* 0x2C */ u32 baseArgument;
};

struct XPolyFilter {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ XPolyVertex *vertices;
    /* 0x08 */ u8 unk08[0x10];
    /* 0x18 */ u8 matrix[0x40];
    /* 0x58 */ f32 depth;
    /* 0x5C */ f32 scale;
    /* 0x60 */ XPolyParams *params;
    /* 0x64 */ void *indices;
};

/* One entry of the sine table: value and slope for sine, then for cosine. */
struct SinCosEntry {
    f32 sinValue;
    f32 cosValue;
    f32 sinSlope;
    f32 cosSlope;
};

#define XPOLY_UNITS_PER_DEGREE 0.7111111f
#define XPOLY_SOURCE "c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\Filter\\FilterXPoly.cpp"

extern "C" {
extern SinCosEntry DAT_00536d14[256];

void btlFilterLoadTexture(XPolyFilter *filter, u32 argument, u32 base);
void *asdMemoryAlloc(u32 pool, u32 category, u32 flags, u32 size, u32 alignment);
void *asdOperatorNewE(u32 size);
void mtx44Copy(void *destination, const nw::math::MTX44 *source);

/* Sine and cosine of an angle given in table units (256 per turn, interpolated). */
static __inline void sinCosUnits(f32 units, f32 *sinOut, f32 *cosOut)
{
    f32 magnitude = units < 0.0f ? -units : units;
    while (magnitude >= 65536.0f)
        magnitude -= 65536.0f;
    u32 whole = (u32)magnitude;
    const SinCosEntry *entry = &DAT_00536d14[(u8)whole];
    f32 fraction = magnitude - (f32)(whole & 0xFFFF);
    *sinOut = entry->sinValue + fraction * entry->sinSlope;
    *cosOut = entry->cosValue + fraction * entry->cosSlope;
    if (units < 0.0f)
        *sinOut = -*sinOut;
}

void FUN_00415cd8(XPolyFilter *filter, XPolyParams *params, u32 argument)
{
    filter->params = params;
    btlFilterLoadTexture(filter, argument, params->baseArgument);
    asdDebugTrace(XPOLY_SOURCE, 48);
    filter->vertices = static_cast<XPolyVertex *>(asdMemoryAlloc(0x100, 0x100, 0, (filter->params->segments + 1) * sizeof(XPolyVertex), 1));
    filter->indices = asdOperatorNewE((filter->params->segments + 1) * 12);

    f32 step = (360.0f / (f32)filter->params->segments) * XPOLY_UNITS_PER_DEGREE;
    f32 sinA, cosA, sinB, cosB, sinC, cosC;
    sinCosUnits(0.0f, &sinA, &cosA);
    sinCosUnits(0.0f, &sinB, &cosB);
    sinCosUnits(step, &sinC, &cosC);

    f32 radius = filter->params->radius;
    XPolyVertex *vertices = filter->vertices;
    vertices[0].x = 0.0f;
    vertices[0].y = 0.0f;
    vertices[0].z = 0.0f;
    vertices[0].u = filter->params->centerU;
    vertices[0].v = filter->params->centerV;
    vertices[1].x = radius;
    vertices[1].y = 0.0f;
    vertices[1].z = 0.0f;
    vertices[1].u = filter->params->oddU;
    vertices[1].v = filter->params->oddV;

    f32 x = radius;
    f32 y = 0.0f;
    f32 z = 0.0f;
    for (s32 i = 2; i < filter->params->segments + 1; i++) {
        f32 newX = cosC * cosB * x + (sinA * cosC * sinB - cosA * sinC) * y + (sinA * sinC + cosA * cosC * sinB) * z;
        f32 newY = sinC * cosB * x + (cosA * cosC + sinA * sinC * sinB) * y + (cosA * sinC * sinB - sinA * cosC) * z;
        f32 newZ = -sinB * x + sinA * cosB * y + cosA * cosB * z;
        x = newX;
        y = newY;
        z = newZ;
        vertices[i].x = x;
        vertices[i].y = y;
        vertices[i].z = z;
        if ((i & 1) != 0) {
            vertices[i].u = filter->params->oddU;
            vertices[i].v = filter->params->oddV;
        } else {
            vertices[i].u = filter->params->evenU;
            vertices[i].v = filter->params->evenV;
        }
    }

    filter->depth = 0.0f;
    filter->scale = 1.0f;
    mtx44Copy(filter->matrix, &nw::math::MTX44::Identity());
}

} /* extern "C" */
