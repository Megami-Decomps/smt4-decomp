#ifndef SHARD_GAMEMODEFLAGS_H
#define SHARD_GAMEMODEFLAGS_H

#include "common.h"
#include <stddef.h>

struct CollectionSortMode {
    u8 order : 7;
    u8 descending : 1;
};

struct GameModeFlagGroup {
    /* 0x00 */ u8 unk00[0x13];
    /* 0x13 */ u8 mode6;
    /* 0x14 */ u8 mode7;
    /* 0x15 */ u8 unk15;
    /* 0x16 */ u8 mode9;
    /* 0x17 */ u8 mode8;
};
struct GameModeFlags {
    /* 0x00 */ union {
        u8 unk00[0x1c];
        struct {
            u8 unk00[0x10];
            CollectionSortMode collection;
        } sortSettings;
    };
    /* 0x1c */ GameModeFlagGroup modes;
};
typedef char GameModeFlagsSortLayoutCheck[sizeof(CollectionSortMode) == 1 &&
    offsetof(GameModeFlags, sortSettings.collection) == 0x10 && sizeof(GameModeFlags) == 0x34 ? 1 : -1];

#endif
