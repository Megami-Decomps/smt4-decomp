/* NON_MATCHING: per-stage overhead accounting and loop register allocation differ from retail. */
#include "gfx/ShaderCommandSize.h"

// Each burst has an eight-byte header containing its first value; pad the remaining payload to command pairs.
static inline u32 shaderCommandBurstBytes(u32 words)
{
    u32 bytes = 0;
    do {
        u32 burst = words > 256 ? 256 : words;
        bytes += 8;
        bytes += (burst - 1) * 4;
        if (!(burst & 1))
            bytes += 4;
        words -= burst;
    } while (words != 0);
    return bytes;
}

// Size both program uploads, including the optional geometry-stage copies.
extern "C" u32 FUN_003e2af8(const ShaderCommandSizeState *state)
{
    u32 geometry = shaderCommandBurstBytes(state->geometryWords) + 8;
    if (state->geometryEnabled > 0)
        geometry += shaderCommandBurstBytes(state->geometryWords) + 8;
    u32 vertexWords = state->vertexWords;
    u32 vertex = shaderCommandBurstBytes(vertexWords > 512 ? 512 : vertexWords) + 16;
    if (state->geometryEnabled > 0)
        vertex += shaderCommandBurstBytes(vertexWords) + 16;
    return vertex + geometry + 8;
}
