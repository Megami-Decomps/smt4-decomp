/* NON_MATCHING: retail reloads original->resource->description for the multiplier (keeping the first load only for the
 * counts) where this build reuses it, and keeps the source in r4 and the clone in r5 (the build: r5 and r4). */
#include "AsdSDK/Source/Gfx/Effect/EmitterCloneResource.h"
#include "AsdSDK/AsdDebug.h"
#include "runtime/String.h"

extern "C" {
void *memAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 blockAlignment, s32 kind);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
void effObjectParticleSetSource(EffEmitter *emitter, u16 kind, EffEmitterDesc *description);
void FUN_0031ce4c(EffEmitter *emitter);
void asdMdlManagerDestroy(EmitterCloneModel *model);
EmitterCloneModel *asdMdlManagerClone(EmitterCloneModel *model, u32 flags);
extern const char g_effObjectParticleEffMiscHeaderFileName[];

/* effMisc.h's inline allocator (retail traces the allocation at ./effMisc.h line 450, as effEmitterCreateSmall's
 * effAllocCleared does): a cleared block from the effect heap. */
static __inline void *effAllocCleared(u32 size)
{
    asdDebugTrace(g_effObjectParticleEffMiscHeaderFileName, 450);
    void *block = memAlloc(0x10000, 0x100, 0, size, 0x10, 1);
    rt_memclr(block, size);
    return block;
}

/* Duplicate emitter parameters and clone the model-backed emitter's rendering object. */
EffEmitter *effObjectParticleClone(EffEmitter *source)
{
    /* The source and destination allocation extend beyond the shared emitter prefix. */
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
    u32 maxCount = effEmitterGetCapacity(description);
    EmitterView *clone = static_cast<EmitterView *>(effAllocCleared(sizeof(EmitterView)));
    clone->handle = -1;
    clone->maxCount = maxCount;
    clone->scale = 1.0f;
    __aeabi_memcpy4(clone->parameters, original->parameters, sizeof(clone->parameters));
    EffEmitter *emitter = reinterpret_cast<EffEmitter *>(clone);
    effObjectParticleSetSource(emitter, original->resource->kind, description);
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
