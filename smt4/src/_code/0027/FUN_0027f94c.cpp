#include "AsdSDK/Source/Gfx/Model/AsdMotionValueApi.h"
#include "AsdSDK/Source/Gfx/Model/AsdMotionControlApi.h"

extern "C" f32 FUN_0027f94c(const void *holder)
{
    const AsdModelHolderPrefix *view = static_cast<const AsdModelHolderPrefix *>(holder);
    return ownerGetFloatValue(view->model->node);
}
