/* NON_MATCHING: the trace, level clamp, colour bytes (packedColorBytesSet per vertex) and hoisted colour parts now match retail's shape (row counts equal or within 2); remaining: saved-register/spill assignment (retail spills params to a 88-byte frame, loads the ramp pair with one vldmia) and the allocation-size/trace argument order. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonThunderBolt.h"
#include "AsdSDK/AsdDebug.h"

/* One bolt of the effect (0x30 bytes). */
struct ThunderBolt {
    /* 0x00 */ PolyGeom *geom;
    /* 0x04 */ u8 unk04[0x10];
    /* 0x14 */ s32 id;
    /* 0x18 */ u8 unk18[0x18];
};

/* All bolts of the effect: a header and the bolt array. */
struct ThunderBoltBlock {
    /* 0x00 */ ThunderBolt *bolts;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ ThunderBoltBlock *self;
    /* 0x10 */ ThunderBolt storage[1];
};

extern "C" {
extern const char DAT_0041052c[]; /* effect source file name (__FILE__) */
void *memAlloc(int, int, int, int size, int align, int);
void rt_memclr(void *block, int size);
PolyGeom *FUN_0024505c(u32 segments, u8 *table, int w, int tableSize);

extern u8 DAT_0047372c;

/* Allocates the bolt block of `bytes` bytes, recording the allocation site first. */
static ThunderBoltBlock *allocBoltBlock(u32 bytes)
{
    asdDebugTrace(DAT_0041052c, 695);
    return (ThunderBoltBlock *)memAlloc(0x10000, 0x100, 0, bytes, 0x10, 1);
}

/* Creates the bolts of a thunder effect: one strip geometry per bolt, coloured by the ramp. */
ThunderBoltBlock *FUN_00315860(ThunderBoltParams *params)
{
    u32 count = params->boltCount;
    ThunderBoltBlock *block = allocBoltBlock(count * 0x30 + 0x10);
    rt_memclr(block, count * 0x30 + 0x10);
    block->bolts = block->storage;
    block->self = block;
    u32 level = params->level;
    level = level > 3 ? level : 3;
    params->level = level;
    ThunderBoltColors colors = thunderBoltSplitColors(params);
    f32 span = (f32)(s32)(level + 1);
    s32 rampIn = (s32)(params->rampIn * span);
    s32 rampOut = (s32)(params->rampOut * span);
    ThunderBolt *bolt = block->bolts;
    for (u32 i = 0; i < count; i++) {
        PolyGeom *geom = FUN_0024505c((u16)params->level, &DAT_0047372c, 5, 0x48);
        bolt->geom = geom;
        thunderBoltFillColors(geom, &colors, rampIn, rampOut);
        bolt->id = -4 * (s32)i - 1;
        bolt++;
    }
    return block;
}

} /* extern "C" */
