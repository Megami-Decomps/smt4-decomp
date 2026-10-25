/* NON_MATCHING: registry begin/end load pairing and removed-flag materialization, owned-object loop registers, and graphics-global base selection differ. */
#include "gfx/LightRegistry.h"
#include "classes/AsdAllocatorObject.h"
#include "shard/S1GfxModel.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"

/* An object with a virtual destructor in slot 0 that is handed back to the allocator it came from. */
struct OwnedObject {
    /* 0x00 */ void (**vtable)(OwnedObject *self);
    /* 0x04 */ AsdAllocatorObject *allocator;
};

/* The graphics resource file the set was loaded from. */
struct ResGraphicsHandle {
    /* 0x00 */ s32 file;
};

/* Everything a light group owns: registrations, objects and loaded resources. */
struct LightResourceSet {
    /* 0x00 */ LightRegistration **lights;
    /* 0x04 */ s32 lightCount;
    /* 0x08 */ void *lightData;
    /* 0x0C */ s32 emitterCount;
    /* 0x10 */ OwnedObject **emitters;
    /* 0x14 */ void *emitterData;
    /* 0x18 */ s32 effectCount;
    /* 0x1C */ OwnedObject **effects;
    /* 0x20 */ ResGraphicsHandle *resource;
    /* 0x24 */ void *extra;
};

extern "C" {
extern GfxModelState g_gfxSettings;

void sceneTraverserVisit(u32 traverser, u32 root);
void nw_gfx_res_ResGraphicsFile_Cleanup(s32 *file);

/* Destroys an object in an owned-object array and clears its slot. */
static inline void destroyOwned(OwnedObject *&slot)
{
    OwnedObject *object = slot;

    if (object != NULL) {
        object->vtable[0](object);
        object->allocator->release(object);
        slot = NULL;
    }
}

/* Unregisters the group's lights and releases every object and buffer it owns. */
void FUN_00263e50(LightResourceSet *set)
{
    s32 i;
    s32 handle;

    for (i = 0; i < set->lightCount; i++) {
        LightRegistration *light = set->lights[i];
        LightRegistry *registry = light->registry;

        if (registry != NULL && registry->remove(light)) {
            light->registry = NULL;
        }
    }
    if (set->lightData != NULL) {
        asdMemFree(set->lightData);
    }
    if (set->emitters != NULL) {
        for (i = 0; i < set->emitterCount; i++) {
            destroyOwned(set->emitters[i]);
        }
        asdMemFree(set->emitters);
    }
    if (set->emitterData != NULL) {
        asdMemFree(set->emitterData);
    }
    if (set->effects != NULL) {
        for (i = 0; i < set->effectCount; i++) {
            destroyOwned(set->effects[i]);
        }
        asdMemFree(set->effects);
    }
    for (i = 0; i < set->lightCount; i++) {
        destroyOwned(reinterpret_cast<OwnedObject *&>(set->lights[i]));
    }
    asdMemFree(set->lights);
    handle = set->resource->file;
    if (handle != 0) {
        nw_gfx_res_ResGraphicsFile_Cleanup(&handle);
    }
    asdMemFreeNonNull(set->resource);
    asdMemFree(set->extra);
    asdMemFree(set);
    sceneTraverserVisit(g_gfxSettings.attachInfo[0], g_gfxSettings.transformBuilder[0]);
}

} /* extern "C" */
