/* NON_MATCHING: encounter-state address formation and the inlined forced/normal dispatch blocks have different register allocation and branch placement from retail. */
#include "map/mapEnemy.h"
#include "map/mapDepart.h"
#include "map/lmapMain.h"
#include <stddef.h>

struct EnemyEncounterMarker {
    s8 x, y;
    u8 unk02[18];
};
struct EnemyEncounterMap {
    u8 unk0000[0x22];
    s16 mapId; // 0x22
    u8 unk0024[0xf06];
    EnemyEncounterMarker markers[1]; // 0xf2a
};
typedef char CheckEnemyEncounterSize[sizeof(MapEnemyEncounterView) == 0x180 ? 1 : -1];
typedef char CheckEncounterDelayOffset[offsetof(GameState, encounterDelay) == 0x194 ? 1 : -1];
typedef char CheckEncounterBlockedOffset[offsetof(GameState, encounterBlocked) == 0x364 ? 1 : -1];
typedef char CheckSceneStateSize[sizeof(GameState) == 0x678 ? 1 : -1];

extern "C" {
extern MapEnemy *g_mapEnemy;
extern GameState g_gameState;
extern LmapScene *g_lmapScene;
EnemyEncounterMap *gameGetMapBlock();
void gameCounterAddSaturating(u32 flag, s32 value);
void textFormatBuffer(char *output, const char *format, ...);
void sequenceRequestDefer(s32 message, u32 argument);
void sequenceRequestClearDeferred();
void FUN_0027d8b4(u32 result);
f32 mathDistanceBetweenPoints(f32 x1, f32 y1, f32 z1, f32 x2, f32 y2, f32 z2);
f32 FUN_0028250c(f32 angle);
f32 FUN_00282390(f32 angle);
void FUN_00253860(MapEnemyEncounterView *enemy, s32 state);
f32 mathPositionHeadingDegrees(f32 x1, f32 y1, f32 z1, f32 x2, f32 y2, f32 z2);
f32 FUN_0027eee0(f32 first, f32 second);
}

static __inline void applyEnemyEncounter(MapEnemyEncounterView *enemy, EnemyEncounterMap *map, bool forced)
{
    if (!enemy->eventEnabled)
        return;
    if (g_gameState.encounterChangeMapId)
        map->mapId = static_cast<s16>(enemy->mapId);
    if ((!forced || enemy->message > 0) && enemy->scriptMode) {
        g_gameState.scriptPending = 1;
        g_gameState.scriptId = enemy->message;
        textFormatBuffer(g_gameState.scriptName, "e%03d_%02d", enemy->message, enemy->messageArgument);
    } else if (forced ? enemy->message > 0 : enemy->message != 0) {
        sequenceRequestDefer(enemy->message, enemy->messageArgument);
    } else if (forced) {
        sequenceRequestClearDeferred();
    }
    FUN_0027d8b4(enemy->result);
    if (enemy->count > 0) {
        g_gameState.encounterCount = enemy->count;
        g_gameState.encounterValue = enemy->value;
    }
    if (enemy->hasMarker && map->markers[enemy->markerIndex].x) {
        g_gameState.encounterHasMarker = 1;
        g_gameState.encounterMarkerX = map->markers[enemy->markerIndex].x;
        g_gameState.encounterMarkerY = map->markers[enemy->markerIndex].y;
    }
}

// Resolve a delayed forced encounter or the first active enemy within the player's trigger range.
extern "C" u32 FUN_002d2b40()
{
    MapEnemy *enemies = g_mapEnemy;
    EnemyEncounterMap *map = gameGetMapBlock();
    if (g_gameState.encounterBlocked || enemies->controller.state == 0)
        return ~0u;
    g_gameState.encounterCount = 0;
    g_gameState.encounterValue = 0;
    g_gameState.encounterHasMarker = 0;
    if (g_gameState.encounterDelay > 0) {
        --g_gameState.encounterDelay;
        if (g_gameState.encounterDelay == 1) {
            g_gameState.encounterForced = 1;
            MapEnemyEncounterView *enemy = reinterpret_cast<MapEnemyEncounterView *>(&enemies->entries[g_gameState.encounterEnemyIndex]);
            gameCounterAddSaturating(21, 1);
            applyEnemyEncounter(enemy, map, true);
            return enemy->result;
        }
        return ~0u;
    }
    for (s32 i = 0; i < MAP_ENEMY_COUNT; ++i) {
        MapEnemyEncounterView *enemy = reinterpret_cast<MapEnemyEncounterView *>(&enemies->entries[i]);
        if (!enemy->active || !enemy->registered || enemy->state == 19 ||
            (enemy->state == 3 && enemy->elapsed < 20) || enemy->behavior == 6)
            continue;
        f32 x = enemy->x;
        f32 y = enemy->y;
        f32 z = enemy->z;
        MapVector player = {g_lmapScene->transform.position[0], g_lmapScene->transform.position[1], g_lmapScene->transform.position[2]};
        if (mathDistanceBetweenPoints(player.x, player.y, player.z, x, y, z) >= 60.0f) {
            if ((enemy->kind != 6 && enemy->kind != 16) || enemy->behavior != 4)
                continue;
            MapVector ahead;
            ahead.x = enemy->x;
            ahead.y = enemy->y;
            ahead.z = enemy->z;
            ahead.x += FUN_0028250c(enemy->heading * 0.017453292f) * 100.0f;
            ahead.z += FUN_00282390(enemy->heading * 0.017453292f) * 100.0f;
            player.x = g_lmapScene->transform.position[0];
            player.y = g_lmapScene->transform.position[1];
            player.z = g_lmapScene->transform.position[2];
            if (mathDistanceBetweenPoints(player.x, player.y, player.z, ahead.x, ahead.y, ahead.z) >= 60.0f)
                continue;
        }
        g_gameState.encounterApproach = 0;
        FUN_00253860(enemy, 2);
        player.x = g_lmapScene->transform.position[0];
        player.y = g_lmapScene->transform.position[1];
        player.z = g_lmapScene->transform.position[2];
        f32 direction = mathPositionHeadingDegrees(player.x, player.y, player.z, x, y, z);
        if (FUN_0027eee0(g_lmapScene->transform.headingDegrees, direction) > 120.0f)
            g_gameState.encounterBackAttack = 1;
        applyEnemyEncounter(enemy, map, false);
        return enemy->result;
    }
    return ~0u;
}
