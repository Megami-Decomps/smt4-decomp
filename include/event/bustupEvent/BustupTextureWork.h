#ifndef EVENT_BUSTUPTEXTUREWORK_H
#define EVENT_BUSTUPTEXTUREWORK_H
#include "common.h"
#include <stddef.h>
struct BustupTextureWork {
    /* 0x00 */ u32 id;
    /* 0x04 */ void *definition;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 texture;
    /* 0x10 */ s32 table;
    /* 0x14 */ s32 node;
    /* 0x18 */ s32 previousNode;
    /* 0x1C */ f32 x;
    /* 0x20 */ f32 y;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ f32 frame;
    /* 0x2C */ f32 alpha;
    /* 0x30 */ u8 active;
    /* 0x31 */ u8 visible;
    /* 0x32 */ u8 unk32[0x4A];
    /* 0x7C */ u8 deferred;
    /* 0x7D */ u8 unk7D[7];
    /* 0x84 */ s32 previousId;
    /* 0x88 */ u8 unk88[8];
};
typedef char BustupTextureWorkLayoutCheck[(sizeof(BustupTextureWork) == 0x90 && offsetof(BustupTextureWork, deferred) == 0x7C) ? 1 : -1];
#endif
