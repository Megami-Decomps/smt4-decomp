#ifndef SHARD_W6_W6MATCH6_SPRITE_PRESET_BANK_H
#define SHARD_W6_W6MATCH6_SPRITE_PRESET_BANK_H

#include "shard/W6_W6Match8_AnimatedSprite.h"

struct SpritePresetBank {
    u8 unk00[0x20];
    UiAnimatedSprite sprites[13];
};

#endif
