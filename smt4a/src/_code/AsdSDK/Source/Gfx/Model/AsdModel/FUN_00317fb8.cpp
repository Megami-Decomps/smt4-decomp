/* NON_MATCHING: The model-data test uses direct-offset addressing; settings and resource-list bases exchange registers. */
#include "shard/S1GfxModel.h"
#include "Model/ModelResource.h"
extern "C" {
extern GfxModelState g_gfxSettings;
extern ModelResourceList DAT_00636ee0;
extern void* DAT_005b3c74;
void FUN_001c0544(void**);
void FUN_00451550(void**);

void FUN_00317fb8(void)
{
    if (g_gfxSettings.unk01 != 0 && g_gfxSettings.unk40 <= 0 && g_gfxSettings.modelData != NULL) {
        ModelResource* resource = *DAT_00636ee0.begin;
        resource->vtable->destroy(resource);
        resource->allocator->release(resource);
        if (DAT_00636ee0.begin != DAT_00636ee0.end) {
            --DAT_00636ee0.end;
        }
        FUN_001c0544(&DAT_005b3c74);
        FUN_00451550(&DAT_005b3c74);
        g_gfxSettings.unk02 = 0;
    }
}
}
