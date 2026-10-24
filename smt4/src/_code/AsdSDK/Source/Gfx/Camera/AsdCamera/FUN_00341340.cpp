/* NON_MATCHING: readable rewrite from retail disassembly compiles (219 vs 211 rows); retail hoists the loop-invariant model/animation pointers into callee-saved registers and the relative-offset resolves differ; unnamed scene-builder types are file-local */
#include "common.h"

extern "C" {

// Run-time type descriptor walked by the scene object casts.
struct TypeInfo {
    const TypeInfo* parent;
};

// Polymorphic scene object: vtable slot 2 returns its type, slot 3 takes the model it binds to.
struct SceneObject;
struct SceneObjectVtbl {
    void* slot0;
    void* slot1;
    const TypeInfo* (*getTypeInfo)(SceneObject* self);
    void (*bind)(SceneObject* self, void* model);
};
struct SceneObject {
    const SceneObjectVtbl* vtbl;
};

// Allocator vtable slot 2 allocates (size, alignment).
struct Allocator;
struct AllocatorVtbl {
    void* slot0;
    void* slot1;
    void* (*allocate)(Allocator* self, u32 size, u32 alignment);
};
struct Allocator {
    const AllocatorVtbl* vtbl;
};

// Options the scene builder takes when creating an object from a resource.
struct SceneBuildDesc {
    void* resource;         // 0x00
    u8 enabled;             // 0x04
    u32 unk08;              // 0x08
    u32 unk0c;              // 0x0c
    u32 unk10;              // 0x10
    u32 unk14;              // 0x14
    u32 unk18;              // 0x18
    u32 unk1c;              // 0x1c
    u32 unk20;              // 0x20
    u8 unk24;               // 0x24
};

struct AnimDesc {
    void* resource;         // 0x00
    f32 startTime;          // 0x04
    u32 flags;              // 0x08
    u8 enabled;             // 0x0c
};

// Model set: camera object, the created models and their animation slots.
struct ModelSet {
    s32 index;              // 0x000: next model slot
    u32 unk004;
    s32 animCount;          // 0x008
    u8 unk00c[0x18 - 0xc];
    u8* file;               // 0x018
    u8 unk01c[0x2c - 0x1c];
    u8 camera[0x534 - 0x2c];    // 0x02c
    f32 position[3];        // 0x534
    f32 target[3];          // 0x540
    f32 reserved;           // 0x54c
    f32 nearClip;           // 0x550
    f32 aspect;             // 0x554
    f32 farClip;            // 0x558
    f32 up[3];              // 0x55c
    f32 distance;           // 0x568
};

extern const TypeInfo DAT_0044e858;
extern const TypeInfo DAT_0044e820;

u8* asdLoadFileSyncDefault(void* path);
Allocator* asdMemoryGetDefaultAllocator(void);
Allocator* asdMemoryGetAllocatorA(void);
SceneObject* nw_gfx_SceneBuilder_CreateObject(SceneBuildDesc* desc, Allocator* defaultAllocator, Allocator* allocatorA);
void* _ZN9Obj42111cC1Ej(void* self, Allocator* allocator);
void FUN_002a5960(void* self, AnimDesc* desc, f32 startTime, u32 flags, s32 enabled);
void FUN_002c2044(void* camera, s32 arg);
void FUN_002c159c(void* camera);
void FUN_002c1edc(void* camera, f32* position, f32* target, f32* up);
void FUN_002c1e30(void* camera, s32 arg, f32 a, f32 b, f32 c, f32 d);
void FUN_00298d50(void* camera);
void modelSelectionActivate(ModelSet* set, s32 a, s32 b);

// Resolves a self-relative offset stored at `field` (0 means none).
static inline void* resolveRelative(u8* field)
{
    s32 offset = *reinterpret_cast<s32*>(field);
    return offset != 0 ? field + offset : NULL;
}

// Walks the type chain of `object` looking for `type`.
static SceneObject* castTo(SceneObject* object, const TypeInfo* type)
{
    if (object == NULL) return NULL;
    for (const TypeInfo* t = object->vtbl->getTypeInfo(object); t != NULL; t = t->parent) {
        if (t == type) return object;
    }
    return NULL;
}

// Loads a model-set file and instantiates every model in it with its animation slots,
// then sets up the default camera and selects the first model.
void FUN_00341340(ModelSet* set, void* path)
{
    u8* file = asdLoadFileSyncDefault(path);
    set->file = file;
    u8* models = static_cast<u8*>(resolveRelative(file + 0x48));
    u8* entry = models != NULL ? models + 0x1c : NULL;
    u8* end = entry + *reinterpret_cast<s32*>(file + 0x44) * 0x10;
    for (; entry != end; entry += 0x10) {
        SceneBuildDesc desc;
        desc.resource = resolveRelative(entry + 0xc);
        desc.enabled = 1;
        desc.unk08 = 8;
        desc.unk0c = 4;
        desc.unk10 = 0;
        desc.unk14 = 0;
        desc.unk18 = 0;
        desc.unk1c = 4;
        desc.unk20 = 0;
        desc.unk24 = 1;
        SceneObject* object = nw_gfx_SceneBuilder_CreateObject(&desc, asdMemoryGetDefaultAllocator(), asdMemoryGetAllocatorA());
        object = castTo(object, &DAT_0044e858);
        object = castTo(object, &DAT_0044e820);
        reinterpret_cast<SceneObject**>(reinterpret_cast<u8*>(set) + 0x56c)[set->index] = object;

        u8* modelBytes = reinterpret_cast<u8*>(object);
        u8* binding = *reinterpret_cast<u8**>(modelBytes + 0x268);
        s32 animCount = *reinterpret_cast<s32*>(file + 0x7c);
        if (binding != NULL) {
            f32 startTime = *reinterpret_cast<f32*>(*reinterpret_cast<u8**>(binding + 8) + 0x10);
            for (s32 i = 0; i < animCount; i++) {
                u8* animTable = static_cast<u8*>(resolveRelative(file + 0x80));
                void* animResource = NULL;
                if (animTable != NULL) animResource = resolveRelative(animTable + i * 0x10 + 0x28);
                AnimDesc desc2;
                desc2.resource = animResource;
                desc2.startTime = startTime;
                desc2.flags = 0x40;
                desc2.enabled = 1;
                Allocator* allocator = asdMemoryGetDefaultAllocator();
                void* memory = allocator->vtbl->allocate(allocator, 0x74, 4);
                void* animator = NULL;
                if (memory != NULL) {
                    _ZN9Obj42111cC1Ej(memory, allocator);
                    FUN_002a5960(memory, &desc2, startTime, 0x40, 1);
                    animator = memory;
                }
                reinterpret_cast<void**>(set)[set->index * 0x20 + i + 0x17b] = animator;
                (*reinterpret_cast<void (**)(void*, void*)>(*reinterpret_cast<u8**>(animator) + 0xc))(animator, binding);
                u8* slot = reinterpret_cast<u8*>(reinterpret_cast<void**>(set)[set->index * 0x20 + i + 0x17b]);
                u32 source = *reinterpret_cast<u32*>(slot + 0x44);
                (*reinterpret_cast<void (**)(u32)>(slot + 0x4c))(*reinterpret_cast<u32*>(slot + 0x50));
                u32 previous = *reinterpret_cast<u32*>(slot + 0x38);
                *reinterpret_cast<u32*>(slot + 0x38) = source;
                *reinterpret_cast<u32*>(slot + 0x3c) = previous;
                *(slot + 0x58) = 1;
                set->animCount++;
            }
        }
        set->index++;
    }

    FUN_002c2044(set->camera, 1);
    set->position[0] = 0.0f;
    set->position[1] = 0.0f;
    set->position[2] = 0.0f;
    set->target[0] = 0.0f;
    set->target[1] = 0.0f;
    set->target[2] = 5.0f;
    set->reserved = 0.0f;
    set->nearClip = 30.0f;
    set->aspect = 1.0f;
    set->farClip = 10000.0f;
    set->up[0] = 0.0f;
    set->up[1] = 1.0f;
    set->up[2] = 0.0f;
    set->distance = 5.0f;
    FUN_002c159c(set->camera);
    FUN_002c1edc(set->camera, set->position, set->target, set->up);
    FUN_002c1e30(set->camera, 1, set->nearClip, set->aspect, set->farClip, 1.6666666f);
    FUN_00298d50(set->camera);
    modelSelectionActivate(set, 0, -1);
}

} /* extern "C" */
