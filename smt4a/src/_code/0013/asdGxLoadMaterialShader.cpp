#include "shard/W6_W6Match5_ShaderBinding.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"

extern "C" {
extern const char *DAT_00570d70;
extern ShaderBindingStatePrefix DAT_005cc54c;
extern ShaderBindSymbol DAT_005dee3c;
extern ShaderBindSymbol DAT_005dee44;

void nn_gr_CTR_Shader_SetupBinary(NativeShaderPrefix *, const void *, s32, s32);

void asdGxLoadMaterialShader(void)
{
    const void *binary = asdLoadFileWithSize(DAT_00570d70, NULL, 1);
    DAT_005cc54c.binary = binary;
    nn_gr_CTR_Shader_SetupBinary(&DAT_005cc54c.shader, binary, 0, -1);
    nn_gr_CTR_Shader_SearchBindSymbol(&DAT_005cc54c.shader, &DAT_005dee3c, "world");
    nn_gr_CTR_Shader_SearchBindSymbol(&DAT_005cc54c.shader, &DAT_005dee44, "uMaterialColor");
}
}
