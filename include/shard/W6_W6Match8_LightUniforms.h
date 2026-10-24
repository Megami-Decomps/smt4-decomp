#ifndef SHARD_W6_W6MATCH8_LIGHT_UNIFORMS_H
#define SHARD_W6_W6MATCH8_LIGHT_UNIFORMS_H

#include "common.h"

struct ShaderLightMatrix {
    f32 rows[3][4];
};
struct ShaderLightVector4 {
    f32 x, y, z, w;

    ShaderLightVector4(f32 xValue, f32 yValue, f32 zValue, f32 wValue)
        : x(xValue), y(yValue), z(zValue), w(wValue) {}
};
struct ShaderLightResource {
    u8 unk00[0x18];
    u32 flags;
    u8 unk1c[0x9c];
    f32 first[4];      /* 0xb8 */
    f32 second[4];     /* 0xc8 */
    ShaderLightVector4 direction; /* 0xd8 */
};

// Only the virtual matrix accessor at slot 0x14 is used here.
class ShaderLightSource {
public:
    virtual void unk00() = 0;
    virtual void unk04() = 0;
    virtual void unk08() = 0;
    virtual void unk0c() = 0;
    virtual void unk10() = 0;
    virtual const ShaderLightMatrix *getMatrix() = 0;

    u32 reserved04;
    ShaderLightResource *resource; /* 0x08 */
    u32 hasTransform;              /* 0x0c */
};
struct ShaderLightFeatures {
    u32 flags;
    u8 unk04[0x64];
    s32 registerCount; /* 0x68 */
    s32 registerBase;  /* 0x6c: first light register; lights count downwards */
};
struct ShaderLightNode {
    u8 unk00[8];
    ShaderLightFeatures *features;
};
struct ShaderLightCamera {
    u8 unk000[0x148];
    ShaderLightMatrix matrix;
};
struct ShaderLightContext {
    u8 unk00[8];
    ShaderLightNode *node;
    u8 unk0c[0x38];
    ShaderLightSource *light; /* 0x44 */
    u8 unk48[0x5c];
    ShaderLightCamera *camera; /* 0xa4 */
};

extern "C" {
extern u32 *g_commandBufferCursor;
void nw_gfx_internal_NWCopyVec4Reverse(u32 *out, const f32 *vector);
}

static __inline void shaderLightEmitVector(u32 index, const f32 *vector)
{
    u32 *cursor = g_commandBufferCursor;
    cursor[0] = 0x80000000 + index;
    cursor[1] = 0x804f02c0;
    nw_gfx_internal_NWCopyVec4Reverse(cursor + 2, vector);
    g_commandBufferCursor += 6;
}

#endif
