/* NON_MATCHING: the orthographic arm and the perspective's angle and range math match; retail keeps the perspective's own m[0][0]/m[1][1] stores before the quarter-turn pivot overwrites rows 0 and 1 (vstmia {0, cot}, then the negated row), where this build folds the pivot into the perspective stores. */
#include "shard/W9_W9Match8_WorkRecords.h"
#include "shard/W5_W5Match2_PlainData.h"

extern "C" {
void mathSinCos(f32 *, f32 *, f32);
void FUN_0018ee0c(void *, u32, f32, f32, f32, f32, f32, f32);
void FUN_0018ab54(Matrix44 *, const Matrix44 *);
void FUN_0018f0ac(void *, u32, const Matrix44 *, f32, f32, f32, f32, f32);
void FUN_0018878c(RenderUpdateOutputPrefixA *, const void *);

/* nn::math::SinCosRad (an SDK header inline): the sine table takes the angle as a table index. */
static __inline void sinCosRad(f32 *sine, f32 *cosine, f32 radians)
{
    mathSinCos(sine, cosine, radians * 40.743664f);
}

/* nn::math::MTX44PerspectiveRad (an SDK header inline, C form): a perspective projection from a vertical field
 * of view in radians. */
static __inline Matrix44 *mtx44PerspectiveRad(Matrix44 *out, f32 fovy, f32 aspect, f32 nearClip, f32 farClip)
{
    f32 (*const m)[4] = (f32 (*)[4])out->values;
    f32 sine, cosine;
    sinCosRad(&sine, &cosine, fovy * 0.5f);
    f32 cot = cosine / sine;
    f32 inverseRange = 1.0f / (farClip - nearClip);
    m[0][0] = cot / aspect;
    m[0][1] = 0.0f;
    m[0][2] = 0.0f;
    m[0][3] = 0.0f;
    m[1][0] = 0.0f;
    m[1][1] = cot;
    m[1][2] = 0.0f;
    m[1][3] = 0.0f;
    m[2][0] = 0.0f;
    m[2][1] = 0.0f;
    m[2][2] = farClip * inverseRange;
    m[2][3] = farClip * nearClip * inverseRange;
    m[3][0] = 0.0f;
    m[3][1] = 0.0f;
    m[3][2] = -1.0f;
    m[3][3] = 0.0f;
    return out;
}

/* nn::math::MTX44PerspectiveDeg (an SDK header inline): the same from a field of view in degrees. */
static __inline Matrix44 *mtx44PerspectiveDeg(Matrix44 *out, f32 fovy, f32 aspect, f32 nearClip, f32 farClip)
{
    return mtx44PerspectiveRad(out, fovy * 0.017453292f, aspect, nearClip, farClip);
}

/* nn::math::MTX44Pivot for the screen's quarter turn: the first two rows swap, the new second one negated. */
static __inline Matrix44 *mtx44PivotQuarterTurn(Matrix44 *out)
{
    f32 (*const m)[4] = (f32 (*)[4])out->values;
    f32 tmp;
    tmp = m[0][0]; m[0][0] = m[1][0]; m[1][0] = -tmp;
    tmp = m[0][1]; m[0][1] = m[1][1]; m[1][1] = -tmp;
    tmp = m[0][2]; m[0][2] = m[1][2]; m[1][2] = -tmp;
    tmp = m[0][3]; m[0][3] = m[1][3]; m[1][3] = -tmp;
    return out;
}

/* Builds the render output's projection command: orthographic when the projection kind is negative, otherwise a
 * perspective rotated for the screen. */
void renderOutputBuildProjection(RenderUpdateStatePrefixA *state, const RenderUpdateContextPrefixA *context)
{
    RenderUpdateCoreA *core = &state->core;
    RenderUpdateParametersA *parameters = &state->parameters;
    RenderUpdateOutputPrefixA *output = core->output;
    f32 nearClip = context->projection.nearClip;
    f32 farClip = context->projection.farClip;
    u8 packet[512];
    if ((s32)(core->projection.kind & 0x80000000) < 0) {
        FUN_0018ee0c(packet, parameters->mode, parameters->value0, parameters->value1, parameters->value2,
                     nearClip, farClip, core->projection.depthOffset);
    } else {
        Matrix44 projection;
        mtx44PerspectiveDeg(&projection, context->projection.fieldOfView, context->projection.aspect, nearClip,
                            farClip);
        mtx44PivotQuarterTurn(&projection);
        Matrix44 converted;
        FUN_0018ab54(&converted, &projection);
        FUN_0018f0ac(packet, parameters->mode, &converted, parameters->value0, parameters->value1,
                     parameters->value2, core->value3, core->value4);
    }
    FUN_0018878c(output, packet);
    output->attribute0 = parameters->attribute0;
    output->attribute1 = parameters->attribute1;
    output->attribute2 = parameters->attribute2;
    output->enabled = 1;
    output->status = 0;
}
}
