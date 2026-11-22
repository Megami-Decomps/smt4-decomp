/* NON_MATCHING: the distance and heading calls take the points as by-value vectors, as retail moves them; remaining: register allocation (retail keeps the save block in r7 and g_gameState in r9), the target copy loaded with vldmia, and retail cross-jumps the forced and normal encounter tails into one return where this build keeps two. */
#include <stdio.h>
#include "gamedata/MapSaveBlock.h"
#include "map/MapEnemyGlobal.h"
#include "map/mapDepart.h"
#include "map/LmapGlobals.h"
#include <stddef.h>
#include "util/TrigF32.h"
#include "game/GameState.h"

extern "C" {
void gameCounterAddSaturating(u32 flag, s32 value);
void sequenceRequestDefer(s32 message, u32 argument);
void sequenceRequestClearDeferred();
void mapSetActiveEntryId(u32 result);
f32 mathDistanceBetweenPoints(MapVector from, MapVector to); // declcheck: local (util/MathFunctions.h declares six floats for its float callers; retail moves this caller's points as by-value vectors, as in mapSelectNearbyDeferredModel)
void FUN_00253860(MapEnemyEntry *enemy, s32 state);
f32 mathPositionHeadingDegrees(MapVector from, MapVector to); // declcheck: local (as util/MathFunctions.h, which this unit cannot include beside the by-value distance above)
f32 FUN_0027eee0(f32 first, f32 second);
}

static __inline void applyEnemyEncounter(MapEnemyEntry *enemy, MapSaveBlock *map, bool forced)
{
    if (!enemy->eventEnabled)
        return;
    if (g_gameState.encounterChangeMapId)
        map->mapId = static_cast<s16>(enemy->mapId);
    if (!forced || enemy->message > 0) {
        if (enemy->scriptMode) {
            g_gameState.event.scriptPending = 1;
            g_gameState.event.scriptId = enemy->message;
            sprintf(g_gameState.event.scriptName, "e%03d_%02d", enemy->message, enemy->messageArgument);
        } else if (enemy->message != 0) {
            sequenceRequestDefer(enemy->message, enemy->messageArgument);
        }
    } else {
        sequenceRequestClearDeferred();
    }
    mapSetActiveEntryId(enemy->result);
    if (enemy->count > 0) {
        g_gameState.event.encounterCount = enemy->count;
        g_gameState.event.encounterValue = enemy->value;
    }
    if (enemy->hasMarker && map->markers[enemy->markerIndex].x) {
        g_gameState.event.encounterHasMarker = 1;
        g_gameState.event.encounterMarkerX = map->markers[enemy->markerIndex].x;
        g_gameState.event.encounterMarkerY = map->markers[enemy->markerIndex].y;
    }
}

// Resolve a delayed forced encounter or the first active enemy within the player's trigger range.
extern "C" u32 mapEnemyResolveEncounter()
{
    MapEnemy *enemies = g_mapEnemy;
    MapSaveBlock *map = gameGetMapBlock();
    if (g_gameState.encounterBlocked || enemies->state == 0)
        return ~0u;
    g_gameState.event.encounterCount = 0;
    g_gameState.event.encounterValue = 0;
    g_gameState.event.encounterHasMarker = 0;
    if (g_gameState.event.encounterDelay > 0) {
        --g_gameState.event.encounterDelay;
        if (g_gameState.event.encounterDelay == 1) {
            g_gameState.event.encounterForced = 1;
            MapEnemyEntry *enemy = &enemies->entries[g_gameState.event.encounterEnemyIndex];
            gameCounterAddSaturating(21, 1);
            applyEnemyEncounter(enemy, map, true);
            return enemy->result;
        }
        return ~0u;
    }
    for (s32 i = 0; i < MAP_ENEMY_COUNT; ++i) {
        MapEnemyEntry *enemy = &enemies->entries[i];
        if (!enemy->active || !enemy->registered || enemy->state == 19 ||
            (enemy->state == 3 && enemy->elapsed < 20) || enemy->behavior == 6)
            continue;
        MapVector target = enemy->position;
        if (mathDistanceBetweenPoints(g_lmapScene->pose.position, target) >= 60.0f) {
            if ((enemy->kind != 6 && enemy->kind != 16) || enemy->behavior != 4)
                continue;
            /* A charging enemy also triggers from 100 units ahead of it. */
            MapVector ahead = enemy->position;
            ahead.x += libm_sinf(enemy->heading * 0.017453292f) * 100.0f;
            ahead.z += libm_cosf(enemy->heading * 0.017453292f) * 100.0f;
            if (mathDistanceBetweenPoints(g_lmapScene->pose.position, ahead) >= 60.0f)
                continue;
        }
        g_gameState.event.encounterApproach = 0;
        FUN_00253860(enemy, 2);
        f32 direction = mathPositionHeadingDegrees(g_lmapScene->pose.position, target);
        if (FUN_0027eee0(g_lmapScene->pose.heading, direction) > 120.0f)
            g_gameState.event.encounterBackAttack = 1;
        applyEnemyEncounter(enemy, map, false);
        return enemy->result;
    }
    return ~0u;
}
