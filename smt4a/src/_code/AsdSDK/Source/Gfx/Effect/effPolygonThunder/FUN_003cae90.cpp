/* NON_MATCHING: retail keeps the three colours' rgb and alpha parts in stack slots (96-byte frame) and recomputes the ramp from spilled values; ours keeps them in registers (80-byte frame, 159 rows against 204). The ramp is only recomputed on step 0 and odd steps, as retail does. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Gfx/Effect/effPolygonThunderBolt.h"

/* The three vertex colours of one strip step (0x14 bytes, unaligned in the geometry buffer): the last
 * two repeat the first two. */
__packed struct ThunderStep {
    u32 colorC;
    u32 colorB;
    u32 colorA;
    u32 repeatB;
    u32 repeatC;
};

/* One bolt of the effect (0xC bytes). */
struct ThunderBoltTiny {
    /* 0x00 */ PolyGeom *geom;
    /* 0x04 */ s32 id;
    /* 0x08 */ u32 unk08;
};

/* All bolts of the effect: a pointer to the bolt array and the array itself. */
struct ThunderBoltTinyBlock {
    /* 0x00 */ ThunderBoltTiny *bolts;
    /* 0x04 */ ThunderBoltTiny storage[1];
};

extern "C" {
void *memAlloc(int, int, int, int size, int align, int);
PolyGeom *FUN_00350d90(u32 segments, u8 *table, int w, int tableSize);

extern u8 DAT_005c1eec;

/* Creates the bolts of a thunder effect: one strip geometry per bolt, coloured by the alpha ramp. */
ThunderBoltTinyBlock *FUN_003cae90(ThunderBoltParams *params)
{
    u32 count = params->boltCount;
    u32 bytes = count * 0xC + 4;
    ThunderBoltTinyBlock *block;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Effect\\effPolygonThunder.cpp", 1181);
    block = (ThunderBoltTinyBlock *)memAlloc(0x10000, 0x100, 0, bytes, 0x10, 1);
    block->bolts = block->storage;
    u32 level = params->level;
    if (level <= 3)
        level = 3;
    params->level = level;
    if ((level & 1) == 0)
        params->level = level + 1;

    u32 colorA = params->colorA;
    u32 colorB = params->colorB;
    u32 colorC = params->colorC;
    u32 rgbA = colorA & 0xFFFFFF;
    u32 rgbB = colorB & 0xFFFFFF;
    u32 rgbC = colorC & 0xFFFFFF;
    u32 alphaA = colorA >> 24;
    u32 alphaB = colorB >> 24;
    u32 alphaC = colorC >> 24;
    f32 span = (f32)(s32)(params->level + 1);
    s32 rampIn = (s32)(params->rampIn * span);
    s32 rampOut = (s32)(params->rampOut * span);
    ThunderBoltTiny *bolt = block->bolts;
    f32 ramp = 0.0f;
    for (u32 i = 0; i < count; i++) {
        PolyGeom *geom = FUN_00350d90((u16)params->level, &DAT_005c1eec, 5, 0x48);
        s32 steps = geom->size / 5;
        ThunderStep *step = (ThunderStep *)geom->buf->colors;
        s32 j;

        bolt->geom = geom;
        for (j = 0; (u32)j < (u32)steps; j++) {
            if (j == 0 || (j & 1) != 0) {
                if (j < rampIn)
                    ramp = (f32)(u32)j / (f32)rampIn;
                else if (rampOut >= j)
                    ramp = 1.0f;
                else
                    ramp = (f32)(u32)(steps - j - 1) / (f32)(u32)(steps - rampOut);
            }
            step->colorC = rgbC | ((u32)((f32)alphaC * ramp) << 24);
            step->colorB = rgbB | ((u32)((f32)alphaB * ramp) << 24);
            step->colorA = rgbA | ((u32)((f32)alphaA * ramp) << 24);
            step->repeatB = step->colorB;
            step->repeatC = step->colorC;
            step++;
        }
        bolt->id = -4 * (s32)i - 1;
        bolt++;
    }
    return (ThunderBoltTinyBlock *)block;
}

} /* extern "C" */
