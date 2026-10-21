#ifndef SHARD_W6_W6MATCH8_BATTLE_SPRITE_PLACEMENT_H
#define SHARD_W6_W6MATCH8_BATTLE_SPRITE_PLACEMENT_H

#include "shard/W5_W5Match4_BattleVectorTransition.h"

struct BattleSpriteFrame {
    u8 unk00[0x12];
    s16 anchorX;
    union {
        u8 unk14[0xc];
        struct {
            s16 anchorY;        // 0x14
            s16 baselineOffset; // 0x16
            u8 unk18[8];
        } vertical;
    };
    s16 left;                   // 0x20
    s16 top;                    // 0x22
    u16 width;                  // 0x24
    u16 height;                 // 0x26
};

struct BattleFrameSprite {
    u8 unk00[0x10];
    BattleSpriteFrame *frame;
};

struct BattleSpriteGeometry {
    u8 unk00[0x14];
    s32 width;
    s32 height;
};
struct BattleSpriteGeometryOwner {
    u8 unk00[0xc];
    BattleSpriteGeometry *geometry;
};

struct BattleSpritePlacement {
    u8 unk00[4];
    BattleFrameSprite *sprite;             // 0x04
    BattleSpriteGeometryOwner *geometry;   // 0x08
    u8 unk0c[4];
    f32 offsetX;                           // 0x10
    f32 offsetY;                           // 0x14
    s16 pixelOffsetX;                      // 0x18
    s16 pixelOffsetY;                      // 0x1a
    u8 useGeometry;                        // 0x1c
    u8 lockVertical;                       // 0x1d
};

extern "C" void enemyDrawComputeSpriteAnchorOffset(const BattleSpritePlacement *placement,
                             BattleVector3 *output, f32 scale);

#endif
