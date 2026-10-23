#ifndef ADDON_AOCICON_H
#define ADDON_AOCICON_H

#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

struct AocIconPixels {
    u8 border[0x800];
    u8 strips[6][0x400];
};
typedef char AocIconPixelsLayoutCheck[
    offsetof(AocIconPixels, strips) == 0x800 && sizeof(AocIconPixels) == 0x2000 ? 1 : -1];

struct AocIcon {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ AocIconPixels *pixels;
    /* 0x08 */ AsdTexture *texture;
};
typedef char AocIconLayoutCheck[
    offsetof(AocIcon, pixels) == 4 && offsetof(AocIcon, texture) == 8 && sizeof(AocIcon) == 0xC ? 1 : -1];

#endif
