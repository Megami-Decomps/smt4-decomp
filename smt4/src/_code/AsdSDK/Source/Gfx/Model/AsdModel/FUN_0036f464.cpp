/* NON_MATCHING: readable rewrite with self-relative table helpers compiles; retail inlines the offset resolution differently (170 vs 169 rows) and some argument roles are inferred */
#include "common.h"

struct Allocator;
struct AllocatorVTable {
    void* slot0;
    void* slot1;
    void* (*allocate)(Allocator* self, u32 size, u32 alignment);   // 0x08
};
struct Allocator {
    AllocatorVTable* vtable;
};

// Binary model resource: tables are stored as self-relative offsets (0 = absent).
struct ModelResource {
    u32 magic;              // 0x00
    u8 unk04[0x18];
    u32 headerOffset;       // 0x1c
    s32 headerCount;        // 0x20
    u32 unk24;
    s32 materialCount;      // 0x28
    u32 materialOffset;     // 0x2c
    u32 shaderCount;        // 0x30
    u32 shaderOffset;       // 0x34
    u32 runtimeSet;         // 0x38
    void* runtimeCache;     // 0x3c
    void* runtimeBinding;   // 0x40
    Allocator* allocator;   // 0x44
};

// Material record, reached through its own self-relative offset.
struct MaterialRecord {
    u32 unk00;
    u32 shader;             // 0x04
    u32 program;            // 0x08
    u32 shaderIndex;        // 0x0c
    s32 programIndex;       // 0x10
};

struct RuntimeBinding {
    void* header;           // 0x000
    u32 unk004;
    u8 unk008[0x80];
    u32 unk088;
    u32 unk08c;
    u8 unk090[0x2a0 - 0x90 - 0x10];
};

extern "C" {

extern Allocator* DAT_00471c40;

void nw_gfx_ShaderBinaryInfo_AnalyzeBinary(void);
u32 FUN_003e2af8(void* binding);
void FUN_003e2264(void* binding, void* cache, void* allocator);
void FUN_0036fd04(MaterialRecord** material, Allocator* allocator);

static inline u8* relocate(void* base, u32 offset, u32 bias)
{
    return offset != 0 ? reinterpret_cast<u8*>(base) + offset + bias : NULL;
}

static inline MaterialRecord* materialAt(ModelResource* res, s32 index)
{
    u32* slot = reinterpret_cast<u32*>(relocate(res, res->materialOffset, 0x2c)) + index;
    return *slot != 0 ? reinterpret_cast<MaterialRecord*>(reinterpret_cast<u8*>(slot) + *slot) : NULL;
}

// Binds a model resource to an allocator: creates its runtime binding and resolves every
// material's shader and program references. Returns 0.
u32 FUN_0036f464(Allocator* allocator, ModelResource* resource, u32 unused, s32 unused2)
{
    ModelResource* res = resource;
    if (resource == NULL || (~resource->magic & 0x80000002) != 0) res = NULL;

    u32* bindings = reinterpret_cast<u32*>(relocate(res, res->shaderOffset, 0x34));
    if (*bindings != 0) return 0;

    if (allocator == NULL) allocator = DAT_00471c40;
    res->allocator = allocator;
    for (u32 i = 0; i < res->shaderCount; i++) {
        reinterpret_cast<ModelResource**>(relocate(res, res->shaderOffset, 0x34))[i] = resource;
    }

    u32* binding = static_cast<u32*>(allocator->vtable->allocate(allocator, 0x298, 4));
    if (binding != NULL) {
        binding[0] = reinterpret_cast<u32>(relocate(res, res->headerOffset, 0x1c));
        binding[1] = 0;
        binding[0x22] = 0;
        binding[0x23] = 0;
        binding[0xa4] = 0;
        binding[0xa5] = 0;
        for (s32 i = 0; i < 0x10; i++) {
            binding[2 + i * 2] = 0;
            binding[3 + i * 2] = 0;
        }
    }
    res->runtimeBinding = binding;
    nw_gfx_ShaderBinaryInfo_AnalyzeBinary();
    u32 cacheSize = FUN_003e2af8(binding);
    void* cache = allocator->vtable->allocate(allocator, cacheSize, 4);
    FUN_003e2264(binding, cache, binding);
    res->runtimeCache = binding;
    res->runtimeSet = reinterpret_cast<u32>(cache);

    for (s32 i = 0; i < res->materialCount; i++) {
        MaterialRecord* material = materialAt(res, i);
        u32* shaders = reinterpret_cast<u32*>(relocate(res, res->shaderOffset, 0x34));
        s32 index = materialAt(res, i)->programIndex;
        u32 program = 0;
        if (index >= 0 && index != res->shaderCount && index <= res->shaderCount) {
            program = shaders[index];
        }
        materialAt(res, i)->shader = shaders[material->shaderIndex];
        materialAt(res, i)->program = program;
        MaterialRecord* current = materialAt(res, i);
        FUN_0036fd04(&current, allocator);
    }
    return 0;
}

} /* extern "C" */
