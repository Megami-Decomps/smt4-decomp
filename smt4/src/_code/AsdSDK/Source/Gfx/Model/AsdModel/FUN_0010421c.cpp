/* NON_MATCHING: The model-data test uses direct-offset addressing; settings and resource-list bases exchange registers. */
#include "shard/S1GfxModel.h"
#include "Model/ModelResource.h"
#include "gfx/GfxSettings.h"
extern "C" {
extern ModelResourceList DAT_004dae60;
extern void* DAT_00464b70;
void FUN_001108e4(void**);

void FUN_0010421c(void)
{
    if (g_gfxSettings.initialized != 0 && g_gfxSettings.sharedModels <= 0 && g_gfxSettings.modelData != NULL) {
        ModelResource* resource = *DAT_004dae60.begin;
        resource->vtable->destroy(resource);
        resource->allocator->release(resource);
        if (DAT_004dae60.begin != DAT_004dae60.end) {
            --DAT_004dae60.end;
        }
        runtimeDispatchObjectRelease(reinterpret_cast<u32 **>(&DAT_00464b70));
        FUN_001108e4(&DAT_00464b70);
        g_gfxSettings.ready = 0;
    }
}
}
