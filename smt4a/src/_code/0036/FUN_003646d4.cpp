/* NON_MATCHING: identical instruction sequence; register assignment differs (retail: &g_mapEnemy r1, slots r2, state r3; built: r2, r3, r1) */
#include "shard/W5_W5Match7_SceneSlots.h"

extern "C" {

/* Returns whether any active slot is in the state mapped from `kind`. */
u32 FUN_003646d4(u32 kind)
{
    s32 state = 31;
    s32 i;
    SceneSlotList *list = g_mapEnemy;

    switch (kind) {
    case 0:
        state = 30;
        break;
    case 1:
        break;
    case 2:
        state = 16;
        break;
    }
    for (i = 0; i < 40; i++) {
        SceneSlot *slot = &list->slots[i];
        if (slot->active && slot->state == state) {
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
