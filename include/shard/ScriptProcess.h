#ifndef SHARD_SCRIPTPROCESS_H
#define SHARD_SCRIPTPROCESS_H

#include "common.h"

/* A script process (observed prefix): the state the scene steps look at. */
struct ScriptProcess {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ u32 state;
};

#endif
