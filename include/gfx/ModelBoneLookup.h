#ifndef GFX_MODELBONELOOKUP_H
#define GFX_MODELBONELOOKUP_H
#include "shard/S1NwGfx.h"
#include "gfx/SkeletonInstanceBuffers.h"
#include <stddef.h>

struct ResDicPatriciaNode { u8 data[0x10]; };
struct ResDicPatricia { u8 header[0x1c]; ResDicPatriciaNode nodes[1]; };
struct ModelBoneSkeleton {
    u8 unk00[0x1c];
    RelativePointer dictionary;
    u8 unk20[8];
    u32 flags;
    bool hasFlags(u32 mask) const
    {
        if ((mask & ~flags) == 0)
            return true;
        return false;
    }
};
struct ModelBoneResource {
    u32 flags;
    union {
        u8 unk04[0xdc];
        struct {
            u8 unk04[0xc4];
            RelativePointer table; // 0xc8, array of relative mesh pointers
            u8 unkcc[0x14];
        } meshes;
    };
    RelativePointer skeleton;
    static ModelBoneResource *cast(ModelBoneResource *resource)
    {
        return resource != NULL && (~resource->flags & 0x40000092u) != 0 ? NULL : resource;
    }
};
struct ModelBoneMatrixSet { u32 unk00; SkeletonMatrix34 *matrices; };
struct ModelBoneWorldMatrixSet { u32 unk00; SkeletonMatrix44 *matrices; };
struct ModelBoneMatrixProvider;
struct ModelBoneMatrixProviderVtable {
    u8 unk00[0x14];
    ModelBoneWorldMatrixSet *(*getWorldMatrices)(ModelBoneMatrixProvider *provider); // 0x14
    u32 unk18;
    ModelBoneMatrixSet *(*getMatrices)(ModelBoneMatrixProvider *provider);
};
struct ModelBoneMatrixProvider { ModelBoneMatrixProviderVtable *vtable; };
typedef char ModelBoneLookupLayoutCheck[
    offsetof(ModelBoneResource, skeleton) == 0xe0 && sizeof(ModelBoneResource) == 0xe4 &&
    offsetof(ModelBoneSkeleton, dictionary) == 0x1c && offsetof(ModelBoneSkeleton, flags) == 0x28 &&
    offsetof(ModelBoneMatrixSet, matrices) == 4 && sizeof(SkeletonMatrix34) == 0x30 &&
    offsetof(ModelBoneMatrixProviderVtable, getMatrices) == 0x1c ? 1 : -1];
typedef char ModelBoneMeshTableLayoutCheck[
    offsetof(ModelBoneResource, meshes.table) == 0xc8 &&
    sizeof(ModelBoneResource) == 0xe4 ? 1 : -1];
typedef char ModelBoneWorldMatrixLayoutCheck[
    offsetof(ModelBoneWorldMatrixSet, matrices) == 4 &&
    offsetof(ModelBoneMatrixProviderVtable, getWorldMatrices) == 0x14 &&
    sizeof(ModelBoneMatrixProviderVtable) == 0x20 ? 1 : -1];
#endif
