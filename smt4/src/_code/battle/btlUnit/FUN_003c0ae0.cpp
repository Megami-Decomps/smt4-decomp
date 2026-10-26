/* NON_MATCHING: battle unit action timing setup; float chain and the shared hit-type branch (retail jumps back into the first case) are written plainly and not compared with retail */
#include "common.h"
#include "util/FUN_0027d9e8.h"

/* The camera/animation parameters of the action camera, read from the battle main state. */
struct BtlCameraState {
    /* 0x000 */ u8 unk000[0x570];
    /* 0x570 */ f32 frameBase;
    /* 0x574 */ u8 unk574[0x34];
    /* 0x5A8 */ f32 fovDegrees;
};

struct BtlCameraStateB {
    /* 0x000 */ u8 unk000[0x598];
    /* 0x598 */ f32 distance;
};

/* One unit action's camera/timing record. */
struct BtlUnitAction {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u8 unk18[0x24];
    /* 0x3C */ s8 cameraKind;      /* 0: near, 1: mid, 2: far */
    /* 0x3D */ u8 unk3D[3];
    /* 0x40 */ f32 cameraSpeed;
    /* 0x44 */ u8 unk44[0x0C];
    /* 0x50 */ u32 flags;
    /* 0x54 */ u32 flags2;
    /* 0x58 */ u16 effectFlags;
    /* 0x5A */ u16 delay;
    /* 0x5C */ u8 unk5C[6];
    /* 0x62 */ s16 animation;
    /* 0x64 */ u32 color;
    /* 0x68 */ u32 colorB;
    /* 0x6C */ u32 colorC;
    /* 0x70 */ u8 unk70[0x10];
    /* 0x80 */ u32 alpha;
    /* 0x84 */ u32 colorD;
    /* 0x88 */ u32 colorE;
    /* 0x8C */ u32 colorF;
    /* 0x90 */ u32 colorG;
};

struct BtlUnitRecord {
    /* 0x00 */ u8 unk00[0x9E];
    /* 0x9E */ u8 attackType;
};

#define ACTION_FLAG_FIXED_COLOR 0x8000
#define ACTION_FLAG_SKIP_CAMERA 0x10
#define ACTION_FLAG_ACTIVE 0x2

extern "C" {
extern BtlCameraState *g_btlMain;
extern s32 DAT_00439ce8;     /* debug override of the camera kind, negative: none */
extern u32 DAT_00439cf8;     /* action tint colour */

void FUN_0027da30(void *unit, s32 animation);
s32 FUN_0027dab0(void *unit, BtlUnitAction *action);
s32 btlFindNthActiveSpecialEntry(void *unit, s32 arg);
f32 FUN_002881bc(void);
s32 asdAnimGetTrackLastFrame(u32 track, s32 index);
BtlUnitRecord *dataTable00FindById(u32 id);
u16 randNextInRange(u32 maximum);

/* Starts an action on a battle unit: picks the camera kind and its speed, then the action's
 * delay and tint colours. */
void FUN_003c0ae0(u8 *unit, BtlUnitAction *action)
{
    u32 flags = action->flags;
    action->flags = flags | ACTION_FLAG_ACTIVE;
    f32 frames = 0.0f;
    if ((flags & ACTION_FLAG_SKIP_CAMERA) == 0) {
        if ((flags & ACTION_FLAG_FIXED_COLOR) == 0) {
            if (DAT_00439ce8 < 0) {
                s8 unitKind = *(s8 *)(unit + 0xE6);
                if (unitKind >= 0) {
                    if (unitKind == 0)
                        action->cameraKind = 1;
                    else if (unitKind == 1)
                        action->cameraKind = 0;
                    else if (unitKind == 2)
                        action->cameraKind = 2;
                } else {
                    s32 slot = btlFindNthActiveSpecialEntry(unit, 1);
                    bool near = false;
                    if (slot >= 0) {
                        slot = btlFindNthActiveSpecialEntry(unit, 1);
                        u16 recordId = *(u16 *)(*(u8 **)(unit + 0x1FC0) + slot * 0x288 + 0xCE);
                        BtlUnitRecord *record = dataTable00FindById(recordId);
                        if (record->attackType == 1 || record->attackType == 3)
                            near = true;
                    }
                    action->cameraKind = near ? 1 : 0;
                }
            } else if (DAT_00439ce8 == 0) {
                action->cameraKind = 0;
            } else if (DAT_00439ce8 == 1) {
                action->cameraKind = 1;
            } else if (DAT_00439ce8 == 2) {
                action->cameraKind = 2;
            }
            action->unk0C = 0;
            action->unk10 = 0;
            action->unk14 = 0;

            BtlCameraState *camera = g_btlMain;
            frames = camera->frameBase;
            s8 kind = action->cameraKind;
            f32 fov = camera->fovDegrees * 0.5f * 0.0055555557f * 3.1415927f;
            FUN_002881bc();
            frames = frames / (120.0f / fov);
            f32 speed = frames;
            if (kind != 0) {
                if (kind == 1) {
                    f32 distance = ((BtlCameraStateB *)camera)->distance;
                    speed = frames / distance * (distance - 15.0f);
                } else {
                    speed = 0.1f;
                    if (kind == 2) {
                        f32 distance = ((BtlCameraStateB *)camera)->distance;
                        speed = frames / distance * (distance - -20.0f);
                    }
                }
            }
            action->cameraSpeed = speed;
        }
        action->color = DAT_00439cf8;
        action->colorB = DAT_00439cf8;
        s32 track = FUN_0027dab0(unit, action);
        if (track < 0)
            track = 0;
        FUN_0027da30(unit, action->animation);
        u32 trackId = (u32)FUN_0027d9e8(unit, *(u32 *)(unit + track * 4 + 0xC));
        asdAnimGetTrackLastFrame(trackId, 0);
        action->delay = randNextInRange(((s32)frames - 1U) & 0xFFFF);
    }
    u32 tint = DAT_00439cf8;
    if ((action->flags & ACTION_FLAG_FIXED_COLOR) != 0) {
        u32 packed = (tint & 0xFF000000) + (tint & 0xFF0000) + (tint & 0xFF00);
        action->color = packed;
        action->colorD = tint;
        action->colorE = packed;
        action->effectFlags |= 0x800;
    }
    action->alpha = 0xFF;
    tint = DAT_00439cf8;
    action->colorC = tint;
    action->colorF = tint;
    action->colorG = tint;
    action->flags2 = (action->flags2 & ~2u) | 4;
}

} /* extern "C" */
