/* The model shader: the native shader object and its attribute and uniform bindings. */
#ifndef GFX_MODELSHADER_H
#define GFX_MODELSHADER_H

#include "common.h"
#include "shard/W6_W6Match5_ShaderBinding.h"

/* The model shader set up by modelShaderLoad (smt4a modelShaderLoad) and committed by modelShaderCommitCommands
 * (smt4a modelShaderCommitCommands). */
typedef struct ModelShader {
    /* 0x00000 */ u8 unk0[0x128];
    /* 0x00128 */ const void *binary;
    /* 0x0012C */ u8 ready;
    /* 0x0012D */ u8 unk12d[0x138 - 0x12d];
    /* 0x00138 */ NativeShaderPrefix shader;
    /* 0x00139 */ u8 unk139[0x12a20 - 0x139];
    /* 0x12A20 */ ShaderBindSymbol aPosition;
    /* 0x12A28 */ ShaderBindSymbol aTexCoord;
    /* 0x12A30 */ ShaderBindSymbol aColor;
    /* 0x12A38 */ ShaderBindSymbol uMatrix;
    /* 0x12A40 */ ShaderBindSymbol uMaterialColor;
} ModelShader;
typedef char ModelShaderLayoutCheck[
    offsetof(ModelShader, shader) == 0x138 && offsetof(ModelShader, uMaterialColor) == 0x12a40 ? 1 : -1];

#endif
