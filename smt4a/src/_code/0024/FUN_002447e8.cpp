/* NON_MATCHING: armcc coalesces the state/timer stores into STM; retail uses two STRs. */
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern MapEnemyState *g_mapEnemy;

/* Selects the enemy update phase while its state is active. */
void FUN_002447e8(u32 kind)
{
    MapEnemyState *enemy = g_mapEnemy;
    if (enemy->state == 0) {
        return;
    }
    kind = kind == 0 ? 7 : 8;
    enemy->state = kind;
    enemy->timer = 0;
}

} /* extern "C" */
