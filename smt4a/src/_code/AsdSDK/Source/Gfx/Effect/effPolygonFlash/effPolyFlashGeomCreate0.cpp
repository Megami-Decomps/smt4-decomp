#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {

PolyGeom *effGeomCreateRepeatedIndexList(u32 count, int w, int h, u8 *table, int tableSize);
extern u8 g_effPolyFlashIndexTableS16;

/* Builds the geometry block of a flash polygon effect with one segment per parameter segment. */
PolyGeomBlock *effPolyFlashGeomCreate0(PolyParams *params)
{
    u32 size = params->segments * 0x2c;
    PolyGeomBlock *block;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effPolygonFlash.cpp", 2540);
    block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, size + 0x10, 0x10, 1);

    u8 *payload = block->payload;
    block->data = payload;
    block->self = block;
    block->geom = effGeomCreateRepeatedIndexList(params->segments & 0xffff, 3, 5, &g_effPolyFlashIndexTableS16, 72);
    return block;
}

} /* extern "C" */
