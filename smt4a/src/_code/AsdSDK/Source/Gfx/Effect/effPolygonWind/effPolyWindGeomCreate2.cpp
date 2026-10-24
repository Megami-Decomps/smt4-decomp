/* NON_MATCHING: the debug trace (string, line, nop) and size/clamp shapes now match retail; what remains is register allocation (retail keeps the effect object's fields in r4/r6 via a writeback load and the new block in r5; armcc swaps them) and the geometry result being reused in r1. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonWind.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_00544cd8[];

void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_00390164(u32 segments, u32 sides, u8 *table, int w, int tableSize);
void asdTextureHolderLoad(PolyGeom *geom, void *texture);
void refSlotAssign(PolyGeom *geom, u32 texture);
u32 sysGetTableWord(int id);
void FUN_003cb24c(PolyWindBlock *block, PolyWindParams *params);

extern u8 DAT_005c1ec8;

/* Builds the geometry block of a wind polygon effect with at least 3 sides, textured with the
 * given texture or a default one, and initializes its segments. */
PolyWindBlock *effPolyWindGeomCreate2(PolyWindParams *params, void *texture)
{
    u32 size = params->segments * 0x30 + 0xc;
    PolyWindBlock *block;
    u32 sides;
    PolyGeom *geom;

    asdDebugTrace(DAT_00544cd8, 559);
    block = (PolyWindBlock *)memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
    block->data = block->payload;
    block->self = block;
    sides = params->sides;
    sides = sides > 3 ? sides : 3;
    params->sides = sides;
    geom = FUN_00390164(params->segments, sides & 0xffff, &DAT_005c1ec8, 4, 0x4c);
    block->geom = geom;
    if (texture != NULL) {
        asdTextureHolderLoad(geom, texture);
    } else {
        refSlotAssign(geom, sysGetTableWord(20));
    }
    FUN_003cb24c(block, params);
    return block;
}

} /* extern "C" */
