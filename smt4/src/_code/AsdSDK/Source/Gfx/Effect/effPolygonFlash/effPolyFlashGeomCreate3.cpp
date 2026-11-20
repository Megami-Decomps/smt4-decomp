#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char g_effPolygonFlashSourceFileName[]; /* "c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Effect\\effPolygonFlash.cpp": __FILE__ */

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *effGeomCreateRepeatedIndexList(u32 count, int w, int h, u8 *table, int tableSize);
extern u8 g_effPolyFlashIndexTableU8;

/* Builds the geometry block of a flash polygon effect with one segment per parameter segment. */
PolyGeomBlock *effPolyFlashGeomCreate3(PolyParams *params)
{
    u32 segments = params->segments;
    u32 size = segments * 0x2c;
    PolyGeomBlock *block;

    asdDebugTrace(g_effPolygonFlashSourceFileName, 857);
    block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, size + 0x10, 0x10, 1);

    u8 *payload = block->payload;
    block->data = payload;
    block->self = block;
    block->geom = effGeomCreateRepeatedIndexList(segments & 0xffff, 12, 13, &g_effPolyFlashIndexTableU8, 72);
    return block;
}

} /* extern "C" */
