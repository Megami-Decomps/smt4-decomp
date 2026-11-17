#include "AsdSDK/Source/Sys/Gx/AsdGxRenderSystem.h"

extern "C" {
/* Sets clear color `index`. */
void asdGxPresetVectorSet(u32 index, f32 x, f32 y, f32 z, f32 w)
{
    AsdGxClearColor value = {{x, y, z}, w};
    g_asdGxPresets.clearColors[index] = value;
}

} /* extern "C" */
