/* NON_MATCHING: instruction-for-instruction the same as retail except the callee-saved register numbering (retail: resource r5/state r4, binary r7/geometryEnabled r6; build assigns them the other way round). */
#include "gfx/ShaderProgramLoad.h"
#include "AsdSDK/gfxCommandTemplateAppend.h"
extern "C" {
extern u8 *g_commandBufferCursor;
struct CommandSpan {
    const void *data;
    u32 size;
};

void nnnstdMemCpy(void *destination, const void *source, u32 bytes);

static inline u32 shaderBooleanMask(const ShaderExecutable *program)
{
    const ShaderBooleanConstant *constants = (const ShaderBooleanConstant *)((const u8 *)program + program->constantOffset);
    u32 mask = 0;
    for (s32 i = 0; i < program->constantCount; ++i) {
        const ShaderBooleanConstant *constant = &constants[i];
        const u32 *value = &constant->value;
        if (constant->kind == 0)
            mask |= (*value & 1) << constant->index;
    }
    return mask;
}

void FUN_00156814(ShaderProgramLoadState *state, const ShaderProgramResource *resource)
{
    const ShaderBinaryCommands *binary = (const ShaderBinaryCommands *)resource->binary.get();
    s32 geometryEnabled = (resource->geometryProgram >> 31) + 1;
    bool sameStages = false;
    bool sameBinary = false;
    if (state->resource) {
        if (geometryEnabled == (state->resource->geometryProgram >> 31) + 1)
            sameStages = true;
        if (binary == state->resource->binary.get())
            sameBinary = true;
    }
    if (!sameStages) {
        gfxCommandTemplateAppend(geometryEnabled);
        state->stages = geometryEnabled ? 2 : 1;
        state->geometryEnabled = geometryEnabled;
    }
    if (!sameBinary) {
        u32 bytes = binary->commandBytes;
        nnnstdMemCpy(g_commandBufferCursor, binary->commands, bytes);
        g_commandBufferCursor += bytes & ~3;
    }
    CommandSpan span = *reinterpret_cast<const CommandSpan *>(&resource->commands);
    u32 bytes = span.size;
    nnnstdMemCpy(g_commandBufferCursor, span.data, span.size);
    g_commandBufferCursor += bytes & ~3u;
    const ShaderExecutableTable *programs = binary->programs;
    state->vertexBooleans |= shaderBooleanMask(programs->executables[resource->vertexProgram]);
    if (geometryEnabled)
        state->geometryBooleans |= shaderBooleanMask(programs->executables[resource->geometryProgram]);
    state->resource = resource;
}
}
