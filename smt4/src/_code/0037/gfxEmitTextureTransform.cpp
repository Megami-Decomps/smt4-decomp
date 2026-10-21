/* NON_MATCHING: O3 scalarizes the 4x4-to-3x4 copy and merges cache stores; template-copy, frame and register allocation differ. O2 candidate. */
#include "shard/W6_W6Match7_TextureTransform.h"

extern "C" {
extern const TextureModeTables textureModeTables;
extern u32 *g_commandBufferCursor;
Matrix44 textureCalcSrtMatrix(s32 mode, TextureTransformVector2 scale, f32 rotation, TextureTransformVector2 translation);
void FUN_002a1828(u32 *out, const ShaderLightMatrix *matrix, u32 header);
void nw_gfx_internal_NWCopyVec3Reverse(u32 *out, const f32 *vector);

void gfxEmitTextureTransform(u32 unused, TextureTransformContext *context, TextureTransformState *state)
{
    TextureModeTable textureModes = textureModeTables.tables[1];
    u32 *cursor = g_commandBufferCursor;
    cursor[1] = 0x000a0080;
    cursor[0] = textureModes.values[state->textureMode & 0xff] | 0x1000;
    g_commandBufferCursor = cursor + 2;
    f32 coordinates[3] = {0.0f, 0.0f, 0.0f};
    context->flags &= ~0x200u;
    TextureTransformInfo &transform = state->transform;
    if (transform.enabled != 0) {
        ShaderLightMatrix matrix;
        if (transform.dirty != 0) {
            matrix = textureTransformFrom44(textureCalcSrtMatrix(transform.matrixMode & 0xff, transform.scale, transform.rotation, transform.translation));
            transform.matrix = matrix;
            transform.dirty = 0;
        } else {
            matrix = transform.matrix;
        }
        coordinates[0] = static_cast<f32>(transform.coordinateSet);
        context->flags |= 0x200;
        cursor = g_commandBufferCursor;
        cursor[0] = 0x8000000b;
        cursor[1] = 0x000f02c0;
        FUN_002a1828(cursor + 2, &matrix, 0x00bf02c1);
        g_commandBufferCursor += 16;
    }
    cursor = g_commandBufferCursor;
    cursor[0] = 0x8000000a;
    cursor[1] = 0x804f02c0;
    nw_gfx_internal_NWCopyVec3Reverse(cursor + 2, coordinates);
    g_commandBufferCursor += 6;
}
}
