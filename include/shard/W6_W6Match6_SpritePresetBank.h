#ifndef SHARD_W6_W6MATCH6_SPRITE_PRESET_BANK_H
#define SHARD_W6_W6MATCH6_SPRITE_PRESET_BANK_H

#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"

struct SpritePresetBank {
    UiResourceParameters parameters;
    UiAnimatedSprite sprites[13];
};

typedef char SpritePresetBankPacketLayoutCheck[
    offsetof(SpritePresetBank, parameters) == 0 &&
    offsetof(SpritePresetBank, sprites) == 0x20 && sizeof(SpritePresetBank) == 0x73c ? 1 : -1];

#endif
