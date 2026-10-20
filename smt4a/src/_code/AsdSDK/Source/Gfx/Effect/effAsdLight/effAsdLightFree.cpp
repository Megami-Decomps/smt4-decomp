#include "common.h"

extern "C" {

void FUN_0018cfe4(s32 handle, u32 arg);
void asdMemFree(void *block);

extern s32 g_effAsdLightHandle;
extern u32 DAT_005b3c88;

/* Frees a light effect object and, if one is registered, notifies the registered handler. */
void effAsdLightFree(void *light)
{
    asdMemFree(light);
    if (g_effAsdLightHandle != 0) {
        FUN_0018cfe4(g_effAsdLightHandle, DAT_005b3c88);
    }
}

} /* extern "C" */
