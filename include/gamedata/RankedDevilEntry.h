#ifndef GAMEDATA_RANKED_DEVIL_ENTRY_H
#define GAMEDATA_RANKED_DEVIL_ENTRY_H

#include "common.h"

/* A demon id with the rank it is sorted by. */
struct RankedDevilEntry {
    u16 id; // 0x00
    u8 rank; // 0x02
};

#endif
