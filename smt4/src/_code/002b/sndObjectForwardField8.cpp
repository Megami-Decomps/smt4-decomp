#include "AsdSDK/Source/Gfx/Model/AsdMotionValueApi.h"

/* Forward the model's motion value without discarding the floating-point result. */
extern "C" f32 sndObjectForwardField8(const AsdMdlObject *object)
{
    return FUN_002b2b64(object->node);
}
