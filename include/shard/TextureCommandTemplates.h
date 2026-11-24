#ifndef SHARD_TEXTURECOMMANDTEMPLATES_H
#define SHARD_TEXTURECOMMANDTEMPLATES_H

#include "common.h"

struct TextureCommandFormats {
    /* 0x00 */ u32 words[14];
};

struct TextureBindPacket {
    /* 0x00 */ u32 unk00[2];
    /* 0x08 */ u32 dimensions;
    /* 0x0C */ u32 formatFlags;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u32 encodedAddress;
    /* 0x18 */ u32 unk18[6];
    /* 0x30 */ u32 format;
    /* 0x34 */ u32 unk34;
};

struct TextureCommandTemplates {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ TextureCommandFormats formats;
    /* 0xB0 */ TextureBindPacket command;
};

#endif
