#include "AsdSDK/Source/Gfx/Effect/effPolygonRing.h"
#include "AsdSDK/AsdDebug.h"
#include "gfx/PackedColorBytes.h"

extern "C" {

extern const char DAT_00410450[]; /* effPolygonRing.cpp: __FILE__ */

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_0024505c(u32 segments, u8 *table, int w, int tableSize);

extern u8 DAT_00473708;

/* Builds the geometry of a ring polygon effect (at least 3 segments) and colors every quad's
 * vertices from the parameter block. Returns a block holding just the geometry pointer. */
PolyGeom **effPolyRingGeomCreate1(PolyParams *params)
{
    asdDebugTrace(DAT_00410450, 67);
    PolyGeom **block = (PolyGeom **)memAlloc(0x10000, 0x100, 0, 4, 0x10, 1);
    u32 segments = params->segments;
    PolyGeom *geom;
    PackedColorBytes *vertices;
    u32 quads;
    u32 colorA, colorB, colorC;
    u32 i;

    segments = segments > 3 ? segments : 3;
    params->segments = segments;
    geom = FUN_0024505c(segments & 0xffff, &DAT_00473708, 4, 0x48);
    *block = geom;
    quads = geom->size / 4;
    vertices = (PackedColorBytes *)geom->buf->colors;
    geom->flags |= 0x20;
    colorA = params->colorA;
    colorB = params->colorB;
    colorC = params->colorC;
    for (i = 0; i < quads; i++) {
        packedColorBytesSet(&vertices[0], colorA);
        packedColorBytesSet(&vertices[1], colorB);
        packedColorBytesSet(&vertices[2], colorB);
        packedColorBytesSet(&vertices[3], colorC);
        vertices += 4;
    }
    return block;
}

} /* extern "C" */
