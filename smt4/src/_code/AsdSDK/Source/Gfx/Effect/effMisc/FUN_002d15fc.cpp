/* NON_MATCHING: description reloads fold; allocation-size constant lifetime and result registers differ. */
#include "AsdSDK/Source/Gfx/Effect/EmitterCloneResource.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
void *memAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 blockAlignment, s32 kind);
void rt_memclr(void *memory, u32 size);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
void FUN_00313760(EffEmitter *emitter, u16 kind, EffEmitterDesc *description);
void FUN_0031ce4c(EffEmitter *emitter);
void asdMdlManagerDestroy(EmitterCloneModel *model);
EmitterCloneModel *asdMdlManagerClone(EmitterCloneModel *model, u32 flags);
extern const char DAT_004102f4[];

/* Duplicate emitter parameters and clone the model-backed emitter's rendering object. */
EffEmitter *FUN_002d15fc(EffEmitter *source)
{
    // The source and destination allocation extend beyond the shared emitter prefix.
    struct EmitterView {
        u32 maxCount;
        s32 handle;
        f32 scale;
        u16 kind;
        u8 unk0e[2];
        u8 parameters[0x44];
        EmitterCloneModel *model;
        u8 unk58[0x44];
        EmitterCloneResource *resource;
        u8 unka0[8];
    };
    typedef char EmitterViewLayout[sizeof(EmitterView) == 0xa8 &&
        offsetof(EmitterView, resource) == 0x9c ? 1 : -1];
    EmitterView *original = reinterpret_cast<EmitterView *>(source);
    EffEmitterDesc *description = original->resource->description;
    s32 count = description->countOverride;
    if (count == 0) {
        count = description->countDefault;
    }
    u32 maxCount = count * original->resource->description->multiplier;
    if (maxCount > 100) {
        maxCount = 100;
    }
    asdDebugTrace(DAT_004102f4, 450);
    EmitterView *clone = static_cast<EmitterView *>(memAlloc(0x10000, 0x100, 0, 0xa8, 0x10, 1));
    rt_memclr(clone, 0xa8);
    clone->handle = -1;
    clone->maxCount = maxCount;
    clone->scale = 1.0f;
    __aeabi_memcpy4(clone->parameters, original->parameters, sizeof(clone->parameters));
    EffEmitter *emitter = reinterpret_cast<EffEmitter *>(clone);
    FUN_00313760(emitter, original->resource->kind, description);
    if (clone->resource->data != NULL) {
        if (original->kind == 3) {
            if (clone->model != NULL) {
                asdMdlManagerDestroy(clone->model);
            }
            clone->model = asdMdlManagerClone(original->model, 0);
            clone->model->object->body->renderState->state->enabled = 1;
        }
        clone->kind = original->kind;
        FUN_0031ce4c(emitter);
    }
    return emitter;
}
}
