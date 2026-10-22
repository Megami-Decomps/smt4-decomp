/* NON_MATCHING: perspective/rotated/texture matrices are recovered, but the scalar evaluation, VFP allocation, stores, and rotation branch layout differ. */
#include "common.h"

struct FilterProjectionParameters {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ f32 nearPlane;
    /* 0x08 */ f32 farPlane;
    /* 0x0C */ f32 aspect;
    /* 0x10 */ f32 height;
    /* 0x14 */ f32 horizontalOffset;
    /* 0x18 */ f32 verticalOffset;
};

struct FilterProjectionView {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 rotation;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ f32 horizontalScale;
    /* 0x10 */ f32 verticalScale;
    /* 0x14 */ f32 horizontalOffset;
    /* 0x18 */ f32 verticalOffset;
    /* 0x1C */ FilterProjectionParameters *parameters;
};

struct ProjectionMatrix44 { f32 values[16]; };
struct ProjectionMatrix34 { f32 values[12]; };

// Build the perspective matrix, its display rotation, and the corresponding texture projection.
extern "C" void FUN_0044e7a0(FilterProjectionView *self, ProjectionMatrix44 *projection,
                            ProjectionMatrix34 *texture)
{
    const FilterProjectionParameters *parameters = self->parameters;
    u8 rotation = self->rotation;
    f32 nearPlane = parameters->nearPlane;
    f32 farPlane = parameters->farPlane;
    f32 halfWidth = parameters->aspect * parameters->height * 0.5f;
    f32 halfHeight = parameters->height * 0.5f;
    f32 left = parameters->horizontalOffset - halfWidth;
    f32 right = parameters->horizontalOffset + halfWidth;
    f32 bottom = parameters->verticalOffset - halfHeight;
    f32 top = parameters->verticalOffset + halfHeight;
    f32 horizontalReciprocal = 1.0f / (right - left);
    f32 verticalReciprocal = 1.0f / (top - bottom);
    f32 depthReciprocal = 1.0f / (farPlane - nearPlane);
    f32 twiceNear = nearPlane * 2.0f;
    f32 horizontalScale = twiceNear * horizontalReciprocal;
    f32 verticalScale = twiceNear * verticalReciprocal;
    f32 horizontalOffset = (right + left) * horizontalReciprocal;
    f32 verticalOffset = (top + bottom) * verticalReciprocal;
    projection->values[0] = horizontalScale;
    projection->values[1] = 0;
    projection->values[2] = horizontalOffset;
    projection->values[3] = 0;
    projection->values[4] = 0;
    projection->values[5] = verticalScale;
    projection->values[6] = verticalOffset;
    projection->values[7] = 0;
    projection->values[8] = 0;
    projection->values[9] = 0;
    projection->values[10] = farPlane * depthReciprocal;
    projection->values[11] = farPlane * nearPlane * depthReciprocal;
    projection->values[12] = 0;
    projection->values[13] = 0;
    projection->values[14] = -1;
    projection->values[15] = 0;
    switch (rotation) {
    case 0:
    case 4:
        break;
    case 2:
        projection->values[0] = -horizontalScale;
        projection->values[1] = -0.0f;
        projection->values[2] = -horizontalOffset;
        projection->values[3] = -0.0f;
        projection->values[4] = -0.0f;
        projection->values[5] = -verticalScale;
        projection->values[6] = -verticalOffset;
        projection->values[7] = -0.0f;
        break;
    case 3:
        projection->values[0] = -0.0f;
        projection->values[1] = -verticalScale;
        projection->values[2] = -verticalOffset;
        projection->values[3] = -0.0f;
        projection->values[4] = horizontalScale;
        projection->values[5] = 0;
        projection->values[6] = horizontalOffset;
        break;
    default:
        projection->values[0] = 0;
        projection->values[1] = verticalScale;
        projection->values[2] = verticalOffset;
        projection->values[4] = -horizontalScale;
        projection->values[5] = -0.0f;
        projection->values[6] = -horizontalOffset;
        projection->values[7] = -0.0f;
        break;
    }
    texture->values[0] = horizontalScale * self->horizontalScale;
    texture->values[1] = 0;
    texture->values[2] = horizontalOffset * self->horizontalScale - self->horizontalOffset;
    texture->values[3] = 0;
    texture->values[4] = 0;
    texture->values[5] = verticalScale * self->verticalScale;
    texture->values[6] = verticalOffset * self->verticalScale - self->verticalOffset;
    texture->values[7] = 0;
    texture->values[8] = 0;
    texture->values[9] = 0;
    texture->values[10] = -1;
    texture->values[11] = 0;
}
