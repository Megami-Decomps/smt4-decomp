/* NON_MATCHING: native description default-clear stores, source-resource load scheduling and a few core registers differ. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/Source/Gfx/Effect/EmitterCloneResource.h"
#include "shard/S1GfxModel.h"
#include "classes/AsdAllocatorObject.h"
#include "AsdSDK/AsdDebug.h"

struct ModelInstanceDescription {
    u8 first, second;
    u8 unk02[2];
    u32 alignment, auxiliaryAlignment, enabled, flags;
    EmitterCloneModelBody *source, *model;
    EmitterCloneRenderStateOwner *renderState;
    ModelInstanceDescription(u32 initialFlags = 0)
    {
        first = 1;
        second = 1;
        enabled = 1;
        flags = initialFlags;
        source = NULL;
        model = NULL;
        renderState = NULL;
        alignment = 4;
        auxiliaryAlignment = 8;
    }
};
extern "C" {
extern GfxModelState g_gfxSettings;
AsdAllocatorObject *asdMemoryGetAllocatorA();
EmitterCloneModelBody *FUN_001b6d08(const ModelInstanceDescription *description, s32 mode,
    void *resource, AsdAllocatorObject *allocator);
void FUN_00386548(EmitterCloneModelBody *instance);
void *asdMemoryAlloc(s32 heap, s32 alignment, s32 flags, u32 size, s32 clear);
void FUN_0019cbf8(AsdMdlObject *model);
void FUN_0019d57c(AsdMdlObject *model, u32 context);

void FUN_0021230c(AsdMdlObject *destination, const AsdMdlObject *source, s32 mode)
{
    // The instance array and native model pointer extend past the recovered shared model prefix.
    struct ModelView {
        AsdMdlObject prefix;
        u8 unk1C[8];
        EmitterCloneModelBody **instances;
        u32 instanceCount;
        EmitterCloneModelBody *instance;
    };
    struct SharedResource { u32 references; u8 unk04[8]; u32 context; };
    typedef char LayoutCheck[sizeof(ModelInstanceDescription) == 32 &&
        __INTADDR__(&((ModelView *)0)->instance) == 0x2c ? 1 : -1];
    ModelView *result = reinterpret_cast<ModelView *>(destination);
    const ModelView *original = reinterpret_cast<const ModelView *>(source);
    if (mode == 1) {
        original->instance->renderState->state->enabled |= 1;
        AsdAllocatorObject *allocator = asdMemoryGetAllocatorA();
        void *resource = original->instance->source.resource;
        ModelInstanceDescription description;
        description.renderState = original->instance->renderState;
        description.source = original->instance;
        description.model = original->instance;
        result->instance = FUN_001b6d08(&description, 0, resource, allocator);
    } else if (mode == 0) {
        AsdAllocatorObject *allocator = asdMemoryGetAllocatorA();
        void *resource = original->instance->source.resource;
        ModelInstanceDescription description(0x834);
        result->instance = FUN_001b6d08(&description, 0, resource, allocator);
    }
    if ((source->flags & 2) != 0) {
        FUN_00386548(result->instance);
        destination->flags |= 2;
        ++g_gfxSettings.unk40;
    }
    destination->request = source->request;
    SharedResource *resource = static_cast<SharedResource *>(destination->request);
    ++resource->references;
    result->instanceCount = 1;
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Model\\AsdModel.cpp", 0x129b);
    result->instances = static_cast<EmitterCloneModelBody **>(asdMemoryAlloc(0x100, 0x100, 0, result->instanceCount * 4, 1));
    result->instances[0] = result->instance;
    if (mode == 0) {
        FUN_0019cbf8(destination);
    }
    FUN_0019d57c(destination, static_cast<SharedResource *>(destination->request)->context);
}
}
