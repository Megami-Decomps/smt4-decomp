#ifndef SHARD_W6_W6MATCH5_SHADER_BINDING_H
#define SHARD_W6_W6MATCH5_SHADER_BINDING_H

#include "common.h"
#include <stddef.h>

// Only the leading byte of the native SDK shader object is described here.
// These are views of existing storage, not complete allocatable SDK objects.
struct NativeShaderPrefix {
    u8 opaque[1];
};
struct ShaderBindingStatePrefix {
    u32 unk00;
    const void *binary; // 0x04
    NativeShaderPrefix shader; // 0x08
};
struct ShaderBindSymbol {
    ShaderBindSymbol()
    {
        vertex.kind = 0;
        vertex.count = 1;
        vertex.attribute = 255;
        vertex.registerIndex = 255;
        vertex.flags = 0;
    }
    union {
        u32 words[2];
        struct {
            u8 kind; /* 0x00 */
            u8 count; /* 0x01 */
            u8 attribute; /* 0x02 */
            u8 registerIndex; /* 0x03 */
            u32 flags; /* 0x04 */
        } vertex;
        struct {
            u8 stage;    /* 0x00 */
            u8 category; /* 0x01 */
            u8 first;    /* 0x02 */
            u8 last;     /* 0x03 */
            const char *name; /* 0x04 */
        } uniform;
    };
};
typedef char ShaderBindSymbolLayoutCheck[
    sizeof(ShaderBindSymbol) == 8 &&
    offsetof(ShaderBindSymbol, vertex.attribute) == 2 &&
    offsetof(ShaderBindSymbol, vertex.flags) == 4 ? 1 : -1];
typedef char ShaderBindSymbolUniformOffsetsCheck[
    offsetof(ShaderBindSymbol, uniform.first) == 2 &&
    offsetof(ShaderBindSymbol, uniform.name) == 4 && sizeof(ShaderBindSymbol) == 8 ? 1 : -1];

extern "C" void nn_gr_CTR_Shader_SearchBindSymbol(NativeShaderPrefix *,
                                                  ShaderBindSymbol *, const char *);

#endif
