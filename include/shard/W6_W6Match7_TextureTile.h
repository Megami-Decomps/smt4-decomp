#ifndef SHARD_W6_W6MATCH7_TEXTURETILE_H
#define SHARD_W6_W6MATCH7_TEXTURETILE_H
#include "common.h"

struct TextureTileFormat {
    /* 0x00 */ u32 format;
    /* 0x04 */ u32 type;
    /* 0x08 */ u8 unk08[0x18];
    /* 0x20 */ u32 flipVertical;
};
#endif
