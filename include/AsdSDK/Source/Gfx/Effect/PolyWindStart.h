#ifndef ASDSDK_POLYWINDSTART_H
#define ASDSDK_POLYWINDSTART_H

#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"
#include "classes/EffGeomRecord.h"
#include "shard/W6_W6Match3_EffectColor.h"

/* Wind's start callbacks clear the first word of each segment, independent of the geometry kind. */
template <u32 Size>
struct PolyWindStartSegment {
    /* 0x00 */ s32 id;
    /* 0x04 */ u8 unk04[Size - sizeof(s32)];
};

typedef char PolyWindStartLayoutCheck[
    sizeof(PolyWindStartSegment<0x2C>) == 0x2C && sizeof(PolyWindStartSegment<0x30>) == 0x30 &&
    offsetof(PolyObject, state) == 0x3C && offsetof(PolyObject, work) == 0x40 &&
    offsetof(PolyWindParams, segments) == 0x38 && offsetof(EffGeomPointHandle, points) == 4 ? 1 : -1];

/* Writes the RGBA of one point with the two normalization steps used by wind and track effects. */
static __inline void effGeomSetPointColor(EffGeomPointHandle *geometry, u16 index, const u8 *rgba)
{
    const f32 scale = 1.0f / 255.0f;
    EffectColor *color = &geometry->points[index];
    color->red = rgba[0] * scale * scale;
    color->green = rgba[1] * scale * scale;
    color->blue = rgba[2] * scale * scale;
    color->alpha = rgba[3] * scale * scale;
}

#endif
