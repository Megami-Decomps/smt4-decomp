#ifndef SHARD_GAMEFLAGSGETBLOCK_H
#define SHARD_GAMEFLAGSGETBLOCK_H

#include "common.h"

struct FlagWorkBanks;

#ifdef __cplusplus
extern "C" {
#endif

/* The flag banks of the game-data table; callers view them as the sub-structure they use. */
struct FlagWorkBanks *gameFlagsGetBlock(void);

#ifdef __cplusplus
}
#endif

#endif
