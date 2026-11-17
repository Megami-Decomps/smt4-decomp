#include "AsdSDK/Source/Gfx/Model/AsdMotionControlApi.h"

extern "C" void FUN_0029bb08(void *holder, f32 speed)
{
    AsdModelHolderPrefix *view = static_cast<AsdModelHolderPrefix *>(holder);
    modelSetScale(view->model->node, speed);
}
