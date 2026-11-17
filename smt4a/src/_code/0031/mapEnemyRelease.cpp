#include "map/MapEnemyGlobal.h"
extern "C" {
void asdMemFree(void *memory);
/* Releases the module's allocation and clears its pointer. */
void mapEnemyRelease(u32 job) {
    if (g_mapEnemy != NULL) {
        asdMemFree(g_mapEnemy);
        g_mapEnemy = NULL;
    }
}
}
