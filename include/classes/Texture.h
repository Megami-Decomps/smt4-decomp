#ifndef CLASSES_TEXTURE_H
#define CLASSES_TEXTURE_H

#include "common.h"

namespace nn { namespace gr { namespace CTR {
struct TextureCoordinate {
    /* 0x00 */ u8 unk00[0x1c];
    /* 0x1c */ u8 kind;
    /* 0x1d */ u8 flag;
    /* 0x1e */ u8 unk1e[2];
    /* 0x20 */ void *owner;
};
class Texture {
public:
    Texture();
    /* 0x00 */ TextureCoordinate first;
    /* 0x24 */ u32 values[5];
    /* 0x38 */ Texture *root;
    /* 0x3c */ TextureCoordinate second;
    /* 0x60 */ TextureCoordinate third;
    /* 0x84 */ TextureCoordinate fourth;
};
}}}

#endif
