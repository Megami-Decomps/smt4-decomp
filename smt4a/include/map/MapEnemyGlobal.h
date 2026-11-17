#ifndef SMT4A_MAP_MAPENEMYGLOBAL_H
#define SMT4A_MAP_MAPENEMYGLOBAL_H

#include "map/mapEnemy.h"

extern "C" {
/* The map-enemy work (NULL while no map is loaded). */
extern MapEnemyA *g_mapEnemy;

/* Field-model kind indexed by the selected enemy ID. */
extern u8 DAT_005806e0[];

/* Releases the entry's previous model and binds the spawn of table `kind` (1-4) whose owner is `id`. */
void FUN_00377acc(MapEnemyEntryA *entry, s32 id, u32 kind);
}

/* map/mapEnemy.cpp's module statics: g_mapEnemy and the word after it (no symbol of its own yet),
 * how many enemy-table entries the table filter found for the current map. Retail addresses the
 * count from g_mapEnemy's address (+4), as armcc does for a file's statics. */
struct MapEnemyModule {
    /* 0x00 */ MapEnemyA *work;
    /* 0x04 */ s32 tableEntryCount;
};

static __inline MapEnemyModule &mapEnemyModule()
{
    return reinterpret_cast<MapEnemyModule &>(g_mapEnemy);
}

#endif
