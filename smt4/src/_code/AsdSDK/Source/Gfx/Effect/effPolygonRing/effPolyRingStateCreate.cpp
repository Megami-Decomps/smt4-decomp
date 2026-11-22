/* NON_MATCHING: retail keeps the parameters and the segment count in r8/fp across the colour loop, where this
 * build spills them; the 0x5C-byte parameter copy is probably a struct assignment of a sub-object (still a
 * named __aeabi_memcpy4 call here). */
#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"
#include "AsdSDK/AsdDebug.h"
#include "gfx/PackedColorBytes.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *effGeomCreateRepeatedIndexList(u32 segments, int w, int h, u8 *table, int tableSize);
PolyObject *effPolyRingCreate(u32 kind, void *params);
f32 shiftRandomNextFraction(int arg);
void __aeabi_memcpy4(void *dst, const void *src, int size);

extern u8 DAT_0047375c;
extern const char g_effPolygonRingSourceFileName[]; /* effPolygonRing.cpp: __FILE__ */

/* Builds the state of a ring effect: a polygon object (kind 1) running on a copy of the
 * parameters, the ring geometry colored from the parameters (the third vertex blends the
 * first two colors) and one randomized value per segment. At least 3 segments. */
PolyRingState *effPolyRingStateCreate(PolyParams *params)
{
    u32 segments = params->segments;
    f32 *values;
    PolyRingState *state;
    PolyGeom *geom;
    PackedColorBytes *vertices;
    u32 colorA, colorB, colorMid;
    u32 i;

    segments = segments > 3 ? segments : 3;
    params->segments = segments;
    asdDebugTrace(g_effPolygonRingSourceFileName, 284);
    values = (f32 *)memAlloc(0x10000, 0x100, 0, segments * 4 + 0x10, 0x10, 1);
    state = (PolyRingState *)(values + segments);
    state->valuesStart = values;
    state->values = values;
    __aeabi_memcpy4((u8 *)params + 0x5c, params, 0x5c);
    state->obj = effPolyRingCreate(1, (u8 *)params + 0x5c);
    geom = effGeomCreateRepeatedIndexList(segments & 0xffff, 2, 4, &DAT_0047375c, 0x48);
    state->geom = geom;
    vertices = (PackedColorBytes *)geom->buf->colors;
    geom->flags |= 0x20;
    colorA = params->colorA;
    colorB = params->colorB;
    colorMid = (colorB & colorA) + (((colorA ^ colorB) & 0xfefefeff) >> 1);
    for (i = 0; i < segments; i++) {
        packedColorBytesSet(&vertices[0], colorA);
        packedColorBytesSet(&vertices[1], colorA);
        packedColorBytesSet(&vertices[2], colorMid);
        packedColorBytesSet(&vertices[3], colorA);
        vertices += 4;
        *values++ = ((1.0f - params->randomness) + shiftRandomNextFraction(0) * params->randomness) * params->scale;
    }
    return state;
}

} /* extern "C" */
