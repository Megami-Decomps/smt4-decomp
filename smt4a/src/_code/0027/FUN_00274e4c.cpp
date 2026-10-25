/* NON_MATCHING: nearest map interaction target; retail keeps the arguments in s21/s20/s22 and the work global in r7 (built s20/s22/s21, r8) and reloads the hold counter before testing it */
#include "common.h"

#define MAP_TARGET_COUNT 0x40

struct MapTargetPosition {
    f32 x, y, z;
};

/* One interaction target of the map (0x3C bytes). */
struct MapTarget {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u8 active;
    /* 0x0D */ u8 unk0D[3];
    /* 0x10 */ s16 kind;           /* 2: wide trigger, 4: ignored */
    /* 0x12 */ s16 hintId;
    /* 0x14 */ s16 textId;
    /* 0x16 */ u8 unk16[6];
    /* 0x1C */ MapTargetPosition position;
    /* 0x28 */ f32 heading;
    /* 0x2C */ u8 unk2C[0x10];
};

struct MapTargetText {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 icon;
    /* 0x0C */ char text[1];
};

struct MapTargetWork {
    /* 0x0000 */ MapTarget targets[MAP_TARGET_COUNT];
    /* 0x0F00 */ u8 unk0F00[0xC];
    /* 0x0F0C */ u8 hasTarget;
    /* 0x0F0D */ u8 unk0F0D[3];
    /* 0x0F10 */ s32 target;
    /* 0x0F14 */ s32 hintId;
    /* 0x0F18 */ u8 unk0F18[4];
    /* 0x0F1C */ u32 icon;
    /* 0x0F20 */ char text[0x20];
    /* 0x0F40 */ u8 disabled;
    /* 0x0F41 */ u8 unk0F41[0xB];
    /* 0x0F4C */ s32 holdFrames;
    /* 0x0F50 */ s32 lastTarget;
};

struct MapGameStateView {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s8 blocked;
    /* 0x19 */ u8 unk19[3];
    /* 0x1C */ MapTargetPosition position;
};

extern "C" {
extern MapTargetWork *DAT_00581280;
extern MapGameStateView g_gameState;
extern u8 DAT_005f1724;

f32 distSpatial(MapTargetPosition from, MapTargetPosition to);
f32 mathAbsHeadingErrorToPoint(f32 x, f32 y, f32 z, f32 heading, MapTargetPosition to);
void FUN_00234044(s32 show, s32 target);
MapTargetText *dataTable2aGetEntryWithAoc(s32 id);
char *libc_strcpy(char *destination, const char *source);

#define MAP_TARGET_NEAR_LIMIT 180.0f
#define MAP_TARGET_ANGLE_LIMIT 80.0f
#define MAP_TARGET_WIDE_NEAR_LIMIT 290.0f
#define MAP_TARGET_WIDE_ANGLE_LIMIT 60.0f
#define MAP_TARGET_HOLD_FRAMES 0x14
#define MAP_TARGET_NEAR_ICON_DISTANCE 110.0f

/* Picks the nearest interaction target the player at (x, y, z) faces and keeps its hint on
 * screen for a few frames after the player leaves it. */
void FUN_00274e4c(f32 x, f32 y, f32 z, f32 heading)
{
    s32 best = -1;
    f32 bestDistance = 0.0f;
    f32 nearLimit = MAP_TARGET_NEAR_LIMIT;
    f32 angleLimit = MAP_TARGET_ANGLE_LIMIT;
    MapTargetPosition player = {x, y, z};

    if (DAT_00581280->disabled != 0)
        return;
    DAT_00581280->hasTarget = 0;
    if (g_gameState.blocked != 0)
        return;

    for (s32 i = 0; i < MAP_TARGET_COUNT; i++) {
        MapTarget *target = &DAT_00581280->targets[i];
        if (target->active != 0 && target->kind != 4) {
            if (target->kind == 2) {
                nearLimit = MAP_TARGET_WIDE_NEAR_LIMIT;
                angleLimit = MAP_TARGET_WIDE_ANGLE_LIMIT;
            }
            f32 distance = distSpatial(player, target->position);
            if (distance < nearLimit) {
                f32 angle = mathAbsHeadingErrorToPoint(x, y, z, heading, DAT_00581280->targets[i].position);
                if (angle < angleLimit && (best == -1 || distance < bestDistance)) {
                    best = i;
                    bestDistance = distance;
                }
            }
        }
    }

    MapTargetWork *work = DAT_00581280;
    if (best != -1 || work->holdFrames > 0) {
        work->hasTarget = 1;
        if (best == -1) {
            best = work->lastTarget;
        } else {
            work->holdFrames = MAP_TARGET_HOLD_FRAMES;
            work->lastTarget = best;
        }
        work->target = best;
        work->hintId = work->targets[best].hintId;
        MapTargetText *entry = dataTable2aGetEntryWithAoc(work->targets[best].textId);
        work = DAT_00581280;
        char *text = entry != NULL ? entry->text : NULL;
        if (text != NULL && !(text[0] == '0' && entry->text[1] == 0)) {
            f32 near = mathAbsHeadingErrorToPoint(work->targets[best].position.x, work->targets[best].position.y,
                                    work->targets[best].position.z, work->targets[best].heading,
                                    g_gameState.position);
            DAT_005f1724 = near < MAP_TARGET_NEAR_ICON_DISTANCE;
            FUN_00234044(1, best);
            libc_strcpy(DAT_00581280->text, text);
            DAT_00581280->icon = entry->icon;
        } else {
            work->text[0] = 0;
            work->text[1] = 0;
        }
        if (DAT_00581280->holdFrames > 0) {
            DAT_00581280->holdFrames--;
            if (DAT_00581280->hasTarget == 0 && DAT_00581280->holdFrames < 1)
                FUN_00234044(0, 0);
            return;
        }
    }
    DAT_00581280->holdFrames = 0;
    DAT_00581280->lastTarget = -1;
    if (DAT_00581280->hasTarget == 0 && DAT_00581280->holdFrames < 1)
        FUN_00234044(0, 0);
}

} /* extern "C" */
