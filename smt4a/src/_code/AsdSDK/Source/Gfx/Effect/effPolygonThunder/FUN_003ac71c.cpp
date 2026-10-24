/* NON_MATCHING: readable rebuild of a thunder bolt-strip kind's create; the colour ramp (VFP int/float conversions through d8) is scheduled differently by armcc, and retail's float 1.0 lives in d8 across the bolt loop. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonThunderBolt.h"

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
void *memAlloc(int, int, int, int size, int align, int);
void rt_memclr(void *block, int size);
PolyGeom *FUN_00350d90(u32 segments, u8 *table, int w, int tableSize);

extern u8 DAT_005c1eec;

/* Creates the bolts of a thunder effect: one strip geometry per bolt, coloured by the ramp. */
ThunderBoltBlock *FUN_003ac71c(ThunderBoltParams *params)
{
    u32 count = params->boltCount;
    ThunderBoltBlock *block = (ThunderBoltBlock *)memAlloc(0x10000, 0x100, 0, count * 0x30 + 0x10, 0x10, 1);
    rt_memclr(block, count * 0x30 + 0x10);
    block->bolts = block->storage;
    block->self = block;
    u32 level = params->level;
    if (level < 4)
        level = 3;
    params->level = level;
    f32 span = (f32)(level + 1);
    s32 rampIn = (s32)(params->rampIn * span);
    s32 rampOut = (s32)(params->rampOut * span);
    ThunderBolt *bolt = block->bolts;
    for (u32 i = 0; i < count; i++) {
        PolyGeom *geom = FUN_00350d90((u16)params->level, &DAT_005c1eec, 5, 0x48);
        bolt->geom = geom;
        thunderBoltFillColors(geom, params, rampIn, rampOut);
        bolt->id = -4 * (s32)i - 1;
        bolt++;
    }
    return block;
}

} /* extern "C" */
