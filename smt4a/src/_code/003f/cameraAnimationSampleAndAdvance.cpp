/* NON_MATCHING: 84 lines (128 vs 128 rows): curve-sampling helpers and progress/return flow match sibling cameraMotionSampleAtFrame; retail copies the full static transform temporary in the animationCount==0 path and uses different VFP register numbering (s16/s17/s18). */
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
void FUN_001986c4(CameraAnimationCurve *curve, CameraAnimationTransform *output, f32 frame);
u32 FUN_00198848(CameraAnimationCurve *curve, Vec3 *output, f32 frame);
u32 FUN_00522a08(CameraAnimationCurve *curve, f32 *output, f32 frame);
void FUN_0019eb14(CameraAnimationOutput *camera);

static __inline void cameraAnimationSampleTransform(CameraAnimationClip *clip,
                                                    CameraAnimationTransform *output, f32 frame)
{
    if (clip->transformIndex != 0xFF)
        FUN_001986c4(clip->curves[clip->transformIndex], output, frame);
}

static __inline void cameraAnimationSampleTarget(CameraAnimationClip *clip, Vec3 *output, f32 frame)
{
    if (clip->targetIndex != 0xFF)
        FUN_00198848(clip->curves[clip->targetIndex], output, frame);
}

static __inline void cameraAnimationSampleRoll(CameraAnimationClip *clip, f32 *output, f32 frame)
{
    if (clip->rollIndex != 0xFF)
        FUN_00522a08(clip->curves[clip->rollIndex], output, frame);
}

static __inline void cameraAnimationSampleFieldOfView(CameraAnimationClip *clip, f32 *output, f32 frame)
{
    if (clip->fieldOfViewIndex != 0xFF)
        FUN_00522a08(clip->curves[clip->fieldOfViewIndex], output, frame);
}

bool cameraAnimationSampleAndAdvance(AnimatedObject *object, CameraAnimationOutput *output, s32 index, f32 delta)
{
    bool active = true;
    CameraAnimationResource *resource =
        (CameraAnimationResource *)object->animation.resource;
    CameraAnimationDefinition *definition = resource->definitions[index];
    const CameraAnimationProjection *projection = definition->projection;
    if (resource->animationCount == 0) {
        output->target.x = definition->target->x;
        output->target.y = definition->target->y;
        output->target.z = definition->target->z;
        CameraAnimationTransform transform = definition->transform;
        output->position = transform.translation;
        output->nearClip = projection->nearClip;
        output->farClip = projection->farClip;
        output->aspect = projection->aspect;
        output->fieldOfView = projection->fieldOfView * 57.295776f;
        return true;
    }
    CameraAnimationClip *clip = resource->clips[index];
    if (clip->transformIndex == 0xFF && clip->targetIndex == 0xFF && clip->rollIndex == 0xFF)
        return false;
    CameraAnimationTransform transform = definition->transform;
    cameraAnimationSampleTransform(clip, &transform, object->progress);
    cameraAnimationSampleTarget(clip, &output->target, object->progress);
    cameraAnimationSampleRoll(clip, &output->roll, object->progress);
    output->position = transform.translation;
    output->nearClip = projection->nearClip;
    output->farClip = projection->farClip;
    output->aspect = projection->aspect;
    f32 fieldOfView = 0.0f;
    cameraAnimationSampleFieldOfView(clip, &fieldOfView, object->progress);
    output->fieldOfView = fieldOfView * 57.295776f;
    if (output->fieldOfView == 0.0f)
        output->fieldOfView = projection->fieldOfView * 57.295776f;
    FUN_0019eb14(output);
    object->progress = object->progress + delta;
    if (object->progress > clip->header.duration) {
        active = false;
        object->progress = 0.0f;
    }
    return active;
}
}
