#include "gamedata/EncounterSelection.h"
/* NON_MATCHING: 8 lines, two registers in the first of the two inlined spawn blocks: testing the slot's
 * registered flag retail takes r2 for the flag and r3 for the slot+0x100 base, the build r3 and r2 (as both
 * do in the second block). The spawn block is the state-setting switch arm calling one inline with the slot,
 * the area and the spawn index, like its sibling mapEnemyRebindModel(slot, id, kind). */
#include "common.h"
#include "game/GameStateA.h"
#include "gamedata/NkmEnemyLookup.h"
#include "Model/MoriModelManager.h"
#include "map/MapEnemyGlobal.h"
#include "Model/MoriModelContent.h"
#include "classes/Obj557b18.h"
#include "map/MapEnemySlotModel.h"

extern "C" {
}

/* Drops the slot's model and fills the slot from entry `index` of the spawn group `area` owns
 * (mapEnemyRebindModel does the same from a spawn table). */
static __inline void enemySlotSpawn(MapEnemyEntryA *slot, s32 area, u8 index)
{
    for (s32 i = 0; i < 16; i++) {
        MapEnemySpawnGroup *group = &g_mapEnemy->spawnGroups[i];
        if (group->owner == area) {
            mapEnemySlotUnregisterModel(slot);
            mapEnemySlotDropModel(slot);
            slot->result = group->encounterIds[index];
            slot->enemyId = group->enemyIds[index];
            slot->level = nkmEnemyFindById((u16)slot->enemyId)->level & 0x7fff;
            s32 variant = FUN_004bb870(slot->result);
            if (variant != 0) {
                slot->variant = (u8)variant;
            }
            slot->kind = group->kinds[index];
            break;
        }
    }
}

/* Assigns every idle enemy slot its next spawn entry for the current area. */
extern "C" void mapEnemyAssignSpawns(void)
{
    MapEnemyA *list = g_mapEnemy;
    s32 *spawnCount = &list->spawnIndex;
    list->spawnAttempts = 0;
    for (s32 i = 0; i < MAP_ENEMY_COUNT_A; i++) {
        MapEnemyEntryA *slot = &list->entries[i];
        if (slot->active != 0 && slot->kind != 0 && slot->kind < 11 && slot->locked == 0 &&
            *spawnCount < 16) {
            switch (slot->state) {
            case 0:
            case 4:
            case 5:
                slot->state = 0x14;
                slot->elapsed = 0;
                enemySlotSpawn(slot, g_gameState.selectionArea, *spawnCount & 0xff);
                ++*spawnCount;
                break;
            case 2:
                slot->state = 0x16;
                slot->elapsed = 0;
                enemySlotSpawn(slot, g_gameState.selectionArea, *spawnCount & 0xff);
                ++*spawnCount;
                break;
            }
        }
    }
}
