#include "AsdSDK/Source/Gfx/Model/AsdMotionValueApi.h"

namespace {
/* The observed prefix of the model holder, not a complete object definition. */
struct ModelHolderView {
    u8 prefix[8];
    AsdMdlObject *model;
};
}

extern "C" f32 FUN_0027f94c(const void *holder)
{
    const ModelHolderView *view = static_cast<const ModelHolderView *>(holder);
    return FUN_002b2b64(view->model->node);
}
