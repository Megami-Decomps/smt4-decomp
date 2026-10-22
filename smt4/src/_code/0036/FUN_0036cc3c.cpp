/* NON_MATCHING: off-center projection arithmetic uses different VFP registers, constant loads, and matrix/rotation store scheduling. */
#include "shard/W6_W6Match6_ProjectionCamera.h"

/* Build the oriented off-center projection and the unrotated screen correction. */
extern "C" void FUN_0036cc3c(ProjectionCamera *camera, f32 *projection, f32 *correction)
{
    ProjectionLens *lens = camera->lens;
    u8 orientation = camera->orientation;
    f32 halfHeight = lens->windowSpan * 0.5f;
    f32 nearClip = lens->nearClip;
    f32 farClip = lens->farClip;
    f32 halfWidth = lens->windowSpan * lens->aspect * 0.5f;
    f32 bottom = lens->centerY - halfHeight;
    f32 top = lens->centerY + halfHeight;
    f32 left = lens->centerX - halfWidth;
    f32 right = lens->centerX + halfWidth;
    projection[1] = 0.0f;
    projection[3] = 0.0f;
    projection[4] = 0.0f;
    projection[7] = 0.0f;
    projection[8] = 0.0f;
    projection[9] = 0.0f;
    f32 inverseWidth = 1.0f / (right - left);
    projection[12] = 0.0f;
    projection[13] = 0.0f;
    projection[14] = -1.0f;
    projection[15] = 0.0f;
    f32 horizontalScale = nearClip * 2.0f * inverseWidth;
    f32 inverseDepth = 1.0f / (farClip - nearClip);
    projection[0] = horizontalScale;
    f32 inverseHeight = 1.0f / (top - bottom);
    f32 horizontalOffset = (right + left) * inverseWidth;
    f32 verticalOffset = (top + bottom) * inverseHeight;
    f32 verticalScale = nearClip * 2.0f * inverseHeight;
    projection[2] = horizontalOffset;
    projection[10] = farClip * inverseDepth;
    projection[11] = farClip * nearClip * inverseDepth;
    projection[5] = verticalScale;
    projection[6] = verticalOffset;
    if (orientation != 0 && orientation != 4) {
        if (orientation == 2) {
            projection[0] = -horizontalScale;
            projection[1] = -0.0f;
            projection[2] = -horizontalOffset;
            projection[3] = -0.0f;
            projection[4] = -0.0f;
            projection[7] = -0.0f;
            projection[5] = -verticalScale;
            projection[6] = -verticalOffset;
        } else if (orientation == 3) {
            f32 oldY = projection[1];
            projection[0] = -0.0f;
            projection[1] = -verticalScale;
            projection[2] = -verticalOffset;
            projection[3] = -0.0f;
            projection[6] = horizontalOffset;
            projection[4] = horizontalScale;
            projection[5] = oldY;
        } else {
            projection[0] = projection[4];
            projection[4] = -horizontalScale;
            projection[5] = -0.0f;
            projection[6] = -horizontalOffset;
            projection[7] = -0.0f;
            projection[1] = verticalScale;
            projection[2] = verticalOffset;
        }
    }
    f32 scaleX = camera->scaleX;
    f32 offsetX = camera->offsetX;
    f32 scaleY = camera->scaleY;
    f32 offsetY = camera->offsetY;
    correction[0] = horizontalScale * scaleX;
    correction[1] = 0.0f;
    correction[2] = horizontalOffset * scaleX - offsetX;
    correction[3] = 0.0f;
    correction[4] = 0.0f;
    correction[5] = verticalScale * scaleY;
    correction[6] = verticalOffset * scaleY - offsetY;
    correction[7] = 0.0f;
    correction[8] = 0.0f;
    correction[9] = 0.0f;
    correction[10] = -1.0f;
    correction[11] = 0.0f;
}
