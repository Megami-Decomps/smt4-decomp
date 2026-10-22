#ifndef UI_SCALEDSPRITEPOSITION_H
#define UI_SCALEDSPRITEPOSITION_H

#include "shard/W6_W6Match8_BattleSpritePlacement.h"

struct ScaledSpritePosition {
    /* 0x00 */ BattleSpritePlacement placement;
    /* 0x20 */ u8 unk20[0x1d];
    /* 0x3d */ u8 scaleDeltas;
    /* 0x3e */ u8 unk3e[2];
    /* 0x40 */ f32 scale;
};

#endif
