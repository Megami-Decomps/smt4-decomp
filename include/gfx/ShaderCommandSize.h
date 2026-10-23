#ifndef GFX_SHADERCOMMANDSIZE_H
#define GFX_SHADERCOMMANDSIZE_H
#include "common.h"
#include <stddef.h>
struct ShaderCommandSizeState {
    u8 unk000[0x8C];
    u32 vertexWords;
    u8 unk090[0x200];
    u32 geometryWords;
    s32 geometryEnabled;
};
typedef char ShaderCommandSizeOffsets[offsetof(ShaderCommandSizeState, vertexWords) == 0x8C && offsetof(ShaderCommandSizeState, geometryWords) == 0x290 && sizeof(ShaderCommandSizeState) == 0x298 ? 1 : -1];
#endif
