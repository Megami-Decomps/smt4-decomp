#ifndef SHARD_SPRITEDETAILPANEL_H
#define SHARD_SPRITEDETAILPANEL_H

#include "common.h"
#include <stddef.h>

struct SpriteDetailAnchor {
    u8 unk00[0x0c];
    s16 x;
    s16 y;
};

// An animated screen position of the panel; its speed scales the sprites drawn at it.
struct SpriteDetailPosition {
    u8 unk00[0x20];
    f32 speed; // 0x20
    u8 unk24[0x68];
};

struct SpriteDetailPanel {
    u8 unk00[4];
    u8 stage; // 0x04: the panel draws its sprites from stage 4 on
    u8 unk05[0x17];
    u32 spriteGroup; // 0x1c
    s32 spriteId; // 0x20
    u8 unk24[0xe4];
    s32 mode; // 0x108: 0 frame drawn here, 1 clipped detail panel
    u8 unk10c[0x40];
    SpriteDetailPosition positions[3]; // 0x14c, stride 0x8c: title, sprite frame, detail
    u8 unk2f0[0x374];
    SpriteDetailAnchor* anchor; // 0x664
};

typedef char SpriteDetailPanelLayoutCheck[
    sizeof(SpriteDetailPosition) == 0x8c && offsetof(SpriteDetailPanel, positions) == 0x14c &&
    offsetof(SpriteDetailPanel, mode) == 0x108 && offsetof(SpriteDetailPanel, anchor) == 0x664 &&
    sizeof(SpriteDetailPanel) == 0x668 ? 1 : -1];

#endif
