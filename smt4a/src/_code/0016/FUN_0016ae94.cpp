/* NON_MATCHING: projection initialization uses integer zero stores, angle scaling is folded and owner/VFP registers differ. */
#include "shard/W9_W9Match8_WorkRecords.h"
#include "shard/W5_W5Match2_PlainData.h"

extern "C" {
void mathSinCos(f32 *, f32 *, f32);
void FUN_0018ee0c(void *, u32, f32, f32, f32, f32, f32, f32);
void FUN_0018ab54(Matrix44 *, const Matrix44 *);
void FUN_0018f0ac(void *, u32, const Matrix44 *, f32, f32, f32, f32, f32);
void FUN_0018878c(RenderUpdateOutputPrefixA *, const void *);

// Build orthographic or rotated-perspective projection commands for the render output.
void FUN_0016ae94(RenderUpdateStatePrefixA *state, const RenderUpdateContextPrefixA *context)
{
    RenderUpdateOutputPrefixA *output = state->core.output;
    f32 nearClip = context->projection.nearClip;
    f32 farClip = context->projection.farClip;
    u8 packet[512];
    if (state->core.projection.kind < 0) {
        FUN_0018ee0c(packet, state->parameters.mode, state->parameters.value0, state->parameters.value1, state->parameters.value2,
                     nearClip, farClip, state->core.projection.depthOffset);
    } else {
        f32 sine, cosine;
        f32 phase = context->projection.fieldOfView * 0.017453292f * 0.5f * 40.743664f;
        mathSinCos(&sine, &cosine, phase);
        f32 focalScale = cosine / sine;
        f32 inverseRange = 1.0f / (farClip - nearClip);
        Matrix44 projection = {};
        projection.values[1] = focalScale;
        projection.values[4] = -(focalScale / context->projection.aspect);
        projection.values[5] = -0.0f;
        projection.values[6] = -0.0f;
        projection.values[7] = -0.0f;
        projection.values[10] = farClip * inverseRange;
        projection.values[11] = farClip * nearClip * inverseRange;
        projection.values[14] = -1.0f;
        Matrix44 converted;
        FUN_0018ab54(&converted, &projection);
        FUN_0018f0ac(packet, state->parameters.mode, &converted, state->parameters.value0, state->parameters.value1,
                     state->parameters.value2, state->core.value3, state->core.value4);
    }
    FUN_0018878c(output, packet);
    output->attribute0 = state->parameters.attribute0;
    output->attribute1 = state->parameters.attribute1;
    output->attribute2 = state->parameters.attribute2;
    output->enabled = 1;
    output->status = 0;
}
}
