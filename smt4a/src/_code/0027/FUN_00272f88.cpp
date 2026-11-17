#include "common.h"
#include "game/GameStateA.h"
#include "map/MapEnemyGlobal.h"

extern "C" {

/* Clears the shared game state counters and resets every eligible map enemy entry. */
void FUN_00272f88(void)
{
    s32 index;
    MapEnemyA *collection = g_mapEnemy;
    const f32 resetValue = 0.0f;
    g_gameState.unk1B0 = 0;
    g_gameState.unk1B4 = resetValue;
    g_gameState.unk1B8 = resetValue;
    g_gameState.unk1BC = resetValue;
    g_gameState.unk1C0 = resetValue;
    g_gameState.unk1C8 = 0;
    g_gameState.unk1CC = 0;
    g_gameState.unk1CD = 0;
    g_gameState.unk1CE = 0;
    g_gameState.unk1D4 = 0;
    g_gameState.unk1D8 = 0;
    g_gameState.unk1DC = resetValue;
    g_gameState.unk1E0 = resetValue;
    g_gameState.unk1E4 = resetValue;
    g_gameState.unk1E8 = resetValue;

    for (index = 0; index < MAP_ENEMY_COUNT_A; ++index) {
        MapEnemyEntryA &entry = collection->entries[index];
        if (entry.active != 0 && entry.kind != 0 &&
            entry.kind < 11 && entry.locked == 0 &&
            entry.state == 16) {
            --collection->activeCount;
            entry.state = 11;
            entry.elapsed = 0;
        }
    }
}
}
