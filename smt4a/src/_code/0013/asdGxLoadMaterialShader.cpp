#include "shard/W6_W6Match5_ShaderBinding.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"

extern "C" {
extern const char *g_materialShaderPath; /* "UserRenderCommandShader.shbin" */
extern ShaderBindingStatePrefix g_materialShader;
extern ShaderBindSymbol g_materialShaderWorld;
extern ShaderBindSymbol g_materialShaderColor;

void nn_gr_CTR_Shader_SetupBinary(NativeShaderPrefix *shader, const void *binary, s32 vertexShader, s32 geometryShader);

/* Loads the user render-command shader and finds its "world" matrix and "uMaterialColor" uniforms. */
void asdGxLoadMaterialShader(void)
{
    const void *binary = asdLoadFileWithSize(g_materialShaderPath, NULL, 1);
    g_materialShader.binary = binary;
    nn_gr_CTR_Shader_SetupBinary(&g_materialShader.shader, binary, 0, -1);
    nn_gr_CTR_Shader_SearchBindSymbol(&g_materialShader.shader, &g_materialShaderWorld, "world");
    nn_gr_CTR_Shader_SearchBindSymbol(&g_materialShader.shader, &g_materialShaderColor, "uMaterialColor");
}
} /* extern "C" */
