#include "map/MapEnemyGlobal.h"

extern "C" {

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
