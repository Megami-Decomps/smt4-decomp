#include "gfx/ModelShader.h"

extern "C" {

u32 asdGxGetCommandCursor(void);
void nn_gr_CTR_Shader_SetupBinary(NativeShaderPrefix *shader, const void *binary, s32 size, s32 index);
u32 *FUN_00177e6c(NativeShaderPrefix *shader, u32 *cursor);
void asdModelCommitCommandRange(u32 begin, u32 end);
void modelShaderCommitCommands(ModelShader *owner);

extern const char DAT_00544d50[]; /* "uMatrix" */
extern const char DAT_00544d40[]; /* "uMaterialColor" */

/* Loads the shader binary, binds its attribute and uniform symbols and commits the shader setup commands. */
s32 modelShaderLoad(ModelShader *owner, const void *binary, u32 unused, s32 size)
{

    u32 begin;
    u32 *end;

    asdGxGetCommandCursor();
    nn_gr_CTR_Shader_SetupBinary(&owner->shader, binary, size, -1);
    owner->binary = binary;
    owner->ready = 0;
    nn_gr_CTR_Shader_SearchBindSymbol(&owner->shader, &owner->aPosition, "aPosition");
    nn_gr_CTR_Shader_SearchBindSymbol(&owner->shader, &owner->aColor, "aColor");
    nn_gr_CTR_Shader_SearchBindSymbol(&owner->shader, &owner->aTexCoord, "aTexCoord");
    nn_gr_CTR_Shader_SearchBindSymbol(&owner->shader, &owner->uMatrix, DAT_00544d50);
    nn_gr_CTR_Shader_SearchBindSymbol(&owner->shader, &owner->uMaterialColor, DAT_00544d40);
    u32 *cursor = reinterpret_cast<u32 *>(asdGxGetCommandCursor());
    begin = reinterpret_cast<u32>(cursor);
    end = FUN_00177e6c(&owner->shader, cursor);
    asdModelCommitCommandRange(begin, reinterpret_cast<u32>(end));
    modelShaderCommitCommands(owner);
    return 1;
}

} /* extern "C" */
