/* NON_MATCHING: encounter-state address formation and the inlined forced/normal dispatch blocks have different register allocation and branch placement from retail. */
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
f32 mathDistanceBetweenPoints(f32 x1, f32 y1, f32 z1, f32 x2, f32 y2, f32 z2);
void FUN_00253860(MapEnemyEntry *enemy, s32 state);
f32 mathPositionHeadingDegrees(f32 x1, f32 y1, f32 z1, f32 x2, f32 y2, f32 z2);
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
extern "C" u32 FUN_002d2b40()
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
        f32 x = enemy->position.x;
        f32 y = enemy->position.y;
        f32 z = enemy->position.z;
        MapVector player = {g_lmapScene->pose.position.x, g_lmapScene->pose.position.y, g_lmapScene->pose.position.z};
        if (mathDistanceBetweenPoints(player.x, player.y, player.z, x, y, z) >= 60.0f) {
            if ((enemy->kind != 6 && enemy->kind != 16) || enemy->behavior != 4)
                continue;
            MapVector ahead;
            ahead.x = enemy->position.x;
            ahead.y = enemy->position.y;
            ahead.z = enemy->position.z;
            ahead.x += libm_sinf(enemy->heading * 0.017453292f) * 100.0f;
            ahead.z += libm_cosf(enemy->heading * 0.017453292f) * 100.0f;
            player.x = g_lmapScene->pose.position.x;
            player.y = g_lmapScene->pose.position.y;
            player.z = g_lmapScene->pose.position.z;
            if (mathDistanceBetweenPoints(player.x, player.y, player.z, ahead.x, ahead.y, ahead.z) >= 60.0f)
                continue;
        }
        g_gameState.event.encounterApproach = 0;
        FUN_00253860(enemy, 2);
        player.x = g_lmapScene->pose.position.x;
        player.y = g_lmapScene->pose.position.y;
        player.z = g_lmapScene->pose.position.z;
        f32 direction = mathPositionHeadingDegrees(player.x, player.y, player.z, x, y, z);
        if (FUN_0027eee0(g_lmapScene->pose.heading, direction) > 120.0f)
            g_gameState.event.encounterBackAttack = 1;
        applyEnemyEncounter(enemy, map, false);
        return enemy->result;
    }
    return ~0u;
}
