#include "shard/W5_W5Match7_SceneSlots.h"

extern "C" {



void sceneSlotsCancelPending(void)
{
    SceneSlotList *list = g_mapEnemy;
    for (s32 i = 0; i < 40; i++) {
        SceneSlot *slot = &list->slots[i];
        if (slot->active && slot->kind != 0 && slot->kind < 11 && slot->locked == 0) {
            switch (slot->state) {
            case 7: case 8: case 13: case 14: case 15:
                list->activeCount--;
                slot->state = 9;
                slot->stateTime = 0;
                break;
            }
        }
    }
}

} /* extern "C" */
