/* NON_MATCHING: retail copies the position's y and z into s20/s22 at entry and x into s21 only after the
 * early returns (built: all three after them, as s20-s22), and sets the target index (mov r4, r6) before the
 * hasTarget store rather than after the branch */
#include "common.h"
#include "game/GameStateA.h"
#include "map/LmapGlobals.h"
#include "map/MapVector.h"
#include "gamedata/DataTableAccess_Smt4a.h"
#include "code/Code0027_Smt4a.h"
#include "shard/W6_W6Match1_PositionedStream.h"

#define MAP_TARGET_COUNT 0x40

/* One interaction target of the map (0x3C bytes). */
struct MapTarget {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u8 active;
    /* 0x0D */ u8 unk0D[3];
    /* 0x10 */ s16 kind;           /* 2: wide trigger, 4: ignored */
    /* 0x12 */ s16 hintId;
    /* 0x14 */ s16 textId;
    /* 0x16 */ u8 unk16[6];
    /* 0x1C */ MapVector position;
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

extern "C" {
extern MapTargetWork *DAT_00581280;

void FUN_00234044(s32 show, s32 target);
char *libc_strcpy(char *destination, const char *source);

#define MAP_TARGET_NEAR_LIMIT 180.0f
#define MAP_TARGET_ANGLE_LIMIT 80.0f
#define MAP_TARGET_WIDE_NEAR_LIMIT 290.0f
#define MAP_TARGET_WIDE_ANGLE_LIMIT 60.0f
#define MAP_TARGET_HOLD_FRAMES 0x14
#define MAP_TARGET_NEAR_ICON_ANGLE 110.0f

/* Picks the nearest interaction target the player at position faces and keeps its hint on
 * screen for a few frames after the player leaves it. */
void mapTargetUpdateNearest(MapVector position, f32 heading)
{
    s32 best = -1;
    f32 bestDistance = 0.0f;
    f32 nearLimit = MAP_TARGET_NEAR_LIMIT;
    f32 angleLimit = MAP_TARGET_ANGLE_LIMIT;

    if (DAT_00581280->disabled != 0)
        return;
    DAT_00581280->hasTarget = 0;
    if (g_gameState.inputBlocked != 0)
        return;

    for (s32 i = 0; i < MAP_TARGET_COUNT; i++) {
        if (DAT_00581280->targets[i].active != 0 && DAT_00581280->targets[i].kind != 4) {
            if (DAT_00581280->targets[i].kind == 2) {
                nearLimit = MAP_TARGET_WIDE_NEAR_LIMIT;
                angleLimit = MAP_TARGET_WIDE_ANGLE_LIMIT;
            }
            f32 distance = distSpatial(position, DAT_00581280->targets[i].position);
            if (distance < nearLimit) {
                f32 angle = mathAbsHeadingErrorToPoint(position, heading, DAT_00581280->targets[i].position);
                if (angle < angleLimit && (best == -1 || distance < bestDistance)) {
                    best = i;
                    bestDistance = distance;
                }
            }
        }
    }

    if (best != -1 || DAT_00581280->holdFrames > 0) {
        DAT_00581280->hasTarget = 1;
        s32 index = best != -1 ? best : DAT_00581280->lastTarget;
        if (best != -1) {
            DAT_00581280->holdFrames = MAP_TARGET_HOLD_FRAMES;
            DAT_00581280->lastTarget = best;
        }
        DAT_00581280->target = index;
        DAT_00581280->hintId = DAT_00581280->targets[index].hintId;
        MapTargetText *entry = (MapTargetText *)dataTable2aGetEntryWithAoc(DAT_00581280->targets[index].textId);
        const char *text = entry->text;
        if (text != NULL && !(text[0] == '0' && text[1] == 0)) {
            f32 angle = mathAbsHeadingErrorToPoint(DAT_00581280->targets[index].position,
                                                   DAT_00581280->targets[index].heading,
                                                   g_lmapScene->pose.position);
            if (angle >= MAP_TARGET_NEAR_ICON_ANGLE)
                g_gameState.targetIconNear = 0;
            else
                g_gameState.targetIconNear = 1;
            FUN_00234044(1, index);
            libc_strcpy(DAT_00581280->text, entry->text);
            DAT_00581280->icon = entry->icon;
        } else {
            DAT_00581280->text[0] = 0;
            DAT_00581280->text[1] = 0;
        }
    }
    if (DAT_00581280->holdFrames > 0) {
        DAT_00581280->holdFrames--;
    } else {
        DAT_00581280->holdFrames = 0;
        DAT_00581280->lastTarget = -1;
    }
    if (DAT_00581280->hasTarget == 0 && DAT_00581280->holdFrames <= 0)
        FUN_00234044(0, 0);
}

} /* extern "C" */
