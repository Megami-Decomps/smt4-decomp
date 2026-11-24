/* NON_MATCHING: retail computes the kind-2 marker position into s0-s2 and copies it to s16-s18 for the second call (the build adds straight into s16-s18), and loads the marker id unconditionally before the mask test (the build predicates it) */
#include "common.h"
#include "battle/BtlMainAccess.h"
#include "battle/BtlUiGlobal.h"

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
    s16 done;                   // 0x02
    u8 unk04[0x10];
    BtlSide* actor;             // 0x14
    u8 unk18[8];
    s8 phase;                   // 0x20
    u8 unk21[5];
    s16 handle;                 // 0x26
    s32 kind;                   // 0x28
    u8 unk2c[0x1c];
    s16 doubled;                // 0x48
};

extern "C" {

extern u8 g_btlActionReflect[];
extern const Vec3 DAT_005e1c2c;

BtlSide* btlMainFindEntryByListedId(void* main, s32 index);
Vec3 btlGetCombatantDrawPosition(void* main, s32 index, s32 arg);
s16 btlUiPositionRequestAdd(BtlUiA *ui, s32 a, s32 b, f32 x, f32 y, f32 z);
s16 btlUiAddPositionedMarker(BtlUiA *ui, s32 id, s32 a, s32 x, s32 y);
s32 btlUiPositionMarkerIsBusy(BtlUiA *ui, s32 handle);

#define MASK64(offset) (*reinterpret_cast<u64*>(g_btlActionReflect + (offset)))

// Marker for the acting side: places the target marker above the side (or on the map) the
// first time, then waits for the marker handle to finish before reporting done.
void btlMarkerStepShow(u32 unused, MarkerStep* step)
{
    void* main = btlGetMainState();
    BtlSide* side = btlMainFindEntryByListedId(main, step->actor->index);
    if (side == NULL) {
        step->done = 0;
        return;
    }
    switch (step->phase) {
    case 0:
        if ((side->flags & MASK64(0x28)) != 0) {
            Vec3 position = btlGetCombatantDrawPosition(btlGetMainState(), step->actor->index, 0);
            position.x += step->actor->position.x;
            position.y += step->actor->position.y;
            position.z += step->actor->position.z;
            switch (step->kind) {
            case 1:
                position.x += DAT_005e1c2c.x;
                position.y += DAT_005e1c2c.y;
                position.z += DAT_005e1c2c.z;
                step->handle = btlUiPositionRequestAdd(g_btlUiBlock, 1, 1, position.x, position.y, position.z);
                break;
            case 2:
                position.x += DAT_005e1c2c.x;
                position.y += DAT_005e1c2c.y;
                position.z += DAT_005e1c2c.z;
                if (step->doubled != 0) {
                    step->handle = btlUiPositionRequestAdd(g_btlUiBlock, 0, 1, position.x, position.y, position.z);
                    btlUiPositionRequestAdd(g_btlUiBlock, 1, 1, position.x - 3.0f, position.y + 1.2f, position.z);
                } else {
                    step->handle = btlUiPositionRequestAdd(g_btlUiBlock, 0, 1, position.x, position.y, position.z);
                }
                break;
            case 3:
                step->handle = btlUiPositionRequestAdd(g_btlUiBlock, 3, 1, position.x, position.y, position.z);
                break;
            case 4:
                step->handle = btlUiPositionRequestAdd(g_btlUiBlock, 2, 1, position.x, position.y, position.z);
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
            s32 id;
            if ((side->flags & MASK64(0x30)) != 0)
                id = 4;
            else
                id = side->markerId;
            s16 x = (s16)(s32)step->actor->position.x;
            s16 y = (s16)(s32)step->actor->position.y;
            switch (step->kind) {
            case 1:
                step->handle = btlUiAddPositionedMarker(g_btlUiBlock, id, 1, x, y);
                break;
            case 2:
                if (step->doubled != 0) {
                    step->handle = btlUiAddPositionedMarker(g_btlUiBlock, id, 0, x, y);
                    btlUiAddPositionedMarker(g_btlUiBlock, id, 1, (s16)(x - 22), (s16)(y - 13));
                } else {
                    step->handle = btlUiAddPositionedMarker(g_btlUiBlock, id, 0, x, y);
                }
                break;
            case 3:
                step->handle = btlUiAddPositionedMarker(g_btlUiBlock, id, 3, x, y);
                break;
            case 4:
                step->handle = btlUiAddPositionedMarker(g_btlUiBlock, id, 2, x, y);
                break;
            default:
                step->done = 0;
                return;
            }
        }
        step->phase = 1;
        break;
    case 1:
        if (btlUiPositionMarkerIsBusy(g_btlUiBlock, step->handle) == 0) {
            step->done = 0;
            return;
        }
        break;
    }
    step->done = 1;
}

} /* extern "C" */
