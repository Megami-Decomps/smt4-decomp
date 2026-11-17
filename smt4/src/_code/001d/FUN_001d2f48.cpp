#include "common.h"
#include "game/GameState.h"
#include "map/MapEnemyGlobal.h"

extern "C" {

/* Clears departure interpolation and cancels eligible active enemy states. */
void FUN_001d2f48(void)
{
    s32 index;
    MapEnemy *table = g_mapEnemy;
    const f32 resetValue = 0.0f;
    g_gameState.event.encounterSourceActive = 0;
    g_gameState.event.encounterSourcePosition.x = resetValue;
    g_gameState.event.encounterSourcePosition.y = resetValue;
    g_gameState.event.encounterSourcePosition.z = resetValue;
    g_gameState.event.encounterSourceHeading = resetValue;
    g_gameState.event.encounterDelay = 0;
    g_gameState.event.encounterForced = 0;
    g_gameState.event.encounterApproach = 0;
    g_gameState.event.encounterBackAttack = 0;
    g_gameState.event.encounterPending = 0;
    g_gameState.event.encounterState = 0;
    g_gameState.event.encounterMarkerPosition.x = resetValue;
    g_gameState.event.encounterMarkerPosition.y = resetValue;
    g_gameState.event.encounterMarkerPosition.z = resetValue;
    g_gameState.event.encounterMarkerHeading = resetValue;

    for (index = 0; index < MAP_ENEMY_COUNT; ++index) {
        MapEnemyEntry &enemy = table->entries[index];
        if (enemy.active != 0 && enemy.kind != 0 && enemy.kind < 11 &&
            enemy.locked == 0 && enemy.state == 16) {
            --table->activeCount;
            enemy.state = 11;
            enemy.elapsed = 0;
        }
    }
}

} /* extern "C" */
