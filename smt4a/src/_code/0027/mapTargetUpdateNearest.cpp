/* NON_MATCHING: retail copies the position's y and z into s20/s22 at entry and x into s21 only after the
 * early returns (built: all three after them, as s20-s22), and sets the target index (mov r4, r6) before the
 * hasTarget store rather than after the branch */
#include "common.h"
#include "game/GameStateA.h"
#include "map/LmapGlobals.h"
#include "map/MapVector.h"
#include "map/MapNpc.h"
#include "gamedata/DataTableAccess_Smt4a.h"
#include "code/Code0027_Smt4a.h"
#include "shard/W6_W6Match1_PositionedStream.h"

extern "C" {

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

    if (g_mapNpcWork->disabled != 0)
        return;
    g_mapNpcWork->hasTarget = 0;
    if (g_gameState.inputBlocked != 0)
        return;

    for (s32 i = 0; i < MAP_NPC_COUNT; i++) {
        if (g_mapNpcWork->npcs[i].active != 0 && g_mapNpcWork->npcs[i].kind != MAP_NPC_KIND_IGNORED) {
            if (g_mapNpcWork->npcs[i].kind == MAP_NPC_KIND_WIDE_TRIGGER) {
                nearLimit = MAP_TARGET_WIDE_NEAR_LIMIT;
                angleLimit = MAP_TARGET_WIDE_ANGLE_LIMIT;
            }
            f32 distance = distSpatial(position, g_mapNpcWork->npcs[i].position);
            if (distance < nearLimit) {
                f32 angle = mathAbsHeadingErrorToPoint(position, heading, g_mapNpcWork->npcs[i].position);
                if (angle < angleLimit && (best == -1 || distance < bestDistance)) {
                    best = i;
                    bestDistance = distance;
                }
            }
        }
    }

    if (best != -1 || g_mapNpcWork->holdFrames > 0) {
        g_mapNpcWork->hasTarget = 1;
        s32 index = best != -1 ? best : g_mapNpcWork->lastTarget;
        if (best != -1) {
            g_mapNpcWork->holdFrames = MAP_TARGET_HOLD_FRAMES;
            g_mapNpcWork->lastTarget = best;
        }
        g_mapNpcWork->target = index;
        g_mapNpcWork->targetModelId = g_mapNpcWork->npcs[index].modelId;
        MapNpcRecord *entry = (MapNpcRecord *)dataTable2aGetEntryWithAoc(g_mapNpcWork->npcs[index].tableIndex);
        const char *text = entry->text;
        if (text != NULL && !(text[0] == '0' && text[1] == 0)) {
            f32 angle = mathAbsHeadingErrorToPoint(g_mapNpcWork->npcs[index].position,
                                                   g_mapNpcWork->npcs[index].heading,
                                                   g_lmapScene->pose.position);
            if (angle >= MAP_TARGET_NEAR_ICON_ANGLE)
                g_gameState.targetIconNear = 0;
            else
                g_gameState.targetIconNear = 1;
            FUN_00234044(1, index);
            libc_strcpy(g_mapNpcWork->text, entry->text);
            g_mapNpcWork->icon = entry->icon;
        } else {
            g_mapNpcWork->text[0] = 0;
            g_mapNpcWork->text[1] = 0;
        }
    }
    if (g_mapNpcWork->holdFrames > 0) {
        g_mapNpcWork->holdFrames--;
    } else {
        g_mapNpcWork->holdFrames = 0;
        g_mapNpcWork->lastTarget = -1;
    }
    if (g_mapNpcWork->hasTarget == 0 && g_mapNpcWork->holdFrames <= 0)
        FUN_00234044(0, 0);
}

} /* extern "C" */
