#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *effGeomCreateRepeatedIndexList(u32 count, int w, int h, u8 *table, int tableSize);
extern u8 g_effPolyFlashIndexTableU8;

/* Builds the geometry block of a flash polygon effect with one segment per parameter segment. */
PolyGeomBlock *effPolyFlashGeomCreate1(PolyParams *params)
{
    u32 segments = params->segments;
    u32 size = segments * 0x1c;
    PolyGeomBlock *block;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effPolygonFlash.cpp", 493);
    block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, size + 0x10, 0x10, 1);

    u8 *payload = block->payload;
    block->data = payload;
    block->self = block;
    block->geom = effGeomCreateRepeatedIndexList(segments & 0xffff, 12, 13, &g_effPolyFlashIndexTableU8, 72);
    return block;
}

} /* extern "C" */
