#ifndef GAMEDATA_INDEXEDFLAGS_H
#define GAMEDATA_INDEXEDFLAGS_H

#include "common.h"

struct IndexedFlags {
    /* 0x0000 */ u8 unk0000[0x800];
    /* 0x0800 */ u8 flags[0x1AF0];
    /* 0x22F0 */ u8 enabled[14];
};

#endif
