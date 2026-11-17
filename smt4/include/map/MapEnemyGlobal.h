#ifndef SMT4_MAP_MAPENEMYGLOBAL_H
#define SMT4_MAP_MAPENEMYGLOBAL_H

#include "map/mapEnemy.h"

extern "C" {
/* The map-enemy work (NULL while no map is loaded). */
extern MapEnemy *g_mapEnemy;
}

/* map/mapEnemy.cpp's module statics: g_mapEnemy and the word after it (no symbol of its own yet),
 * how many enemy-table entries the table filter found for the current map. Retail addresses the
 * count from g_mapEnemy's address (+4), as armcc does for a file's statics. */
struct MapEnemyModule {
    /* 0x00 */ MapEnemy *work;
    /* 0x04 */ s32 tableEntryCount;
};

static __inline MapEnemyModule &mapEnemyModule()
{
    return reinterpret_cast<MapEnemyModule &>(g_mapEnemy);
}

#endif
