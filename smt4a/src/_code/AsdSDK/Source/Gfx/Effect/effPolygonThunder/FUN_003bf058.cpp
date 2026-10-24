/* NON_MATCHING: readable rebuild of a thunder bolt-strip kind's create (the 0x10-byte bolt variant); the colour ramp (VFP int/float conversions through d8) is scheduled differently by armcc. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonThunderBolt.h"

/* One bolt of the effect (0x10 bytes). */
struct ThunderBoltSmall {
    /* 0x00 */ PolyGeom *geom;
    /* 0x04 */ s32 id;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ u32 unk0C;
};

/* All bolts of the effect: a pointer to the bolt array and the array itself. */
struct ThunderBoltSmallBlock {
    /* 0x00 */ ThunderBoltSmall *bolts;
    /* 0x04 */ ThunderBoltSmall storage[1];
};

extern "C" {
void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_00350d90(u32 segments, u8 *table, int w, int tableSize);

extern u8 DAT_005c1eec;

/* Creates the bolts of a thunder effect: one strip geometry per bolt, coloured by the ramp. */
ThunderBoltSmallBlock *FUN_003bf058(ThunderBoltParams *params)
{
    u32 count = params->boltCount;
    ThunderBoltSmallBlock *block = (ThunderBoltSmallBlock *)memAlloc(0x10000, 0x100, 0, count * 0x10 + 4, 0x10, 1);
    block->bolts = block->storage;
    u32 level = params->level;
    if (level < 4)
        level = 3;
    params->level = level;
    f32 span = (f32)(level + 1);
    s32 rampIn = (s32)(params->rampIn * span);
    s32 rampOut = (s32)(params->rampOut * span);
    ThunderBoltSmall *bolt = block->bolts;
    for (u32 i = 0; i < count; i++) {
        PolyGeom *geom = FUN_00350d90((u16)params->level, &DAT_005c1eec, 5, 0x48);
        bolt->geom = geom;
        thunderBoltFillColors(geom, params, rampIn, rampOut);
        bolt->id = -4 * (s32)i - 1;
        bolt->unk0C = 0;
        bolt++;
    }
    return block;
}

} /* extern "C" */
