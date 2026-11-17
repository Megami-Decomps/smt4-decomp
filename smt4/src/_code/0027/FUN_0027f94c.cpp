#include "AsdSDK/Source/Gfx/Model/AsdMotionValueApi.h"
#include "AsdSDK/Source/Gfx/Model/AsdMotionControlApi.h"

extern "C" f32 FUN_0027f94c(const void *holder)
{
    const AsdModelHolderPrefix *view = static_cast<const AsdModelHolderPrefix *>(holder);
    return FUN_002b2b64(view->model->node);
}
