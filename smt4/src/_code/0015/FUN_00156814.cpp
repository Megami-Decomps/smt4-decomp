/* NON_MATCHING: stage comparison scheduling and strength-reduced Boolean constant loops differ. */
#include "gfx/ShaderProgramLoad.h"
extern "C" {
extern u8 *g_commandBufferCursor;
void FUN_0015bd68(s32 geometryEnabled);
void nnnstdMemCpy(void *destination, const void *source, u32 bytes);

static inline u32 shaderBooleanMask(const ShaderExecutable *program)
{
    const ShaderBooleanConstant *constants = (const ShaderBooleanConstant *)((const u8 *)program + program->constantOffset);
    u32 mask = 0;
    for (s32 i = 0; i < program->constantCount; ++i) {
        if (constants[i].kind == 0)
            mask |= (constants[i].value & 1) << constants[i].index;
    }
    return mask;
}

void FUN_00156814(ShaderProgramLoadState *state, const ShaderProgramResource *resource)
{
    const ShaderBinaryCommands *binary = (const ShaderBinaryCommands *)resource->binary.get();
    s32 geometryEnabled = (resource->geometryProgram >> 31) + 1;
    bool sameBinary = false;
    bool sameStages = false;
    if (state->resource) {
        sameBinary = binary == state->resource->binary.get();
        sameStages = geometryEnabled == (state->resource->geometryProgram >> 31) + 1;
    }
    if (!sameStages) {
        FUN_0015bd68(geometryEnabled);
        state->stages = geometryEnabled ? 2 : 1;
        state->geometryEnabled = geometryEnabled;
    }
    if (!sameBinary) {
        u32 bytes = binary->commandBytes;
        nnnstdMemCpy(g_commandBufferCursor, binary->commands, bytes);
        g_commandBufferCursor += bytes & ~3;
    }
    u32 bytes = resource->commandBytes;
    nnnstdMemCpy(g_commandBufferCursor, resource->commands, bytes);
    g_commandBufferCursor += bytes & ~3;
    const ShaderExecutableTable *programs = binary->programs;
    state->vertexBooleans |= shaderBooleanMask(programs->executables[resource->vertexProgram]);
    if (geometryEnabled)
        state->geometryBooleans |= shaderBooleanMask(programs->executables[resource->geometryProgram]);
    state->resource = resource;
}
}
