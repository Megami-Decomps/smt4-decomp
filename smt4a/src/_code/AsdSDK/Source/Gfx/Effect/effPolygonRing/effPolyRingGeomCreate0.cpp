#include "AsdSDK/AsdDebug.h"
#include "gfx/PackedColorBytes.h"
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
    PackedColorBytes *vertices;
    u32 quads;
    u32 colorA, colorB, colorC;
    u32 i;

    segments = segments > 3 ? segments : 3;
    params->segments = segments;
    geom = FUN_00350d90(segments & 0xffff, &DAT_005c1ec8, 4, 0x48);
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
