#ifndef SHARD_ROMFILEOPENSTATE_H
#define SHARD_ROMFILEOPENSTATE_H

#include "common.h"

struct RomOpenFile {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0c */ u32 unk0c;
    /* 0x10 */ u32 unk10;
};
struct RomFileOpenState {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ RomOpenFile file;
};

#endif
