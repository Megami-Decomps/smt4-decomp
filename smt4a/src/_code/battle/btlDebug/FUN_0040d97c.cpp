/* NON_MATCHING: readable rewrite from retail disassembly compiles (213 vs 217 rows); retail keeps the shared marker call tail and the float offset adds in a different register order */
#include "common.h"
#include "battle/BtlMainAccess.h"

struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
};

// A battle side as seen by the marker code: flags, id and world position.
struct BtlSide {
    u64 flags;                  // 0x00
    u8 unk08[0x30 - 8];
    Vec3 position;              // 0x30
    u8 unk3c[0x6a - 0x3c];
    s16 index;                  // 0x6a
    u8 unk6c[2];
    s16 markerId;               // 0x6e
};

// Marker step state.
struct MarkerStep {
    u8 unk00[2];
    u16 done;                   // 0x02
    u8 unk04[0x10];
    BtlSide* actor;             // 0x14
    u8 unk18[8];
    s8 phase;                   // 0x20
    u8 unk21[5];
    s16 handle;                 // 0x26
    s32 kind;                   // 0x28
    u8 unk2c[0x1c];
    u16 doubled;                // 0x48
};

extern "C" {

extern u8* g_btlUiBlock;
extern u8 g_btlActionReflect[];
extern const Vec3 DAT_005e1c2c;

BtlSide* FUN_003f0e20(void* main, s32 index);
Vec3 FUN_003e7fa4(void* main, s32 index, s32 arg);
s16 FUN_004aa0b0(u8* ui, s32 a, s32 b, f32 x, f32 y, f32 z);
s16 FUN_004aace8(u8* ui, s32 id, s32 a, s32 x, s32 y);
s32 FUN_004aa1e8(u8* ui, s32 handle);

#define MASK64(offset) (*reinterpret_cast<u64*>(g_btlActionReflect + (offset)))

// Marker for the acting side: places the target marker above the side (or on the map) the
// first time, then waits for the marker handle to finish before reporting done.
void FUN_0040d97c(u32 unused, MarkerStep* step)
{
    void* main = btlGetMainState();
    BtlSide* side = FUN_003f0e20(main, step->actor->index);
    if (side == NULL) {
        step->done = 0;
        return;
    }
    if (step->phase != 0) {
        if (step->phase == 1 && FUN_004aa1e8(g_btlUiBlock, step->handle) == 0) {
            step->done = 0;
            return;
        }
        step->done = 1;
        return;
    }

    s16 result;
    if ((side->flags & MASK64(0x28)) != 0) {
        Vec3 offset = FUN_003e7fa4(btlGetMainState(), step->actor->index, 0);
        Vec3 base = step->actor->position;
        f32 x = offset.x + base.x;
        f32 y = offset.y + base.y;
        f32 z = offset.z + base.z;
        switch (step->kind) {
        case 1:
            result = FUN_004aa0b0(g_btlUiBlock, 1, 1, x + DAT_005e1c2c.x, y + DAT_005e1c2c.y, z + DAT_005e1c2c.z);
            break;
        case 2:
            x += DAT_005e1c2c.x;
            y += DAT_005e1c2c.y;
            z += DAT_005e1c2c.z;
            if (step->doubled != 0) {
                result = FUN_004aa0b0(g_btlUiBlock, 0, 1, x, y, z);
                step->handle = result;
                FUN_004aa0b0(g_btlUiBlock, 1, 1, x - 3.0f, y + 1.2f, z);
                step->phase = 1;
                step->done = 1;
                return;
            }
            result = FUN_004aa0b0(g_btlUiBlock, 0, 1, x, y, z);
            break;
        case 3:
            result = FUN_004aa0b0(g_btlUiBlock, 3, 1, x, y, z);
            break;
        case 4:
            result = FUN_004aa0b0(g_btlUiBlock, 2, 1, x, y, z);
            break;
        default:
            step->done = 0;
            return;
        }
    } else {
        if (((MASK64(0x10) | MASK64(0x20) | MASK64(0x30)) & side->flags) == 0) {
            step->done = 0;
            return;
        }
        s32 id = side->markerId;
        if ((side->flags & MASK64(0x30)) != 0) id = 4;
        s16 x = (s16)(s32)step->actor->position.x;
        s16 y = (s16)(s32)step->actor->position.y;
        switch (step->kind) {
        case 1:
            result = FUN_004aace8(g_btlUiBlock, id, 1, x, y);
            break;
        case 2:
            if (step->doubled != 0) {
                result = FUN_004aace8(g_btlUiBlock, id, 0, x, y);
                step->handle = result;
                FUN_004aace8(g_btlUiBlock, id, 1, (s16)(x - 22), (s16)(y - 13));
                step->phase = 1;
                step->done = 1;
                return;
            }
            result = FUN_004aace8(g_btlUiBlock, id, 0, x, y);
            break;
        case 3:
            result = FUN_004aace8(g_btlUiBlock, id, 3, x, y);
            break;
        case 4:
            result = FUN_004aace8(g_btlUiBlock, id, 2, x, y);
            break;
        default:
            step->done = 0;
            return;
        }
    }
    step->handle = result;
    step->phase = 1;
    step->done = 1;
}

} /* extern "C" */
