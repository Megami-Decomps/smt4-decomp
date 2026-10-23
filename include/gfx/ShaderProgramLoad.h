#ifndef GFX_SHADERPROGRAMLOAD_H
#define GFX_SHADERPROGRAMLOAD_H
#include "shard/S1NwGfx.h"
struct ShaderBooleanConstant {
    u16 kind;
    u16 index;
    u32 value;
    u32 unk08[3];
};
struct ShaderExecutable {
    u8 prefix[0x18];
    s32 constantOffset;
    s32 constantCount;
};
struct ShaderExecutableTable {
    u32 signature;
    u32 count;
    ShaderExecutable *executables[1];
};
struct ShaderBinaryCommands {
    u8 prefix[0x38];
    const void *commands;
    u32 commandBytes;
    ShaderExecutableTable *programs;
};
struct ShaderProgramResource {
    u8 prefix[0xC];
    s32 vertexProgram;
    s32 geometryProgram;
    union {
        u8 unk14[0x68];
        struct {
            /* 0x14 */ s32 count;
            /* 0x18 */ RelativePointer references;
        } uniforms;
    };
    const void *commands;
    u32 commandBytes;
    RelativePointer binary;
};
struct ShaderProgramLoadState {
    u8 prefix[8];
    const ShaderProgramResource *resource;
    u8 unk0C[4];
    u8 stages;
    u8 unk11[3];
    u32 vertexBooleans;
    u8 unk18[0x14];
    u32 geometryBooleans;
    u8 unk30[0x14];
    s32 geometryEnabled;
};
typedef char ShaderProgramLoadLayouts[sizeof(ShaderBooleanConstant) == 0x14 &&
    offsetof(ShaderExecutable, constantOffset) == 0x18 &&
    offsetof(ShaderBinaryCommands, commands) == 0x38 &&
    offsetof(ShaderProgramResource, binary) == 0x84 &&
    offsetof(ShaderProgramResource, commands) == 0x7C &&
    sizeof(ShaderProgramResource) == 0x88 &&
    offsetof(ShaderProgramLoadState, vertexBooleans) == 0x14 &&
    offsetof(ShaderProgramLoadState, geometryBooleans) == 0x2C &&
    offsetof(ShaderProgramLoadState, geometryEnabled) == 0x44 &&
    sizeof(ShaderProgramLoadState) == 0x48 ? 1 : -1];
typedef char ShaderProgramUniformOffsets[offsetof(ShaderProgramResource, uniforms.count) == 0x14 &&
    offsetof(ShaderProgramResource, uniforms.references) == 0x18 &&
    sizeof(ShaderProgramResource) == 0x88 ? 1 : -1];
#endif
