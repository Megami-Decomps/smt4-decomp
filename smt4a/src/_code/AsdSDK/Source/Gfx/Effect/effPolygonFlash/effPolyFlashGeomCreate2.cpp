#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdMemAlloc.h"

extern "C" {

PolyGeom *effGeomCreateRepeatedIndexList(s32 count, s32 w, s32 h, const s16 *table, u16 tag);
extern const s16 g_effPolyFlashIndexTableS16[];

/* Builds the geometry block of a flash polygon effect with one segment per parameter segment. */
PolyGeomBlock *effPolyFlashGeomCreate2(PolyParams *params)
{
    u32 segments = params->segments;
    u32 size = segments * 0x18;
    PolyGeomBlock *block;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effPolygonFlash.cpp", 151);
    block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, size + 0x10, 0x10, 1);

    u8 *payload = block->payload;
    block->data = payload;
    block->self = block;
    block->geom = effGeomCreateRepeatedIndexList(segments & 0xffff, 3, 5, g_effPolyFlashIndexTableS16, 72);
    return block;
}

} /* extern "C" */
