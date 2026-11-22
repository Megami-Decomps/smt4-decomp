/* NON_MATCHING: 145 lines. The camera depth is the offset's z over 120 / tan(half the field of view) as in Apocalypse's
 * FUN_00411e8c, the delay is a random frame below the animation track's last frame, and the fixed-colour tint drops
 * its low byte. Remaining: retail keeps the unit in r6 and the defaults block in r8 (here r7/r9, with two more saved
 * registers), lays out the camera-kind chains differently and keeps the three angle factors unfolded. */
#include "common.h"
#include "code/Code0027.h"
#include "gamedata/NkmEnemyLookup.h"
#include "battle/BtlGlobals.h"
#include "classes/Obj4209d8.h"

/* One unit action's camera/timing record. */
struct BtlUnitAction {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ f32 offsetX;         /* camera offset, cleared when the action starts */
    /* 0x10 */ f32 offsetY;
    /* 0x14 */ f32 offsetZ;
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

#define ACTION_FLAG_FIXED_COLOR 0x8000
#define ACTION_FLAG_SKIP_CAMERA 0x10
#define ACTION_FLAG_ACTIVE 0x2

extern "C" {
extern Obj4209d8ColorDefaults g_btlColorDefaults;

s32 idSetFindSubjectIndex(void *unit, BtlUnitAction *action);
s32 btlFindNthActiveSpecialEntry(void *unit, s32 arg);
f32 libm_tanf(f32 angle);
f32 asdAnimGetTrackLastFrame(u32 track, s32 index);
u16 randNextInRange(u32 maximum);

/* Starts an action on a battle unit: picks the camera kind and its speed, then the action's
 * delay and tint colours. */
void btlUnitActionStart(BtlMainState *unit, BtlUnitAction *action)
{
    u32 flags = action->flags | ACTION_FLAG_ACTIVE;
    action->flags = flags;
    if ((flags & ACTION_FLAG_SKIP_CAMERA) == 0) {
        if ((flags & ACTION_FLAG_FIXED_COLOR) == 0) {
            if (g_btlColorDefaults.cameraKindOverride < 0) {
                s8 unitKind = *((s8 *)unit + 0xE6);
                if (unitKind >= 0) {
                    if (unitKind == 0) {
                        action->cameraKind = 1;
                    } else if (unitKind == 1) {
                        action->cameraKind = 0;
                    } else if (unitKind == 2) {
                        action->cameraKind = 2;
                    }
                } else if (btlFindNthActiveSpecialEntry(unit, 1) >= 0) {
                    s32 slot = btlFindNthActiveSpecialEntry(unit, 1);
                    const NkmEnemyRecord *record = nkmEnemyFindById(unit->entries[slot].data.id);
                    if (record->arrangementFirst == 1 || record->arrangementFirst == 3) {
                        action->cameraKind = 1;
                    } else {
                        action->cameraKind = 0;
                    }
                } else {
                    action->cameraKind = 0;
                }
            } else if (g_btlColorDefaults.cameraKindOverride == 0) {
                action->cameraKind = 0;
            } else if (g_btlColorDefaults.cameraKindOverride == 1) {
                action->cameraKind = 1;
            } else if (g_btlColorDefaults.cameraKindOverride == 2) {
                action->cameraKind = 2;
            }
            action->offsetX = 0.0f;
            action->offsetY = 0.0f;
            action->offsetZ = 0.0f;

            BtlCamera *camera = g_btlMain;
            BtlCameraVector3 offset = camera->offset;
            s8 kind = action->cameraKind;
            f32 speed = 0.1f;
            f32 halfFov = camera->fov * 0.5f * 0.0055555557f * 3.1415927f;
            f32 depth = offset.z / (120.0f / libm_tanf(halfFov));
            if (kind == 0) {
                speed = depth;
            } else if (kind == 1) {
                speed = depth / camera->distance * (camera->distance - 15.0f);
            } else if (kind == 2) {
                speed = depth / camera->distance * (camera->distance - -20.0f);
            }
            action->cameraSpeed = speed;
        }
        action->color = g_btlColorDefaults.unmodulated;
        action->colorB = g_btlColorDefaults.unmodulated;
        s32 track = idSetFindSubjectIndex(unit, action);
        if (track < 0)
            track = 0;
        BtlUnitData *data = btlFindEntryBlockByMemberId(unit, action->animation);
        void *part = idSlotsFindEntryById(unit, data->parts[track]);
        action->delay = randNextInRange((u16)((s32)asdAnimGetTrackLastFrame((u32)part, 0) - 1));
    }
    if ((action->flags & ACTION_FLAG_FIXED_COLOR) != 0) {
        /* The tint without its low (blue) byte. */
        u32 tint = g_btlColorDefaults.unmodulated;
        u32 alpha = tint >> 24;
        u32 red = (tint & 0xFF0000) >> 16;
        u32 green = (tint & 0xFF00) >> 8;
        u32 opaque = (alpha << 24) + (red << 16) + (green << 8);
        action->color = opaque;
        action->colorD = tint;
        action->colorE = opaque;
        action->effectFlags |= 0x800;
    }
    action->alpha = 0xFF;
    u32 tint = g_btlColorDefaults.unmodulated;
    action->colorC = tint;
    action->colorF = tint;
    action->colorG = tint;
    action->flags2 = (action->flags2 & ~2u) | 4;
}

} /* extern "C" */
