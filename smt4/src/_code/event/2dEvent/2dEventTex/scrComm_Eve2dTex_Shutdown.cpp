#include "common.h"

extern "C" {
extern u32 *g_eventTex;
extern u32 g_eventTexHandles[4];
s32 jobIsValid(u32 handle);
void FUN_0026e68c(u32 handle, s32 work);
void FUN_001dbba8(u32 handle);
void jobStop(u32 handle, s32 mode);

// Release the four event textures and stop their owning job.
u32 scrComm_Eve2dTex_Shutdown(void)
{
    if (g_eventTex != NULL && jobIsValid(*g_eventTex)) {
        for (s32 index = 0; index < 4; ++index) {
            if (jobIsValid(g_eventTexHandles[index])) {
                FUN_0026e68c(g_eventTexHandles[index], 0);
                FUN_001dbba8(g_eventTexHandles[index]);
            }
            g_eventTexHandles[index] = 0;
        }
        jobStop(*g_eventTex, 0);
    }
    return 1;
}
}
