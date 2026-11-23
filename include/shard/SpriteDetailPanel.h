#ifndef SHARD_SPRITEDETAILPANEL_H
#define SHARD_SPRITEDETAILPANEL_H

#include "ui/UiSpriteState.h"
#include <stddef.h>

struct SpriteDetailAnchor {
    u8 unk00[0x0c];
    s16 x;
    s16 y;
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
    /* 0x14c */ UiSpriteState positions[3]; /* Title, sprite frame, detail. */
    u8 unk2f0[0x374];
    SpriteDetailAnchor* anchor; // 0x664
};

typedef char SpriteDetailPanelLayoutCheck[
    offsetof(SpriteDetailPanel, positions) == 0x14c &&
    offsetof(SpriteDetailPanel, mode) == 0x108 && offsetof(SpriteDetailPanel, anchor) == 0x664 &&
    sizeof(SpriteDetailPanel) == 0x668 ? 1 : -1];

extern "C" void spriteDetailPanelDraw(SpriteDetailPanel *panel);

#endif
