/* PlayerDataBlock.h */
#ifndef INCLUDE_GAMEDATA_PLAYERDATABLOCK_H
#define INCLUDE_GAMEDATA_PLAYERDATABLOCK_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif
/* Returns the player data block; callers view it as the structure they use. */
u8 *gameGetPlayerData(void);
#ifdef __cplusplus
}
#endif

#endif
