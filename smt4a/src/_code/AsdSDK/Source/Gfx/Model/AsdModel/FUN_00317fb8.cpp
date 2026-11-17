/* NON_MATCHING: The model-data test uses direct-offset addressing; settings and resource-list bases exchange registers. */
#include "shard/S1GfxModel.h"
#include "Model/ModelResource.h"
#include "gfx/GfxSettings.h"
extern "C" {
extern ModelResourceList DAT_00636ee0;
extern void* DAT_005b3c74;
void FUN_00451550(void**);

void FUN_00317fb8(void)
{
    if (g_gfxSettings.initialized != 0 && g_gfxSettings.sharedModels <= 0 && g_gfxSettings.modelData != NULL) {
        ModelResource* resource = *DAT_00636ee0.begin;
        resource->vtable->destroy(resource);
        resource->allocator->release(resource);
        if (DAT_00636ee0.begin != DAT_00636ee0.end) {
            --DAT_00636ee0.end;
        }
        runtimeDispatchObjectRelease(reinterpret_cast<u32 **>(&DAT_005b3c74));
        FUN_00451550(&DAT_005b3c74);
        g_gfxSettings.ready = 0;
    }
}
}
