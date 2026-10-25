#include "shard/W5_W5Match7_AnimatedObject.h"
#include "gfx/CameraAnimationApply.h"

struct CameraAnimationOutput;
extern "C" bool cameraAnimationSampleAndAdvance(AnimatedObject *object, CameraAnimationOutput *output, s32 index, f32 delta);

// Sample frame zero into the requested output, keeping the camera's progress at zero.
extern "C" void controllerApplyAtUnitScale(void *controller, void *output, s32 index)
{
    AnimatedObject *object = static_cast<AnimatedObject *>(controller);
    object->progress = 0.0f;
    cameraAnimationSampleAndAdvance(object, static_cast<CameraAnimationOutput *>(output), index, 1.0f);
    object->progress = 0.0f;
}
