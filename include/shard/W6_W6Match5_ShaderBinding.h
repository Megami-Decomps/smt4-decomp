#ifndef SHARD_W6_W6MATCH5_SHADER_BINDING_H
#define SHARD_W6_W6MATCH5_SHADER_BINDING_H

#include "common.h"

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
    u32 words[2];
};

extern "C" void nn_gr_CTR_Shader_SearchBindSymbol(NativeShaderPrefix *,
                                                  ShaderBindSymbol *, const char *);

#endif
