/* NON_MATCHING: trace, clamp and big-endian color byte stores match retail; remaining: register allocation of the quad-color loop. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_00350d90(u32 segments, u8 *table, int w, int tableSize);

extern u8 DAT_005c1ec8;

/* Builds the geometry of a ring polygon effect (at least 3 segments) and colors every quad's
 * vertices from the parameter block. Returns a block holding just the geometry pointer. */
PolyGeom **effPolyRingGeomCreate0(PolyParams *params)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effPolygonRing.cpp", 503);
    PolyGeom **block = (PolyGeom **)memAlloc(0x10000, 0x100, 0, 4, 0x10, 1);
    u32 segments = params->segments;
    PolyGeom *geom;
    u8 *colors;
    u32 quads;
    u32 colorA, colorB, colorC;
    u32 i;

    segments = segments > 3 ? segments : 3;
    params->segments = segments;
    geom = FUN_00350d90(segments & 0xffff, &DAT_005c1ec8, 4, 0x48);
    *block = geom;
    quads = geom->size / 4;
    colors = geom->buf->colors;
    geom->flags |= 0x20;
    colorA = params->colorA;
    colorB = params->colorB;
    colorC = params->colorC;
    for (i = 0; i < quads; i++) {
        colors[0] = __rev(colorA) >> 24;
        colors[1] = __rev(colorA) >> 16;
        colors[2] = __rev(colorA) >> 8;
        colors[3] = __rev(colorA);
        colors[4] = __rev(colorB) >> 24;
        colors[5] = __rev(colorB) >> 16;
        colors[6] = __rev(colorB) >> 8;
        colors[7] = __rev(colorB);
        colors[8] = __rev(colorB) >> 24;
        colors[9] = __rev(colorB) >> 16;
        colors[10] = __rev(colorB) >> 8;
        colors[11] = __rev(colorB);
        colors[12] = __rev(colorC) >> 24;
        colors[13] = __rev(colorC) >> 16;
        colors[14] = __rev(colorC) >> 8;
        colors[15] = __rev(colorC);
        colors += 16;
    }
    return block;
}

} /* extern "C" */
