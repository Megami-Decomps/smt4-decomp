/* NON_MATCHING: the geometry table-size stack argument uses r1 instead of retail's r2. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonFlash.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_00410408[]; /* "c:\SMT4\XRD686\sdds4\Patch\AsdSDK\Source\Gfx\Effect\effPolygonFlash.cpp": __FILE__ */

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_00247334(s32 count, s32 w, s32 h, const s16 *table, u16 tag);
extern const s16 DAT_00473768[];

/* Builds the geometry block of a flash polygon effect with one segment per parameter segment. */
PolyGeomBlock *effPolyFlashGeomCreate2(PolyParams *params)
{
    u32 segments = params->segments;
    u32 size = segments * 0x18;
    PolyGeomBlock *block;

    asdDebugTrace(DAT_00410408, 151);
    block = (PolyGeomBlock *)memAlloc(0x10000, 0x100, 0, size + 0x10, 0x10, 1);

    block->data = block->payload;
    block->self = block;
    block->geom = FUN_00247334(segments & 0xffff, 3, 5, DAT_00473768, 72);
    return block;
}

} /* extern "C" */
