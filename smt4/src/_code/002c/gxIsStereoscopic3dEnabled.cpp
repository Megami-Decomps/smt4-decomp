#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"
#include "AsdSDK/Source/Sys/Gx/AsdGxCommandList.h"

extern "C" {
u32 gxIsStereoscopic3dEnabled(void)
{
    return g_asdGxPresets.stereoMode;
}

} /* extern "C" */
