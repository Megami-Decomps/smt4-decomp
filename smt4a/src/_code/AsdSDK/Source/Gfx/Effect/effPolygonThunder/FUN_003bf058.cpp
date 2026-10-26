/* NON_MATCHING: the trace, level clamp, colour bytes (packedColorBytesSet per vertex) and hoisted colour parts now match retail's shape (row counts equal or within 2); remaining: saved-register/spill assignment (retail spills params to a 88-byte frame, loads the ramp pair with one vldmia) and the allocation-size/trace argument order. */
#include "AsdSDK/Source/Gfx/Effect/effPolygonThunderBolt.h"
#include "AsdSDK/AsdDebug.h"

/* One bolt of the effect (0x10 bytes). */
struct ThunderBoltSmall {
    /* 0x00 */ PolyGeom *geom;
    /* 0x04 */ s32 id;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ f32 unk0C;
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

/* Allocates the bolt block of `bytes` bytes, recording the allocation site first. */
static ThunderBoltSmallBlock *allocBoltBlock(u32 bytes)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effPolygonThunder.cpp", 82);
    return (ThunderBoltSmallBlock *)memAlloc(0x10000, 0x100, 0, bytes, 0x10, 1);
}

/* Creates the bolts of a thunder effect: one strip geometry per bolt, coloured by the ramp. */
ThunderBoltSmallBlock *FUN_003bf058(ThunderBoltParams *params)
{
    u32 count = params->boltCount;
    ThunderBoltSmallBlock *block = allocBoltBlock(count * 0x10 + 4);
    block->bolts = block->storage;
    u32 level = params->level;
    level = level > 3 ? level : 3;
    params->level = level;
    ThunderBoltColors colors = thunderBoltSplitColors(params);
    f32 span = (f32)(s32)(level + 1);
    s32 rampIn = (s32)(params->rampIn * span);
    s32 rampOut = (s32)(params->rampOut * span);
    ThunderBoltSmall *bolt = block->bolts;
    for (u32 i = 0; i < count; i++) {
        PolyGeom *geom = FUN_00350d90((u16)params->level, &DAT_005c1eec, 5, 0x48);
        bolt->geom = geom;
        thunderBoltFillColors(geom, &colors, rampIn, rampOut);
        bolt->id = -4 * (s32)i - 1;
        bolt->unk0C = 0.0f;
        bolt++;
    }
    return block;
}

} /* extern "C" */
