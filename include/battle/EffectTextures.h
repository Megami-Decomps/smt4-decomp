#ifndef BATTLE_EFFECT_TEXTURES_H
#define BATTLE_EFFECT_TEXTURES_H
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include <stddef.h>

struct BattleEffectTextureSlot {
    AsdTexture* texture;
    char name[0x40];
    void* fileData;
    u8 ready;
    u8 unk49;
    u8 state;
    u8 unk4B;
};
typedef char BattleEffectTextureSlotLayoutCheck[sizeof(BattleEffectTextureSlot) == 0x4C &&
    offsetof(BattleEffectTextureSlot, name) == 4 && offsetof(BattleEffectTextureSlot, fileData) == 0x44 &&
    offsetof(BattleEffectTextureSlot, ready) == 0x48 && offsetof(BattleEffectTextureSlot, state) == 0x4A ? 1 : -1];
#endif
