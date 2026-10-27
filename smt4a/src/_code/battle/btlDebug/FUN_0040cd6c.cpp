/* NON_MATCHING: readable rewrite (322 vs 321 rows, every call, constant and branch matches); retail keeps the position in s17/s18/s16 and adds the constant offset through s0-s2 before moving it back, builds the kind 0/2 and 1/3 chains as `cmp; moveq r2; beq` blocks (the build fuses them into cmpne pairs), and orders the 64-bit mask loads differently. */
#include "common.h"
#include "battle/BtlMainAccess.h"

struct Vec3 {
    f32 x;
    f32 y;
    f32 z;
};

static __inline void addVec3(Vec3 &target, const Vec3 &offset)
{
    target.x += offset.x;
    target.y += offset.y;
    target.z += offset.z;
}

// A battle side as seen by the effect step: flags, a drift vector, its slot id and its selection index.
struct BtlSide {
    u64 flags;                  // 0x00
    u8 unk08[0x30 - 8];
    Vec3 drift;                 // 0x30
    u8 unk3c[0x6a - 0x3c];
    s16 slotId;                 // 0x6a
    u8 unk6c[2];
    s16 selectionIndex;         // 0x6e
};

// The effect step's work block.
struct EffectStep {
    u8 unk00[2];
    u16 result;                 // 0x02 1: still running, 0: finished
    u8 unk04;
    u8 flags;                   // 0x05 bit 4: set once the first request is queued
    u8 unk06[0xe];
    BtlSide *side;              // 0x14
    u8 unk18[4];
    u32 secondId;               // 0x1c
    s8 phase;                   // 0x20
    u8 unk21;
    u8 compact;                 // 0x22
    u8 unk23;
    s16 count;                  // 0x24
    s16 handle;                 // 0x26
    s32 kind;                   // 0x28
    u8 unk2c[0x18];
    u8 emphasised;              // 0x44
    u8 unk45[7];
    u32 firstId;                // 0x4c
};

extern "C" {
extern u32 g_btlUiBlock;
extern u8 g_btlActionReflect[];
extern s16 DAT_0057a664[];
extern const Vec3 DAT_005e1c2c;

BtlSide *FUN_003f0e20(void *main, s32 index);
Vec3 FUN_003e7fa4(void *main, s32 index, s32 arg);
s32 randBetween(s32 minimum, s32 maximum);
u32 FUN_004a94a8(u32 block, s32 bank);
u32 FUN_004a9588(u32 block, u32 value, u8 first, u8 second, s32 enabled, u8 mode, f32 x, f32 y, f32 z);
u32 FUN_004a9f00(u32 block, s32 category, u32 text, u32 color, u32 style, u32 value, s32 x, s32 y);

#define MASK64(offset) (*reinterpret_cast<u64 *>(g_btlActionReflect + (offset)))

// One step of the debug effect: the first call places the request(s) at the side (with a random drift while it is
// being struck), later calls wait for the UI to finish with it. `result` tells the caller whether to call again.
void FUN_0040cd6c(u32 unused, EffectStep *step)
{
    void *main = btlGetMainState();
    BtlSide *side = FUN_003f0e20(main, step->side->slotId);
    if (side == NULL) {
        step->result = 0;
        return;
    }
    if (step->phase == 0) {
    if ((side->flags & MASK64(0x28)) != 0) {
        Vec3 position = FUN_003e7fa4(main, step->side->slotId, 0);
        if (step->count > 0) {
            if ((side->flags & MASK64(0x40)) != 0) {
                step->side->drift.x = (f32)randBetween(DAT_0057a664[4], DAT_0057a664[5]) * 0.01f;
                step->side->drift.y = (f32)randBetween(DAT_0057a664[6], DAT_0057a664[7]) * 0.01f;
                step->side->drift.z = 0.0f;
            } else {
                step->side->drift.x = (f32)randBetween(DAT_0057a664[0], DAT_0057a664[1]) * 0.01f;
                step->side->drift.y = (f32)randBetween(DAT_0057a664[2], DAT_0057a664[3]) * 0.01f;
                step->side->drift.z = 0.0f;
            }
            position.x += step->side->drift.x;
            position.y += step->side->drift.y;
            position.z += step->side->drift.z;
        }
        addVec3(position, DAT_005e1c2c);
        s32 kind = step->kind;
        if (kind == 0 || kind == 2) {
            step->handle = FUN_004a9588(g_btlUiBlock, step->firstId, kind == 2, 0, step->emphasised != 0, 1, position.x, position.y, position.z);
        } else if (kind == 1 || kind == 3) {
            step->handle = FUN_004a9588(g_btlUiBlock, step->firstId, kind == 3, 1, step->emphasised != 0, 1, position.x, position.y, position.z);
        } else if (kind == 4 || kind == 5) {
            u8 enabled = kind == 5;
            step->handle = FUN_004a9588(g_btlUiBlock, step->firstId, enabled, 0, step->emphasised != 0, 1, position.x, position.y, position.z);
            step->handle = FUN_004a9588(g_btlUiBlock, step->secondId, enabled, 1, step->emphasised != 0, 1, position.x, position.y, position.z);
        } else {
            step->result = 0;
            return;
        }
    } else {
        if (((MASK64(0x10) | MASK64(0x20) | MASK64(0x30)) & side->flags) == 0) {
            step->result = 0;
            return;
        }
        s32 category = side->selectionIndex;
        if ((side->flags & MASK64(0x30)) != 0) {
            category = 4;
        }
        s32 x = 0;
        s32 y = 0;
        if (step->count > 0) {
            if (category != 4) {
                x = (s16)randBetween(DAT_0057a664[8], DAT_0057a664[9]);
                y = (s16)randBetween(DAT_0057a664[10], DAT_0057a664[11]);
            } else {
                x = (s16)randBetween(DAT_0057a664[12], DAT_0057a664[13]);
                y = (s16)randBetween(DAT_0057a664[14], DAT_0057a664[15]);
            }
            step->side->drift.x = (f32)x;
            step->side->drift.y = (f32)y;
        }
        s32 kind = step->kind;
        if (kind == 0 || kind == 2) {
            step->handle = FUN_004a9f00(g_btlUiBlock, category, step->firstId, kind == 2, 0, step->emphasised != 0, x, y);
        } else if (kind == 1 || kind == 3) {
            step->handle = FUN_004a9f00(g_btlUiBlock, category, step->firstId, kind == 3, 1, step->emphasised != 0, x, y);
        } else if (kind == 4 || kind == 5) {
            u32 color = kind == 5;
            step->handle = FUN_004a9f00(g_btlUiBlock, category, step->firstId, color, 0, step->emphasised != 0, x, y);
            step->handle = FUN_004a9f00(g_btlUiBlock, category, step->secondId, color, 1, step->emphasised != 0, x, y);
        } else {
            step->result = 0;
            return;
        }
        if (step->compact == 0) {
            step->flags |= 4;
        }
    }
    step->phase = 1;
    } else if (step->phase == 1) {
        if (step->handle < 0 || FUN_004a94a8(g_btlUiBlock, step->handle) == 0) {
            step->result = 0;
            return;
        }
    }
    step->result = 1;
}

} /* extern "C" */
