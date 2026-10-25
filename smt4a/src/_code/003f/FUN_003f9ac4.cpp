#include "gfx/CameraMotion.h"
#include "shard/W6_W6Match2_AnimationPlayback.h"
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
typedef char CameraMotionLayoutCheck[
    offsetof(CameraMotionDefinition, projection) == 0x34 &&
    offsetof(CameraMotionResource, clips) == 0x90 &&
    offsetof(CameraMotionOutput, animationTarget) == 0x38 ? 1 : -1];
}

extern "C" {
void FUN_001986c4(CameraMotionCurve *curve, CameraMotionTransform *output, f32 frame);
u32 FUN_00522a08(CameraMotionCurve *curve, f32 *output, f32 frame);
u32 FUN_00198848(CameraMotionCurve *curve, Vec3 *output, f32 frame);
void FUN_0019eb14(CameraLookAt *camera);

static __inline void cameraMotionSampleTransform(CameraMotionClip *clip,
                                                 CameraMotionTransform *output, f32 frame)
{
    if (clip->transformIndex != 0xFF)
        FUN_001986c4(clip->curves[clip->transformIndex], output, frame);
}

static __inline void cameraMotionSampleRoll(CameraMotionClip *clip, f32 *output, f32 frame)
{
    if (clip->rollIndex != 0xFF)
        FUN_00522a08(clip->curves[clip->rollIndex], output, frame);
}

static __inline void cameraMotionSampleTarget(CameraMotionClip *clip, Vec3 *output, f32 frame)
{
    if (clip->targetIndex != 0xFF)
        FUN_00198848(clip->curves[clip->targetIndex], output, frame);
}

bool FUN_003f9ac4(AnimatedObject *object, CameraMotionOutput *output, s32 index, f32 delta)
{
    bool active = true;
    CameraMotionResource *resource = static_cast<CameraMotionResource *>(object->animation.resource);
    CameraMotionClip *clip = resource->clips[index];
    CameraMotionDefinition *definition = resource->definitions[index];
    const CameraMotionProjection *projection = definition->projection;
    if (clip->transformIndex == 0xFF && clip->rollIndex == 0xFF && clip->targetIndex == 0xFF)
        return false;
    CameraMotionTransform transform = definition->transform;
    cameraMotionSampleTransform(clip, &transform, object->progress);
    cameraMotionSampleRoll(clip, &output->camera.rollRadians, object->progress);
    cameraMotionSampleTarget(clip, &output->animationTarget, object->progress);
    memcpy(output->camera.eye, &transform.translation, sizeof(transform.translation));
    output->camera.projection.nearClip = projection->nearClip;
    output->camera.projection.farClip = projection->farClip;
    output->camera.projection.aspect = projection->aspect;
    output->camera.projection.fieldOfView = projection->fieldOfView * 57.295776f;
    FUN_0019eb14(&output->camera);
    object->progress = object->progress + delta;
    if (object->progress > clip->header.duration) {
        active = false;
        object->progress = 0.0f;
    }
    return active;
}
}
