#include "AsdSDK/Source/Gfx/Model/AsdMotionValueApi.h"

extern "C" f32 ownerGetFloatValue(const AsdMdlNode *node)
{
    f32 value = 0.0f;
    if (node->motionCount > 0 && node->active != NULL) {
        value = node->active->blend;
    }
    return value;
}
