/* NON_MATCHING: The enemy-filter owner address is loaded after the table count instead of before the initial lookup. */
#include "map/EnemyTableFilter.h"
#include "map/mapDepart.h"

extern "C" {
extern EnemyTableFilterState g_mapEnemy;
extern GameStateA g_gameState;
extern u32 DAT_005f2c20[256];
EnemyTableLocation *FUN_00356308(s32 index);
s32 dataTableGetRecordFortyOne(void);
void sysMemClear(void *memory, u32 size);

/* Rebuilds the field-enemy entry index for the current map and area. */
void FUN_00303ea0(void)
{
    if (FUN_00356308(0) != NULL) {
        sysMemClear(DAT_005f2c20, 0x400);
        s32 total = dataTableGetRecordFortyOne();
        g_mapEnemy.count = 0;
        for (s32 index = 0; index < total; ++index) {
            EnemyTableLocation *location = FUN_00356308(index);
            if (location->mapId != -1 && location->mapId == g_gameState.mode &&
                location->areaId == *reinterpret_cast<const s32 *>(g_gameState.unk004)) {
                DAT_005f2c20[g_mapEnemy.count++] = index;
            }
        }
    }
}
}
