/* NON_MATCHING: 56 lines: retail reads the mesh index before the resource and walks the mesh table with a pre-indexed load, computes the bounds before the world matrix in the multi-bone arm, and shares that arm's `bl; pop` with the bone arm (the build tail-calls); relative-pointer adds take the other operand order at several sites. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "gfx/ModelBoneLookup.h"

struct ModelDepthBounds {
    u32 flags;
    SkeletonVector3 center;
};
struct ModelDepthMesh {
    u8 unk00[0x1c];
    RelativePointer bounds;
    u8 unk20[0xc];
    u32 boneCount;
    RelativePointer bones;
};
struct ModelDepthBoneBinding {
    u32 unk00;
    RelativePointer index;
};
struct ModelDepthInstance {
    AsdMdlSceneNode *sceneNode;
    ModelBoneResource *resource;
};
struct ModelDepthMeshInstance {
    u8 unk00[0x18];
    u32 index;
};
typedef char ModelDepthLayoutCheck[offsetof(ModelDepthMesh, bounds) == 0x1c &&
    offsetof(ModelDepthMesh, boneCount) == 0x2c && offsetof(ModelDepthMesh, bones) == 0x30 &&
    offsetof(ModelDepthBounds, center) == 4 && offsetof(ModelDepthBoneBinding, index) == 4 &&
    offsetof(ModelDepthMeshInstance, index) == 0x18 ? 1 : -1];

extern "C" f32 nw_gfx_SceneHelper_CalculateDepth(const SkeletonVector3 *center,
    const SkeletonMatrix34 *matrix, const void *camera);

/* Computes a mesh's depth from its bounds' centre: a singly-bound mesh uses its bone matrix, other meshes the model transform. */
extern "C" f32 FUN_002255c0(ModelDepthInstance *instance,
    ModelDepthMeshInstance *meshInstance, const void *camera)
{
    RelativePointer *meshes = (RelativePointer *)instance->resource->meshes.table.get();
    ModelDepthMesh *mesh = (ModelDepthMesh *)meshes[meshInstance->index].get();
    const SkeletonMatrix34 *matrix;
    if (mesh->boneCount != 1) {
        matrix = &instance->sceneNode->worldMatrix;
    } else {
        RelativePointer *bones = (RelativePointer *)mesh->bones.get();
        ModelDepthBoneBinding *binding = (ModelDepthBoneBinding *)bones->get();
        u32 boneIndex = *(u32 *)binding->index.get();
        ModelBoneMatrixProvider *provider = instance->sceneNode->skeleton;
        ModelBoneMatrixSet *matrices = provider->vtable->getMatrices(provider);
        matrix = &matrices->matrices[boneIndex];
    }
    ModelDepthBounds *bounds = (ModelDepthBounds *)mesh->bounds.get();
    return nw_gfx_SceneHelper_CalculateDepth(&bounds->center, matrix, camera);
}
