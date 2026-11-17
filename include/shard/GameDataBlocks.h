/* Table of game-data block pointers and small flags at g_gameDataBlocks (0x43e2a8). */
#ifndef SHARD_GAMEDATABLOCKS_H
#define SHARD_GAMEDATABLOCKS_H

#include "gamedata/GameSaveBlocks.h"
#include "gamedata/SaveFlagViews.h"
#include "gamedata/UnitStats.h"
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

void gameDataBlocksAddFlags(u32 flags);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u8 gameDataSetItemFlag(u16 index, s32 value);

#ifdef __cplusplus
}
#endif

#endif
