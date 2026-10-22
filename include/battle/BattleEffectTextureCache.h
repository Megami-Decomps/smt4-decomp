#ifndef BATTLE_BATTLEEFFECTTEXTURECACHE_H
#define BATTLE_BATTLEEFFECTTEXTURECACHE_H
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include <stddef.h>

struct BattleEffectTextureSlot {
    AsdTexture *texture;
    char name[0x40];
    void *file;
    u8 loaded;
    u8 padding49;
    u8 requested;
    u8 padding4B;
};
typedef char BattleEffectTextureSlotLayoutCheck[
    offsetof(BattleEffectTextureSlot, name) == 4 &&
    offsetof(BattleEffectTextureSlot, file) == 0x44 &&
    offsetof(BattleEffectTextureSlot, loaded) == 0x48 &&
    offsetof(BattleEffectTextureSlot, requested) == 0x4A &&
    sizeof(BattleEffectTextureSlot) == 0x4C ? 1 : -1];
#endif
