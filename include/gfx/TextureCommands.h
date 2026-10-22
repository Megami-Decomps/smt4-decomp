#ifndef GFX_TEXTURECOMMANDS_H
#define GFX_TEXTURECOMMANDS_H

#include "common.h"

struct TextureCommandSource {
    /* 0x00 */ u32 address;
    /* 0x04 */ u32 configuration;
    /* 0x08 */ u8 enabled;
    /* 0x09 */ u8 unk09[3];
};

#endif
