#include "common.h"

extern "C" {

void sceneTraverserVisit(s32 handle, u32 arg);
void asdMemFree(void *block);

extern s32 g_effAsdLightHandle;
extern u32 g_asdModelTransformBuilder;

/* Frees a light effect object and, if one is registered, notifies the registered handler. */
void effAsdLightFree(void *light)
{
    asdMemFree(light);
    if (g_effAsdLightHandle != 0) {
        sceneTraverserVisit(g_effAsdLightHandle, g_asdModelTransformBuilder);
    }
}

} /* extern "C" */
