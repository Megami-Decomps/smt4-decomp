/* NON_MATCHING: retail copies the command cursor to r5 and passes r5 (mov r1, r5); built passes r0 directly */
#include "shard/W6_W6Match5_ShaderBinding.h"
#include "AsdSDK/Source/Gfx/Text/AsdText.h"
#include "shard/asdModelCommitCommandRange.h"

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

void FUN_00158a40(NativeShaderPrefix *shader, const void *binary, s32 size, s32 index);
u32 FUN_00177e6c(NativeShaderPrefix *shader, u32 cursor);
void FUN_0016c744(ModelShader *owner);

extern const char DAT_00544d50[]; /* "uMatrix" */
extern const char DAT_00544d40[]; /* "uMaterialColor" */

/* Loads the shader binary, binds its attribute and uniform symbols and commits the shader setup commands. */
s32 FUN_001579dc(ModelShader *owner, const void *binary, u32 unused, s32 size)
{

    u32 begin;
    u32 end;

    asdGxGetCommandCursor();
    FUN_00158a40(&owner->shader, binary, size, -1);
    owner->binary = binary;
    owner->ready = 0;
    nn_gr_CTR_Shader_SearchBindSymbol(&owner->shader, &owner->aPosition, "aPosition");
    nn_gr_CTR_Shader_SearchBindSymbol(&owner->shader, &owner->aColor, "aColor");
    nn_gr_CTR_Shader_SearchBindSymbol(&owner->shader, &owner->aTexCoord, "aTexCoord");
    nn_gr_CTR_Shader_SearchBindSymbol(&owner->shader, &owner->uMatrix, DAT_00544d50);
    nn_gr_CTR_Shader_SearchBindSymbol(&owner->shader, &owner->uMaterialColor, DAT_00544d40);
    begin = asdGxGetCommandCursor();
    end = FUN_00177e6c(&owner->shader, begin);
    asdModelCommitCommandRange(begin, end);
    FUN_0016c744(owner);
    return 1;
}

} /* extern "C" */
