#ifndef GFX_NAMED_TEXTURE_CACHE_H
#define GFX_NAMED_TEXTURE_CACHE_H
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

struct NamedTextureEntry {
    /* 0x00 */ u32 texture;
    /* 0x04 */ char name[0x40];
    /* 0x44 */ u8 unk44[8];
};
struct NamedTextureCacheState {
    /* 0x000 */ u8 unk000[0x300];
    /* 0x300 */ s32 count;
};
typedef char NamedTextureEntryLayoutCheck[
    sizeof(NamedTextureEntry) == 0x4C &&
    offsetof(NamedTextureEntry, name) == 4 ? 1 : -1];
typedef char NamedTextureCacheCountOffsetCheck[
    offsetof(NamedTextureCacheState, count) == 0x300 ? 1 : -1];
#endif
