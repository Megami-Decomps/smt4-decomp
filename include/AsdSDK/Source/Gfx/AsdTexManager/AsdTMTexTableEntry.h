/* The entries of a TMX file's sprite table, as returned by asdTMTexTableEntryAt(). */
#ifndef ASDSDK_SOURCE_GFX_ASDTEXMANAGER_ASDTMTEXTABLEENTRY_H
#define ASDSDK_SOURCE_GFX_ASDTEXMANAGER_ASDTMTEXTABLEENTRY_H

#include "common.h"
#include <stddef.h>

#ifdef __cplusplus
/* Placement record of a table entry. The texture draw reads the first two halfwords as the
 * request's x/y, the UI code as the sprite's width/height; `mode` and `flags` are observed only
 * by the texture draw. Observed prefix, not a recovered record stride. */
struct TexturePlacementPrefixIV {
    /* 0x00 */ union {
        s16 x;
        s16 width;
    };
    /* 0x02 */ union {
        s16 y;
        s16 height;
    };
    /* 0x04 */ u16 mode;
    /* 0x06 */ u8 unk06[6];
    /* 0x0C */ u8 flags;
};

/* One 0x14-byte entry of a TMX file's sprite table. */
struct TextureTableEntryIV {
    /* 0x00 */ u16 originX;  /* source origin of the sprite in its texture (a crop's left/top) */
    /* 0x02 */ u16 originY;
    /* 0x04 */ u16 width;    /* bit 15 is a flag */
    /* 0x06 */ u16 height;
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
    /* 0x0C */ TexturePlacementPrefixIV *placement;
    /* 0x10 */ u8 unk10[4];
};

/* Observed file prefix, not a claim about the full file object's extent. */
struct TextureTableFilePrefixIV {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ TextureTableEntryIV **entries;
};

typedef char TexturePlacementPrefixIVLayoutCheck[
    sizeof(TexturePlacementPrefixIV) == 0xE &&
    offsetof(TexturePlacementPrefixIV, x) == 0 &&
    offsetof(TexturePlacementPrefixIV, width) == 0 &&
    offsetof(TexturePlacementPrefixIV, y) == 2 &&
    offsetof(TexturePlacementPrefixIV, height) == 2 &&
    offsetof(TexturePlacementPrefixIV, mode) == 4 &&
    offsetof(TexturePlacementPrefixIV, unk06) == 6 &&
    offsetof(TexturePlacementPrefixIV, flags) == 0xC ? 1 : -1];
typedef char TextureTableEntryIVLayoutCheck[
    sizeof(TextureTableEntryIV) == 0x14 &&
    offsetof(TextureTableEntryIV, originX) == 0 &&
    offsetof(TextureTableEntryIV, originY) == 2 &&
    offsetof(TextureTableEntryIV, width) == 4 &&
    offsetof(TextureTableEntryIV, height) == 6 &&
    offsetof(TextureTableEntryIV, x) == 8 &&
    offsetof(TextureTableEntryIV, y) == 0xA &&
    offsetof(TextureTableEntryIV, placement) == 0xC &&
    offsetof(TextureTableEntryIV, unk10) == 0x10 ? 1 : -1];
typedef char TextureTableFilePrefixIVLayoutCheck[
    sizeof(TextureTableFilePrefixIV) == 8 &&
    offsetof(TextureTableFilePrefixIV, unk00) == 0 &&
    offsetof(TextureTableFilePrefixIV, entries) == 4 ? 1 : -1];
#endif

#endif
