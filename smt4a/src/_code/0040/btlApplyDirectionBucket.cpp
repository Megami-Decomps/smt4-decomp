/* NON_MATCHING: flag/direction flow, field loads and the camera centre (read as an int word, vmov to VFP) match retail; fixed-angle thresholds compile to integer-bit compares (retail vldr+vcmpe) and the camera-relative compares come out with swapped vcmpe operands (named threshold locals fix the operands but hoist the sums). */
#include "battle/BtlMainAccess.h"
#include "battle/btlMain.h"

struct BattleDirectionEntry {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 handle;
    /* 0x0c */ u8 unk0c[0x18];
    /* 0x24 */ s16 x;
    /* 0x26 */ s16 y;
    /* 0x28 */ u32 kind;
    /* 0x2c */ u32 flags;
};

struct BattleCameraAngle {
    /* 0x000 */ u8 unk000[0x58c];
    /* 0x58c */ u32 centerBits;
};

extern "C" {
extern BtlAuxA *g_btlAux;
extern BattleCameraAngle *g_btlCamera;
f32 FUN_004fad68(BtlAuxA *, u32 kind, s32 x, s32 y);
void FUN_004fb43c(u32 unused, u32 handle, u32 flags, s32 a, s32 b, s32 direction, s32 c);

// Choose one of five facing buckets using fixed or camera-relative angle thresholds.
void btlApplyDirectionBucket(u32 unused, BattleDirectionEntry *entry)
{
    u32 kind = entry->kind;
    s32 x = entry->x;
    s32 y = entry->y;
    u32 flags = entry->flags;
    f32 angle = FUN_004fad68(g_btlAux, kind, x, y);
    btlGetMainState();
    s32 direction;
    switch (kind) {
    case 2:
    case 5:
    case 8:
    case 9:
    case 12:
        if (angle < -2.9650002f)
            direction = 5;
        else if (angle < -0.99f)
            direction = 4;
        else if (angle > 2.94f)
            direction = 1;
        else if (angle > 0.96500003f)
            direction = 2;
        else
            direction = 3;
        break;
    case 6:
    case 7:
    case 11:
        direction = 3;
        break;
    default:
        union { u32 bits; f32 value; } word;
        word.bits = g_btlCamera->centerBits;
        f32 center = word.value;
        if (angle < center + -17.0f)
            direction = 5;
        else if (angle < center + -9.0f)
            direction = 4;
        else if (angle > center + 17.0f)
            direction = 1;
        else if (angle > center + 9.0f)
            direction = 2;
        else
            direction = 3;
        break;
    }
    FUN_004fb43c(0, entry->handle, flags, 0, 0, direction, 0);
}
}
