/* NON_MATCHING: The enemy-filter owner address is loaded after the table count instead of before the initial lookup. */
#include "map/EnemyTableFilter.h"
#include "map/mapDepart.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
extern EnemyTableFilterState g_mapEnemy;
extern GameState g_gameState;
extern u32 DAT_004a0be4[256];
EnemyTableLocation *dataTable29Sub0GetEntryWithAoc(s32 index);
s32 dataTableGetRecordFortyOne(void);

/* Rebuilds the field-enemy entry index for the current map and area. */
void FUN_0021be00(void)
{
    if (dataTable29Sub0GetEntryWithAoc(0) != NULL) {
        memClear(DAT_004a0be4, 0x400);
        s32 total = dataTableGetRecordFortyOne();
        g_mapEnemy.count = 0;
        for (s32 index = 0; index < total; ++index) {
            EnemyTableLocation *location = dataTable29Sub0GetEntryWithAoc(index);
            if (location->mapId != -1 && location->mapId == g_gameState.unk000 &&
                location->areaId == *reinterpret_cast<const s32 *>(g_gameState.unk004)) {
                DAT_004a0be4[g_mapEnemy.count++] = index;
            }
        }
    }
}
}
