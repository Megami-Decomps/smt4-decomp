#ifndef SHARD_GAMEGETFLAGBLOCK_H
#define SHARD_GAMEGETFLAGBLOCK_H

#include "common.h"

#ifdef __cplusplus
extern "C" {
#endif

/* The game's flag block of the save data; callers view it as the sub-structure they use. */
u8 *gameGetFlagBlock(void);

#ifdef __cplusplus
}
#endif

#endif
