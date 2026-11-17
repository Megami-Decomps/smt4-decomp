#include "map/MapEnemyGlobal.h"

extern "C" {



void sceneSlotsCancelPending(void)
{
    MapEnemyA *list = g_mapEnemy;
    for (s32 i = 0; i < MAP_ENEMY_COUNT_A; i++) {
        MapEnemyEntryA *slot = &list->entries[i];
        if (slot->active && slot->kind != 0 && slot->kind < 11 && slot->locked == 0) {
            switch (slot->state) {
            case 7: case 8: case 13: case 14: case 15:
                list->activeCount--;
                slot->state = 9;
                slot->elapsed = 0;
                break;
            }
        }
    }
}

} /* extern "C" */
