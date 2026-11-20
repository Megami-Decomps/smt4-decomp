/* NON_MATCHING: The enemy-filter owner address is loaded after the table count instead of before the initial lookup. */
#include "map/EnemyTableFilter.h"
#include "map/MapEnemyGlobal.h"
#include "game/GameStateA.h"
#include "map/mapDepart.h"

extern "C" {
extern u32 DAT_005f2c20[256];
EnemyTableLocation *fieldFindAreaPlacementRecord(s32 index);
s32 dataTableGetRecordFortyOne(void);
void sysMemClear(void *memory, u32 size);

/* Rebuilds the field-enemy entry index for the current map and area. */
void FUN_00303ea0(void)
{
    if (fieldFindAreaPlacementRecord(0) != NULL) {
        sysMemClear(DAT_005f2c20, 0x400);
        s32 total = dataTableGetRecordFortyOne();
        mapEnemyModule().tableEntryCount = 0;
        for (s32 index = 0; index < total; ++index) {
            EnemyTableLocation *location = fieldFindAreaPlacementRecord(index);
            if (location->mapId != -1 && location->mapId == g_gameState.mapId &&
                location->areaId == g_gameState.areaId) {
                DAT_005f2c20[mapEnemyModule().tableEntryCount++] = index;
            }
        }
    }
}
}
