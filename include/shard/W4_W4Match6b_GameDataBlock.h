/* smt4a: accessors of the save block (GameSaveDataA in gamedata/GameSaveDataA.h). */
#ifndef SHARD_W4_W4MATCH6B_GAMEDATABLOCK_H
#define SHARD_W4_W4MATCH6B_GAMEDATABLOCK_H

#include "gamedata/GameSaveBlocks.h"
#include "gamedata/SaveFlagViews.h"
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
u8 *gameDataBlocksGetStats(void);
#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

u8 *FUN_00239200(void);

#ifdef __cplusplus
}
#endif

#ifdef __cplusplus
extern "C" {
#endif

void gameDataBlocksOrFlagsClearUnk02(u32 bits);

#ifdef __cplusplus
}
#endif

#endif
