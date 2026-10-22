#include "shard/W6_W6Match5_ShaderBinding.h"

extern "C" {
extern const char *DAT_00433dc0;
extern ShaderBindingStatePrefix DAT_0047e54c;
extern ShaderBindSymbol DAT_00490e3c;
extern ShaderBindSymbol DAT_00490e44;

const void *fileLoadSync(const char *, void *, u32);
void nn_gr_CTR_Shader_SetupBinary(NativeShaderPrefix *, const void *, s32, s32);

void asdGxLoadMaterialShader(void)
{
    const void *binary = fileLoadSync(DAT_00433dc0, NULL, 1);
    DAT_0047e54c.binary = binary;
    nn_gr_CTR_Shader_SetupBinary(&DAT_0047e54c.shader, binary, 0, -1);
    nn_gr_CTR_Shader_SearchBindSymbol(&DAT_0047e54c.shader, &DAT_00490e3c, "world");
    nn_gr_CTR_Shader_SearchBindSymbol(&DAT_0047e54c.shader, &DAT_00490e44, "uMaterialColor");
}
}
