#include "shard/W5_W5Match2_MapCallbacks.h"

extern "C" {

extern MapEnemyRequestWork *g_mapEnemy;
s32 asdMemFree(void *block);

/* Free the map enemy work and clear its owner pointer. */
void mapEnemyFreeWork(void)
{
    if (g_mapEnemy != NULL) {
        asdMemFree(g_mapEnemy);
        g_mapEnemy = NULL;
    }
}

}
