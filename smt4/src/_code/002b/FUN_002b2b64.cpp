#include "AsdSDK/Source/Gfx/Model/AsdMotionValueApi.h"

extern "C" f32 FUN_002b2b64(const AsdMdlNode *node)
{
    f32 value = 0.0f;
    if (node->motionCount > 0 && node->active != NULL) {
        value = node->active->blend;
    }
    return value;
}
