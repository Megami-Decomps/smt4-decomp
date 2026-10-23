/* NON_MATCHING: channel frame/output addresses are loaded after the sentinel test, and duration comparison reverses the VFP operands. */
#include "shard/W5_W5Match7_AnimatedObject.h"
#include "shard/W6_W6Match2_AnimationPlayback.h"
#include "shard/W6_W6Match6_ProjectionCamera.h"
#include "status/StatusCamera.h"
#include <string.h>

namespace {
struct CameraMotionCurve;
struct CameraMotionTransform {
    Vec3 rotation;
    Vec3 scale;
    Vec3 translation;
};
struct CameraMotionProjection {
    f32 nearClip;
    f32 farClip;
    f32 aspect;
    f32 fieldOfView;
};
struct CameraMotionDefinition {
    u32 unk00;
    CameraMotionTransform transform;
    u8 unk28[0xC];
    const CameraMotionProjection *projection;
};
struct CameraMotionClip {
    AnimationClip header;
    CameraMotionCurve **curves;
    u8 unk10[0xA];
    u8 transformIndex;
    u8 unk1B;
    u8 rollIndex;
    u8 unk1D;
    u8 targetIndex;
};
struct CameraMotionResource {
    u8 unk00[0x48];
    CameraMotionDefinition **definitions;
    u8 unk4C[0x44];
    CameraMotionClip **clips;
};
// The sampled target extends beyond the shared 0x38-byte CameraLookAt prefix.
struct SampledCamera {
    CameraLookAt camera;
    Vec3 animationTarget;
};
typedef char CameraMotionLayoutCheck[
    offsetof(CameraMotionDefinition, projection) == 0x34 &&
    offsetof(CameraMotionResource, clips) == 0x90 &&
    offsetof(SampledCamera, animationTarget) == 0x38 ? 1 : -1];
}

extern "C" {
void FUN_001986c4(CameraMotionCurve *curve, CameraMotionTransform *output, f32 frame);
u32 FUN_00522a08(CameraMotionCurve *curve, f32 *output, f32 frame);
u32 FUN_00198848(CameraMotionCurve *curve, Vec3 *output, f32 frame);
void FUN_0019eb14(CameraLookAt *camera);

bool FUN_003f9ac4(AnimatedObject *object, SampledCamera *output, s32 index, f32 delta)
{
    bool active = true;
    CameraMotionResource *resource = static_cast<CameraMotionResource *>(object->animation.resource);
    CameraMotionClip *clip = resource->clips[index];
    CameraMotionDefinition *definition = resource->definitions[index];
    const CameraMotionProjection *projection = definition->projection;
    if (clip->transformIndex == 0xFF && clip->rollIndex == 0xFF && clip->targetIndex == 0xFF)
        return false;
    CameraMotionTransform transform = definition->transform;
    if (clip->transformIndex != 0xFF)
        FUN_001986c4(clip->curves[clip->transformIndex], &transform, object->progress);
    if (clip->rollIndex != 0xFF)
        FUN_00522a08(clip->curves[clip->rollIndex], &output->camera.rollRadians, object->progress);
    if (clip->targetIndex != 0xFF)
        FUN_00198848(clip->curves[clip->targetIndex], &output->animationTarget, object->progress);
    memcpy(output->camera.eye, &transform.translation, sizeof(transform.translation));
    output->camera.projection.nearClip = projection->nearClip;
    output->camera.projection.farClip = projection->farClip;
    output->camera.projection.aspect = projection->aspect;
    output->camera.projection.fieldOfView = projection->fieldOfView * 57.295776f;
    FUN_0019eb14(&output->camera);
    f32 frame = object->progress + delta;
    object->progress = frame;
    if (frame > clip->header.duration) {
        active = false;
        object->progress = 0.0f;
    }
    return active;
}
}
