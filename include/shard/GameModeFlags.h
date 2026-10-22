#ifndef SHARD_GAMEMODEFLAGS_H
#define SHARD_GAMEMODEFLAGS_H

#include "common.h"

struct GameModeFlagGroup {
    /* 0x00 */ u8 unk00[0x13];
    /* 0x13 */ u8 mode6;
    /* 0x14 */ u8 mode7;
    /* 0x15 */ u8 unk15;
    /* 0x16 */ u8 mode9;
    /* 0x17 */ u8 mode8;
};
struct GameModeFlags {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ GameModeFlagGroup modes;
};

#endif
