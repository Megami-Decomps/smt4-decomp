/* NON_MATCHING: angle constant folding and matrix arithmetic/rotation scheduling differ; -O2 candidate. */
#include "shard/W6_W6Match6_ProjectionCamera.h"

extern "C" {
void FUN_0018a924(f32 *sine, f32 *cosine, f32 angle);

// Build the oriented perspective matrix and the camera's screen-space correction.
void cameraBuildProjectionMatrices(ProjectionCamera *camera, f32 *projection, f32 *correction)
{
    ProjectionLens *lens = camera->lens;
    u8 orientation = camera->orientation;
    f32 aspect = lens->aspect;
    f32 nearClip = lens->nearClip;
    f32 farClip = lens->farClip;
    f32 angle = lens->fieldOfView * 0.5f * 40.7436637878418f;
    f32 sine, cosine;
    FUN_0018a924(&sine, &cosine, angle);
    projection[1] = 0.0f;
    projection[2] = 0.0f;
    projection[3] = 0.0f;
    projection[4] = 0.0f;
    projection[6] = 0.0f;
    projection[7] = 0.0f;
    projection[8] = 0.0f;
    projection[9] = 0.0f;
    projection[12] = 0.0f;
    projection[13] = 0.0f;
    projection[14] = -1.0f;
    f32 inverseDepth = 1.0f / (farClip - nearClip);
    projection[15] = 0.0f;
    f32 horizontalScale = (cosine / sine) / aspect;
    projection[0] = horizontalScale;
    projection[5] = cosine / sine;
    projection[10] = farClip * inverseDepth;
    projection[11] = farClip * nearClip * inverseDepth;
    if (orientation != 0 && orientation != 4) {
        if (orientation == 2) {
            projection[0] = -horizontalScale;
            projection[1] = -0.0f;
            projection[2] = -0.0f;
            projection[3] = -0.0f;
            projection[4] = -0.0f;
            projection[5] = -projection[5];
            projection[6] = -0.0f;
            projection[7] = -0.0f;
        } else if (orientation == 3) {
            f32 oldY = projection[1];
            projection[0] = -0.0f;
            projection[1] = -projection[5];
            projection[2] = -0.0f;
            projection[3] = -0.0f;
            projection[4] = horizontalScale;
            projection[5] = oldY;
        } else {
            projection[0] = projection[4];
            projection[1] = projection[5];
            projection[4] = -horizontalScale;
            projection[5] = -0.0f;
            projection[6] = -0.0f;
            projection[7] = -0.0f;
        }
    }
    f32 scaleX = camera->scaleX;
    f32 scaleY = camera->scaleY;
    f32 offsetX = camera->offsetX;
    f32 offsetY = camera->offsetY;
    FUN_0018a924(&sine, &cosine, angle);
    f32 verticalScale = 1.0f / (sine / cosine);
    correction[0] = (verticalScale / aspect) * scaleX;
    correction[1] = 0.0f;
    correction[2] = -offsetX;
    correction[3] = 0.0f;
    correction[4] = 0.0f;
    correction[5] = verticalScale * scaleY;
    correction[6] = -offsetY;
    correction[7] = 0.0f;
    correction[8] = 0.0f;
    correction[9] = 0.0f;
    correction[10] = -1.0f;
    correction[11] = 0.0f;
}
}
