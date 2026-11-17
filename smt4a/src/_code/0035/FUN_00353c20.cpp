#include "map/MapEnemyGlobal.h"

extern "C" {

void FUN_00357b18(u32 enemyId, u32 first, u32 second, s32 x, s32 y, s32 z, s32 active);

/* Places a visible map enemy's marker at its position; states 2 and 3 show it inactive. */
void FUN_00353c20(MapEnemyEntryA *enemy)
{
    MapEnemyA *list = g_mapEnemy;

    if (!enemy->eventEnabled) {
        return;
    }
    if (enemy->state == 3 || enemy->state == 2) {
        FUN_00357b18(enemy->mapId, list->requestArgs[0], list->requestArgs[1], (s32)enemy->position.x, (s32)enemy->position.y,
                     (s32)enemy->position.z, 0);
    } else {
        FUN_00357b18(enemy->mapId, list->requestArgs[0], list->requestArgs[1], (s32)enemy->position.x, (s32)enemy->position.y,
                     (s32)enemy->position.z, 1);
    }
}

} /* extern "C" */
