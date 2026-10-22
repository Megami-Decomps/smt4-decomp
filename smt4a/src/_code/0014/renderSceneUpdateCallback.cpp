#include "common.h"

extern "C" {

void renderSceneUpdate(void *context);
s32 renderSceneUpdateCallback(void *context)
{
    renderSceneUpdate(context);
    return 0;
}

} /* extern "C" */
