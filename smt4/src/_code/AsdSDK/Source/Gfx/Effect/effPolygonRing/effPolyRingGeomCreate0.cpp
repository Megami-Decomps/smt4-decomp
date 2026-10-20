/* NON_MATCHING: retail wraps the allocator call in an inlined debug trace (file/line pool loads and a nop) that plain source cannot express, which shifts register use and scheduling; retail 98 vs built 85 rows, 124 diff lines. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_0024505c(u32 segments, u8 *table, int w, int tableSize);

extern u8 DAT_00473708;

/* Builds the geometry of a ring polygon effect (at least 3 segments) and colors every quad's
 * vertices from the parameter block. Returns a block holding just the geometry pointer. */
PolyGeom **effPolyRingGeomCreate0(PolyParams *params)
{
    PolyGeom **block = (PolyGeom **)memAlloc(0x10000, 0x100, 0, 4, 0x10, 1);
    u32 segments = params->segments;
    PolyGeom *geom;
    u8 *colors;
    u32 quads;
    u32 colorA, colorB, colorC;
    u32 i;

    if (segments < 4) {
        segments = 3;
    }
    params->segments = segments;
    geom = FUN_0024505c(segments & 0xffff, &DAT_00473708, 4, 0x48);
    *block = geom;
    quads = geom->size / 4;
    colors = geom->buf->colors;
    geom->flags |= 0x20;
    colorA = params->colorA;
    colorB = params->colorB;
    colorC = params->colorC;
    for (i = 0; i < quads; i++) {
        colors[0] = colorA;
        colors[1] = colorA >> 8;
        colors[2] = colorA >> 16;
        colors[3] = colorA >> 24;
        colors[4] = colorB;
        colors[5] = colorB >> 8;
        colors[6] = colorB >> 16;
        colors[7] = colorB >> 24;
        colors[8] = colorB;
        colors[9] = colorB >> 8;
        colors[10] = colorB >> 16;
        colors[11] = colorB >> 24;
        colors[12] = colorC;
        colors[13] = colorC >> 8;
        colors[14] = colorC >> 16;
        colors[15] = colorC >> 24;
        colors += 16;
    }
    return block;
}

} /* extern "C" */
