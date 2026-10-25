/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 143 vs built 118 rows, 192 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_002b3b58(u32 segments, int w, int h, u8 *table, int tableSize);
PolyObject *effPolyRingCreate(u32 kind, void *params);
f32 shiftRandomNextFraction(int arg);
void __aeabi_memcpy4(void *dst, const void *src, int size);

extern u8 DAT_005c1f1c;

/* Builds the state of a ring effect: a polygon object (kind 1) running on a copy of the
 * parameters, the ring geometry colored from the parameters (the third vertex blends the
 * first two colors) and one randomized value per segment. At least 3 segments. */
PolyRingState *effPolyRingStateCreate(PolyParams *params)
{
    u32 segments = params->segments;
    f32 *values;
    PolyRingState *state;
    PolyGeom *geom;
    u8 *colors;
    u32 colorA, colorB, colorMid;
    u32 i;

    if (segments < 4) {
        segments = 3;
    }
    params->segments = segments;
    values = (f32 *)memAlloc(0x10000, 0x100, 0, segments * 4 + 0x10, 0x10, 1);
    state = (PolyRingState *)(values + segments);
    state->valuesStart = values;
    state->values = values;
    __aeabi_memcpy4((u8 *)params + 0x5c, params, 0x5c);
    state->obj = effPolyRingCreate(1, (u8 *)params + 0x5c);
    geom = FUN_002b3b58(segments & 0xffff, 2, 4, &DAT_005c1f1c, 0x48);
    state->geom = geom;
    colors = geom->buf->colors;
    geom->flags |= 0x20;
    colorA = params->colorA;
    colorB = params->colorB;
    colorMid = (colorB & colorA) + (((colorA ^ colorB) & 0xfefefeff) >> 1);
    for (i = 0; i < segments; i++) {
        colors[0] = colorA;
        colors[1] = colorA >> 8;
        colors[2] = colorA >> 16;
        colors[3] = colorA >> 24;
        colors[4] = colorA;
        colors[5] = colorA >> 8;
        colors[6] = colorA >> 16;
        colors[7] = colorA >> 24;
        colors[8] = colorMid;
        colors[9] = colorMid >> 8;
        colors[10] = colorMid >> 16;
        colors[11] = colorMid >> 24;
        colors[12] = colorA;
        colors[13] = colorA >> 8;
        colors[14] = colorA >> 16;
        colors[15] = colorA >> 24;
        colors += 16;
        *values++ = ((1.0f - params->randomness) + shiftRandomNextFraction(0) * params->randomness) * params->scale;
    }
    return state;
}

} /* extern "C" */
