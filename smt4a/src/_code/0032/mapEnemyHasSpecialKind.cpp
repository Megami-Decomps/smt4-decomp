#include "shard/W5_W5Match7_SceneSlots.h"

extern "C" {
// Report whether any active map enemy has kind zero or at least eleven.
u32 mapEnemyHasSpecialKind(void)
{
    for (s32 index = 0; index < 40; ++index) {
        SceneSlot *enemy = &g_mapEnemy->slots[index];
        if (enemy->active != 0 && (enemy->kind == 0 || enemy->kind >= 11)) {
            return 1;
        }
    }
    return 0;
}
}
