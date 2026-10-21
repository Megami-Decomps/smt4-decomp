#include "common.h"

struct MapEnemyState {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 active;
};

extern "C" {

extern MapEnemyState *g_mapEnemy;

/* Reports whether there is no active map-enemy state. */
bool mapEnemyIsInactive()
{
    return g_mapEnemy == NULL || g_mapEnemy->active == 0;
}

}
