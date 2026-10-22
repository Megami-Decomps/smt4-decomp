#ifndef SHARD_TEXTURECOMMANDTEMPLATES_H
#define SHARD_TEXTURECOMMANDTEMPLATES_H

#include "common.h"

struct TextureCommandBlock {
    /* 0x00 */ u32 words[14];
};
struct TextureCommandTemplates {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ TextureCommandBlock formats;
    /* 0xb0 */ TextureCommandBlock command;
};

#endif
