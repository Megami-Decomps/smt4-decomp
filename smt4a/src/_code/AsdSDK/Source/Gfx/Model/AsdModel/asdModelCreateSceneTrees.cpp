/* NON_MATCHING: retail inlines every configurable builder, separately allocating the temporary builder
 * for the default-only scene groups. This build outlines the configurable builder. */
#include "AsdSDK/Source/Gfx/Model/AsdModelScene.h"
#include "AsdSDK/Source/Gfx/Model/AsdScene.h"
#include "nw/gfx/SceneNode.h"

using nw::gfx::SceneNode;
using nw::gfx::TransformNodeBuilder;

extern "C" {
/* These arrays have independent labels inside the graphics settings block. */
extern SceneNode *g_asdModelTransformBuilder[2];
extern SceneNode *g_asdModelSlotArray0[2];
extern SceneNode *g_asdModelSlotArray1[2];
extern SceneNode *g_asdModelSlotArray2[2];
extern SceneNode *DAT_005b3c90[2];
extern SceneNode *DAT_005b3c98[2];
}

/* Build a fixed-capacity node if either capacity was supplied. Otherwise use
 * the builder's defaults; the second pass's slot 1 keeps fixed-size memory. */
static __inline SceneNode *createSceneNode(const AsdModelNodeCapacity &capacity, bool fixedByDefault = false)
{
    if (capacity.children != 0 || capacity.callbacks != 0) {
        AsdAllocator *allocator = asdMemoryGetDefaultAllocator();
        TransformNodeBuilder builder;
        builder.maxChildren = capacity.children;
        builder.maxCallbacks = capacity.callbacks;
        return nw_gfx_TransformNode_DynamicBuilder_Create(&builder, allocator);
    } else {
        AsdAllocator *allocator = asdMemoryGetDefaultAllocator();
        TransformNodeBuilder builder;
        builder.isFixedSizeMemory = fixedByDefault;
        return nw_gfx_TransformNode_DynamicBuilder_Create(&builder, allocator);
    }
}

/* The second group in either pass always grows dynamically. */
static __inline SceneNode *createDynamicSceneGroup()
{
    AsdAllocator *allocator = asdMemoryGetDefaultAllocator();
    TransformNodeBuilder builder;
    builder.isFixedSizeMemory = false;
    return nw_gfx_TransformNode_DynamicBuilder_Create(&builder, allocator);
}

/* Creates the two model scene trees and their per-slot transform nodes. */
extern "C" void asdModelCreateSceneTrees(const AsdModelSceneCapacities *first, const AsdModelSceneCapacities *second)
{
    const AsdModelSceneCapacities defaultCapacities = {};
    if (first == NULL) {
        first = &defaultCapacities;
    }
    if (second == NULL) {
        second = &defaultCapacities;
    }

    g_asdModelTransformBuilder[0] = createSceneNode(first->root);
    DAT_005b3c90[0] = createSceneNode(first->group);
    nw_gfx_SceneNode_AttachChild(g_asdModelTransformBuilder[0], DAT_005b3c90[0]);
    DAT_005b3c98[0] = createDynamicSceneGroup();
    nw_gfx_SceneNode_AttachChild(g_asdModelTransformBuilder[0], DAT_005b3c98[0]);
    g_asdModelSlotArray0[0] = createSceneNode(first->slots[0]);
    nw_gfx_SceneNode_AttachChild(g_asdModelTransformBuilder[0], g_asdModelSlotArray0[0]);
    g_asdModelSlotArray1[0] = createSceneNode(first->slots[1]);
    nw_gfx_SceneNode_AttachChild(g_asdModelTransformBuilder[0], g_asdModelSlotArray1[0]);
    g_asdModelSlotArray2[0] = createSceneNode(first->slots[2]);
    nw_gfx_SceneNode_AttachChild(g_asdModelTransformBuilder[0], g_asdModelSlotArray2[0]);

    g_asdModelTransformBuilder[1] = createSceneNode(second->root);
    DAT_005b3c90[1] = createSceneNode(second->group);
    nw_gfx_SceneNode_AttachChild(g_asdModelTransformBuilder[1], DAT_005b3c90[1]);
    DAT_005b3c98[1] = createDynamicSceneGroup();
    nw_gfx_SceneNode_AttachChild(g_asdModelTransformBuilder[1], DAT_005b3c98[1]);
    g_asdModelSlotArray0[1] = createSceneNode(second->slots[0]);
    nw_gfx_SceneNode_AttachChild(g_asdModelTransformBuilder[1], g_asdModelSlotArray0[1]);
    g_asdModelSlotArray1[1] = createSceneNode(second->slots[1], true);
    nw_gfx_SceneNode_AttachChild(g_asdModelTransformBuilder[1], g_asdModelSlotArray1[1]);
    g_asdModelSlotArray2[1] = createSceneNode(second->slots[2]);
    nw_gfx_SceneNode_AttachChild(g_asdModelTransformBuilder[1], g_asdModelSlotArray2[1]);
}
