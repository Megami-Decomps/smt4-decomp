#include "common.h"

extern "C" {

void renderSceneUpdate(void *context);
s32 FUN_00141260(void *context)
{
    renderSceneUpdate(context);
    return 0;
}

} /* extern "C" */
