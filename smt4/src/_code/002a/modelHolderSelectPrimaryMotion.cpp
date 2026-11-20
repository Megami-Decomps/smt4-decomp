#include "AsdSDK/Source/Gfx/Model/AsdMotionControlApi.h"

extern "C" void modelHolderSelectPrimaryMotion(void *holder, s32 motionIndex, f32 blend)
{
    AsdModelHolderPrefix *view = static_cast<AsdModelHolderPrefix *>(holder);
    modelSelectPrimaryMotion(view->model->node, motionIndex, blend);
}
