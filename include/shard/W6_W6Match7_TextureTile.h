#ifndef SHARD_W6_W6MATCH7_TEXTURETILE_H
#define SHARD_W6_W6MATCH7_TEXTURETILE_H
#include "common.h"
#include <stddef.h>

struct TextureTileFormat {
    /* 0x00 */ u32 format;
    /* 0x04 */ u32 type;
    union {
        /* 0x08 */ u8 unk08[0x18];
        struct {
            u8 unk08[0x10];
            /* 0x18 */ u32 rowStride;
            u8 unk1C[4];
        } rows;
    };
    /* 0x20 */ u32 flipVertical;
};
typedef char TextureTileFormatStrideCheck[(sizeof(TextureTileFormat) == 0x24 && offsetof(TextureTileFormat, rows.rowStride) == 0x18) ? 1 : -1];
#endif
