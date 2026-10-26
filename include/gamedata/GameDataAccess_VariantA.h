#pragma once
#include "common.h"

/* Game-data, flag and record accessors. */
extern "C" {

/* The game's flag block of the save data; callers view it as the sub-structure they use. */
u8 *gameGetFlagBlock(void);

} /* extern "C" */
