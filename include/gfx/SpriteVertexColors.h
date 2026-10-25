#ifndef GFX_SPRITEVERTEXCOLORS_H
#define GFX_SPRITEVERTEXCOLORS_H

#include "shard/W6_W6Match7_QuadVectors.h"
#include <stddef.h>

struct ItemSpriteExtension {
    /* 0x00 */ s16 width;
    /* 0x02 */ s16 height;
    /* 0x04 */ u16 mode;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ f32 colorScale;
    /* 0x0c */ u32 unk0c;
    /* 0x10 */ QuadVector colors[4];
};
typedef char ItemSpriteExtensionLayout[sizeof(ItemSpriteExtension) == 0x50 &&
    offsetof(ItemSpriteExtension, colors) == 0x10 ? 1 : -1];

#endif
