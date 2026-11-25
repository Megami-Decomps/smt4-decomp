#ifndef ADDON_AOC_LINKED_TEXTURE_H
#define ADDON_AOC_LINKED_TEXTURE_H

#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTableEntry.h"

/* A loaded package texture's binding chain (AocPackageFile::linkedResource for the model texture request). */
struct AocTextureObject {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ TextureTableEntryIV sprite;
};
struct AocTextureHandle {
    /* 0x00 */ AocTextureObject *object;
};
struct AocTextureEntry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ AocTextureHandle *handle;
};
struct AocTextureBank {
    /* 0x00 */ AocTextureEntry *entry;
};
struct AocLinkedTexture {
    /* 0x00 */ AocTextureBank *bank;
};

typedef char AocTextureBindingLayoutCheck[offsetof(AocTextureObject, sprite) == 0x14 &&
    offsetof(AocTextureEntry, handle) == 4 ? 1 : -1];

#endif
