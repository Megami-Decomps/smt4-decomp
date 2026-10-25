/* NON_MATCHING: retail copies the command cursor to r5 and passes r5 (mov r1, r5); built passes r0 directly */
#include "shard/W6_W6Match5_ShaderBinding.h"

extern "C" {

typedef struct {
    u8 unk0[0x128];
    const void *binary;            /* 0x00128 */
    u8 ready;                      /* 0x0012c */
    u8 unk12d[0x138 - 0x12d];
    NativeShaderPrefix shader;     /* 0x00138 */
    u8 unk139[0x12a20 - 0x139];
    ShaderBindSymbol aPosition;    /* 0x12a20 */
    ShaderBindSymbol aTexCoord;    /* 0x12a28 */
    ShaderBindSymbol aColor;       /* 0x12a30 */
    ShaderBindSymbol uMatrix;      /* 0x12a38 */
    ShaderBindSymbol uMaterialColor; /* 0x12a40 */
} ModelShader;

u32 FUN_002b7148(void);
void nn_gr_CTR_Shader_SetupBinary(NativeShaderPrefix *shader, const void *binary, s32 size, s32 index);
u32 *FUN_002b5cf0(NativeShaderPrefix *shader, u32 *cursor);
void FUN_002af390(u32 begin, u32 end);
void FUN_00126d14(ModelShader *owner);

extern const char DAT_00410688[]; /* "uMatrix" */
extern const char DAT_00410678[]; /* "uMaterialColor" */

/* Loads the shader binary, binds its attribute and uniform symbols and commits the shader setup commands. */
s32 FUN_0011b498(ModelShader *owner, const void *binary, u32 unused, s32 size)
{

    u32 begin;
    u32 *end;

    FUN_002b7148();
    nn_gr_CTR_Shader_SetupBinary(&owner->shader, binary, size, -1);
    owner->binary = binary;
    owner->ready = 0;
    nn_gr_CTR_Shader_SearchBindSymbol(&owner->shader, &owner->aPosition, "aPosition");
    nn_gr_CTR_Shader_SearchBindSymbol(&owner->shader, &owner->aColor, "aColor");
    nn_gr_CTR_Shader_SearchBindSymbol(&owner->shader, &owner->aTexCoord, "aTexCoord");
    nn_gr_CTR_Shader_SearchBindSymbol(&owner->shader, &owner->uMatrix, DAT_00410688);
    nn_gr_CTR_Shader_SearchBindSymbol(&owner->shader, &owner->uMaterialColor, DAT_00410678);
    begin = FUN_002b7148();
    end = FUN_002b5cf0(&owner->shader, reinterpret_cast<u32 *>(begin));
    FUN_002af390(begin, reinterpret_cast<u32>(end));
    FUN_00126d14(owner);
    return 1;
}

} /* extern "C" */
