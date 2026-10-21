/* NON_MATCHING: retail copies a full static transform temporary instead of only translation; vector-copy, boolean-return registers and frame padding differ. Original SDK value/temporary ABI is unrecovered. */
#include "shard/W5_W5Match7_AnimatedObject.h"
#include "shard/W6_W6Match2_AnimationPlayback.h"
#include "status/StatusCamera.h"

struct CameraAnimationCurve;
struct CameraAnimationTransform {
    Vec3 rotation;
    Vec3 scale;
    Vec3 translation;
};
struct CameraAnimationProjection {
    f32 nearClip;
    f32 farClip;
    f32 aspect;
    f32 fieldOfView;
};
struct CameraAnimationDefinition {
    u32 unk00;
    CameraAnimationTransform transform;
    u8 unk28[8];
    const Vec3 *target;
    const CameraAnimationProjection *projection;
};
struct CameraAnimationClip {
    AnimationClip header;
    CameraAnimationCurve **curves;
    u8 unk10[0xa];
    u8 transformIndex;
    u8 targetIndex;
    u8 rollIndex;
    u8 unk1d[4];
    u8 fieldOfViewIndex;
};
struct CameraAnimationResource {
    u8 unk00[0x48];
    CameraAnimationDefinition **definitions;
    u8 unk4c[0x44];
    CameraAnimationClip **clips;
    u16 animationCount;
};
struct CameraAnimationOutput {
    Vec3 position;
    Vec3 target;
    Vec3 up;
    f32 fieldOfView;
    f32 nearClip;
    f32 farClip;
    f32 aspect;
    f32 roll;
};

extern "C" {
void FUN_001986c4(CameraAnimationCurve *, CameraAnimationTransform *, f32);
u32 FUN_00198848(CameraAnimationCurve *, Vec3 *, f32);
u32 FUN_00522a08(CameraAnimationCurve *, f32 *, f32);
void FUN_0019eb14(CameraAnimationOutput *);

bool cameraAnimationSampleAndAdvance(AnimatedObject *object, CameraAnimationOutput *output, s32 index, f32 delta)
{
    const f32 radiansToDegrees = 57.295776f;
    CameraAnimationResource *resource =
        static_cast<CameraAnimationResource *>(object->animation.resource);
    CameraAnimationDefinition *definition = resource->definitions[index];
    const CameraAnimationProjection *projection = definition->projection;
    if (resource->animationCount == 0) {
        output->target = *definition->target;
        output->position = definition->transform.translation;
        output->nearClip = projection->nearClip;
        output->farClip = projection->farClip;
        output->aspect = projection->aspect;
        output->fieldOfView = projection->fieldOfView * radiansToDegrees;
        return true;
    }
    CameraAnimationClip *clip = resource->clips[index];
    if (clip->transformIndex == 0xff && clip->targetIndex == 0xff && clip->rollIndex == 0xff)
        return false;
    CameraAnimationTransform transform = definition->transform;
    if (clip->transformIndex != 0xff)
        FUN_001986c4(clip->curves[clip->transformIndex], &transform, object->progress);
    if (clip->targetIndex != 0xff)
        FUN_00198848(clip->curves[clip->targetIndex], &output->target, object->progress);
    if (clip->rollIndex != 0xff)
        FUN_00522a08(clip->curves[clip->rollIndex], &output->roll, object->progress);
    output->position = transform.translation;
    output->nearClip = projection->nearClip;
    output->farClip = projection->farClip;
    output->aspect = projection->aspect;
    f32 fieldOfView = 0.0f;
    if (clip->fieldOfViewIndex != 0xff)
        FUN_00522a08(clip->curves[clip->fieldOfViewIndex], &fieldOfView, object->progress);
    output->fieldOfView = fieldOfView * radiansToDegrees;
    if (output->fieldOfView == 0.0f)
        output->fieldOfView = projection->fieldOfView * radiansToDegrees;
    FUN_0019eb14(output);
    f32 time = object->progress + delta;
    object->progress = time;
    if (time > clip->header.duration) {
        object->progress = 0.0f;
        return false;
    }
    return true;
}
}
