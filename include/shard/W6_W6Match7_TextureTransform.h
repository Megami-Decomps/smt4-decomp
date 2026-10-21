#ifndef SHARD_W6_W6MATCH7_TEXTURETRANSFORM_H
#define SHARD_W6_W6MATCH7_TEXTURETRANSFORM_H
#include "shard/W5_W5Match2_PlainData.h"
#include "shard/W6_W6Match8_LightUniforms.h"

struct TextureTransformVector2 {
    f32 x, y;
};

struct TextureModeTable {
    u32 values[6];
};

struct TextureModeTables {
    TextureModeTable tables[2];
};

struct TextureTransformInfo {
    /* 0x00 */ s32 coordinateSet;
    /* 0x04 */ u8 unk04[8];
    /* 0x0c */ u32 matrixMode;
    /* 0x10 */ TextureTransformVector2 scale;
    /* 0x18 */ f32 rotation;
    /* 0x1c */ TextureTransformVector2 translation;
    /* 0x24 */ u8 dirty;
    /* 0x25 */ u8 enabled;
    /* 0x26 */ u8 unk26[2];
    /* 0x28 */ ShaderLightMatrix matrix;
};

struct TextureTransformState {
    /* 0x000 */ u8 unk000[0x1c];
    /* 0x01c */ u32 textureMode;
    /* 0x020 */ u8 unk020[0x14c];
    /* 0x16c */ TextureTransformInfo transform;
};

struct TextureTransformContext {
    u8 unk00[0x14];
    u32 flags;
};

extern "C" void *memcpy(void *destination, const void *source, u32 size);

// Texture SRT generation returns a homogeneous 4x4 matrix; the shader consumes its first three rows.
static inline ShaderLightMatrix textureTransformFrom44(const Matrix44 &source)
{
    ShaderLightMatrix result;
    memcpy(&result, &source, sizeof(result));
    return result;
}
#endif
