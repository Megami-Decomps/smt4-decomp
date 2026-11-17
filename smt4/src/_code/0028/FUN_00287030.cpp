#include "AsdSDK/Source/Gfx/Model/AsdMotionControlApi.h"

extern "C" void FUN_00287030(void *holder, f32 time)
{
    AsdModelHolderPrefix *view = static_cast<AsdModelHolderPrefix *>(holder);
    FUN_0028703c(reinterpret_cast<ScalarAnimationOwner *>(view->model->node), time);
}
