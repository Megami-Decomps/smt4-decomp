/* The event textures: data table 0x1A, event/BgData.tbb, in both games (the table ids follow the
 * game's data-file list, NKMBaseTable.tbb = 0). Section 0 holds the texture node of each 2D NPC
 * (indexed by the NPC id - 1), section 1 the texture node of each bust-up portrait; both are s16
 * arrays. */
#ifndef GAMEDATA_BGDATA_H
#define GAMEDATA_BGDATA_H

#include "gamedata/DataTable.h"

#ifdef __cplusplus
/* The texture nodes of section 0 (2D NPCs) or 1 (bust-ups) of `table` (dataTableGet(0x1A, n)). */
static inline const s16 *bgDataTextureNodes(void *table)
{
    return static_cast<const s16 *>(dataTableGetEntries(table));
}
#endif

#endif
