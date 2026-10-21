#include "common.h"
extern "C" {
extern void *g_mapEnemy;
void asdMemFree(void *memory);
/* Releases the module's allocation and clears its pointer. */
void mapEnemyRelease(void) {
    if (g_mapEnemy != NULL) {
        asdMemFree(g_mapEnemy);
        g_mapEnemy = NULL;
    }
}
}
