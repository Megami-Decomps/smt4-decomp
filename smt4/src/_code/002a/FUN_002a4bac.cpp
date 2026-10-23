/* NON_MATCHING: owner/slot saved-register allocation differs; the adjacent camera-reset tail call matches. */
#include "shard/S1GfxModel.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "classes/AsdAllocatorObject.h"
#include <stddef.h>

extern "C" {
void asdModelSlotRelease(u32);
void asdMdlManagerMarkDestroy(AsdMdlObject *);
void asdMdlManagerDestroy(AsdMdlObject *);
void FUN_00152ed8(ModelSelector *);
void asdMemFree(void *);
void asdWorkAreaReset();
}

static inline void destroyManagedModel(AsdMdlObject *&model)
{
    if (model != NULL) {
        asdMdlManagerMarkDestroy(model);
        asdMdlManagerDestroy(model);
        model = NULL;
    }
}

static inline void releaseOwnedModelSlot(ModelSlot *&slot)
{
    ModelSlot *object = slot;
    if (object != NULL) {
        struct SlotLifecycle {
            void (*destroy)(ModelSlot *);
        };
        const SlotLifecycle *methods = *reinterpret_cast<const SlotLifecycle *const *>(object);
        methods->destroy(object);
        static_cast<AsdAllocatorObject *>(object->sceneObject)->release(object);
        slot = NULL;
    }
}

extern "C" void FUN_002a4bac(ModelSelector *selector)
{
    /* Both full banks extend past ModelSelector's two declared slots. */
    struct ModelOwnerView {
        s32 count;
        s32 selected;
        s32 secondaryCount;
        u8 prefix0C[0xC];
        void *storage;
        AsdMdlObject *mainModel;
        AsdMdlObject *firstModel;
        AsdMdlObject *secondModel;
        AsdMdlObject *optionalModel;
        u8 prefix2C[0x540];
        ModelSlot *primary[32];
        ModelSlot *secondary[32][32];
    };
    typedef char ModelOwnerOffsets[
        offsetof(ModelOwnerView, storage) == 0x18 &&
        offsetof(ModelOwnerView, optionalModel) == 0x28 &&
        offsetof(ModelOwnerView, primary) == 0x56C &&
        offsetof(ModelOwnerView, secondary) == 0x5EC ? 1 : -1];
    ModelOwnerView *owner = reinterpret_cast<ModelOwnerView *>(selector);
    asdModelSlotRelease(0);
    destroyManagedModel(owner->mainModel);
    destroyManagedModel(owner->optionalModel);
    destroyManagedModel(owner->firstModel);
    destroyManagedModel(owner->secondModel);
    FUN_00152ed8(selector);
    for (s32 i = 0; i < owner->count; ++i) {
        releaseOwnedModelSlot(owner->primary[i]);
        for (s32 j = 0; j < owner->secondaryCount; ++j)
            releaseOwnedModelSlot(owner->secondary[i][j]);
    }
    if (owner->storage != NULL) {
        asdMemFree(owner->storage);
        owner->storage = NULL;
    }
    asdWorkAreaReset();
}
