#ifndef SHARD_W5_W5MATCH2_MAPSTATE_H
#define SHARD_W5_W5MATCH2_MAPSTATE_H

#include "common.h"

/* These offsets describe IV; Apocalypse's scene state has a separate view. */
struct GameStateCallbackWork {
    /* 0x000 */ u8 unk000[0x280];
    /* 0x280 */ u32 departureMode;
    /* 0x284 */ u8 unk284[0xEC];
    /* 0x370 */ u32 mapMode;
};

#endif
