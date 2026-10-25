#ifndef GFX_NAMED_TEXTURE_CACHE_H
#define GFX_NAMED_TEXTURE_CACHE_H
#include "battle/BattleEffectTextureCache.h"

struct NamedTextureCache {
    /* 0x0000 */ BattleEffectTextureSlot entries[64];
    /* 0x1300 */ s32 count;
    /* 0x1304 */ u32 state;
};

typedef void (*NamedTextureLoadCallback)(u32 unused, BattleEffectTextureSlot *slot, u32 bytes);

typedef char NamedTextureCacheLayoutCheck[
    offsetof(NamedTextureCache, entries) == 0 &&
    offsetof(NamedTextureCache, count) == 0x1300 &&
    offsetof(NamedTextureCache, state) == 0x1304 &&
    sizeof(NamedTextureCache) == 0x1308 ? 1 : -1];
#endif
