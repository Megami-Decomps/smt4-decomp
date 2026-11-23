/* NON_MATCHING: asdMdlNodeBuildMotionTables (the smt4 twin), typed rewrite (293 raw / 195 shape rows). The
 * calls, the three tables, the trace lines, the frame and the saved registers are retail's; the tail is
 * modelSelectSecondaryMotion(0, no blend) inlined, the animation objects go through nw::gfx's Set...AnimObject
 * setters and the animations are read as nw's ResAnim wrapper (which gives the skeletal loop retail's
 * registers). What differs: in the material and visibility loops retail keeps the index in r1 and the entry in
 * r0 (built: the reverse) and stores through a computed address after the increment; it loads each table's
 * count before it stores the new table and tests the dictionary with a separate cmp; it loads the scene node
 * into r3 before the first motion for FUN_001ad8c4, keeps that call's result in r0 for the blender store, and
 * sets the builder's allocateCache from a fresh `mov r0, #1` rather than the 1 it keeps in r9. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlMotionInline.h"
#include "AsdSDK/Source/Gfx/Model/AsdMotionModel.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/Shard0034.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "shard/W6_W6Match4_RelativeResourceGraph.h"
#include "AsdSDK/Source/Gfx/Model/AsdScene.h"

/* unit-local: the model image's animation tables as this function reads them (nw::gfx::ResGraphicsFile: a count
 * and the offset of a dictionary for the skeletal, material and visibility animations) */
struct ModelAnimData {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 memberCount;
};
struct ModelAnimDictionaryEntry {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ ResourceRelativePointer<ModelAnimData> data;
};
struct ModelAnimDictionary {
    /* 0x00 */ u8 header[0x1C];
    /* 0x1C */ ModelAnimDictionaryEntry entries[1];
};
/* nw::anim::ResAnim: an animation viewed through its pointer. */
struct ModelAnimRef {
    ModelAnimData *data;

    ModelAnimRef(ModelAnimData *animation) : data(animation) {}
};
/* One of the image's animation tables (nw::gfx::ResGraphicsFile's Get...Anims(index)). */
struct ModelAnimTable {
    /* 0x00 */ s32 count;
    /* 0x04 */ ResourceRelativePointer<ModelAnimDictionary> dictionary;

    ModelAnimRef entry(s32 index) const
    {
        ModelAnimDictionary *entries = dictionary.get();
        return ModelAnimRef(entries ? entries->entries[index].data.get() : NULL);
    }
};
struct ModelAnimContent {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ ModelAnimTable motions;
    /* 0x6C */ ModelAnimTable secondaryMotions;
    /* 0x74 */ ModelAnimTable visibilityMotions;
};
/* unit-local: an animation group's member count */
struct ModelAnimGroup {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ struct ModelAnimGroupData {
        u8 unk00[0x10];
        s32 memberCount;
    } *data;
};
struct AsdAllocatorMethods {
    /* 0x00 */ void *unk00[2];
    /* 0x08 */ void *(*allocate)(AsdAllocator *allocator, u32 size, s32 alignment);
};

/* nw::gfx::AnimEvaluator::Builder: the evaluator's creation parameters (modelSetupCreatePartAnimations fills
 * the same record). */
struct ModelAnimEvaluatorBuilder {
    /* 0x00 */ void *animData;
    /* 0x04 */ s32 maxMembers;
    /* 0x08 */ s32 maxAnimMembers;
    /* 0x0C */ s8 allocateCache;

    inline AsdMotionInstance *create(AsdAllocator *allocator);
};

extern "C" {
void modelSelectPrimaryMotion(AsdMdlNode *model, s32 motionIndex, f32 blend);
void asdModelSelectSecondaryMotion(ModelPropertyController *controller, s32 index, f32 time);
AsdTrackNode *FUN_001b25c0(AsdMdlNode *node);
AsdMotionInstance *FUN_001ad8c4(AsdMdlSceneNode *owner, void *resource, u32 options);
AsdMotionInstance *_ZN9Obj55b56cC1Ej(void *storage, AsdAllocator *allocator);
void FUN_001b0e44(AsdMotionInstance *evaluator, ModelAnimEvaluatorBuilder *builder, s32 members,
                  s32 animatedMembers, s32 allocateCache);
}

/* nw::gfx::AnimEvaluator::Builder::Create: allocates the evaluator and initialises it from the builder (the
 * animation is passed by reference: the builder's first member). */
inline AsdMotionInstance *ModelAnimEvaluatorBuilder::create(AsdAllocator *allocator)
{
    void *storage = ((const AsdAllocatorMethods *)allocator->vtable)->allocate(allocator, 0x74, 4);
    if (storage == NULL) {
        return NULL;
    }
    AsdMotionInstance *evaluator = _ZN9Obj55b56cC1Ej(storage, allocator);
    FUN_001b0e44(evaluator, this, maxMembers, maxAnimMembers, allocateCache);
    return evaluator;
}

/* An evaluator of `resource` for every member of `group` (the caller binds it); NULL without a group or a
 * resource. */
static __inline AsdMotionInstance *modelCreateAnimEvaluator(ModelAnimGroup *group, void *resource)
{
    if (group == NULL) {
        return NULL;
    }
    s32 members = group->data->memberCount;
    if (resource == NULL) {
        return NULL;
    }
    ModelAnimEvaluatorBuilder builder;
    builder.maxMembers = members;
    builder.maxAnimMembers = members;
    builder.animData = resource;
    builder.allocateCache = 1;
    AsdMotionInstance *evaluator = builder.create(asdMemoryGetDefaultAllocator());
    return evaluator;
}

extern "C" {

/* Builds a model's motion tables from its image: the skeletal motions with the evaluator and blender that play
 * them, then the secondary (material) and visibility motions with an evaluator each, and selects motion 0. */
void asdMdlNodeBuildMotionTables(AsdMdlNode *node)
{
    s32 members = -1;

    if (node->sceneNode != NULL) {
        node->motionCount = ((ModelAnimContent *)node->file->cursor)->motions.count;
        if (node->motionCount <= 0) {
            node->motionTable = NULL;
            node->active = NULL;
        } else {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Model\\AsdModel.cpp", 0x1219);
            node->motionTable = (void **)asdMemoryAlloc(0x100, 0x100, 0, node->motionCount << 2, 1);
            for (s32 i = 0; i < node->motionCount; i++) {
                ModelAnimRef motion = ((ModelAnimContent *)node->file->cursor)->motions.entry(i);
                node->motionTable[i] = motion.data;
                if (members < motion.data->memberCount) {
                    members = motion.data->memberCount;
                }
            }
            node->motionMembers = members;
            node->blender = FUN_001b25c0(node);
            node->active = FUN_001ad8c4(node->sceneNode, node->motionTable[0], members);
            AsdTrackNode *blender = node->blender;
            blender->slot->instance = node->active;
            blender->channelA->weight = 1.0f;
            blender->channelB->weight = 1.0f;
            blender->handedOver = 1;
            if (node->sceneNode->fullBakedAnimEnabled) {
                asdMdlSceneNodeSetSkeletalAnimObject(node->sceneNode, node->active);
            } else {
                asdMdlSceneNodeSetSkeletalAnimObject(node->sceneNode, node->blender);
            }
        }

        node->secondaryMotionCount = ((ModelAnimContent *)node->file->cursor)->secondaryMotions.count;
        if (node->secondaryMotionCount <= 0) {
            node->secondaryMotionTable = NULL;
        } else {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Model\\AsdModel.cpp", 0x1248);
            node->secondaryMotionTable = (void **)asdMemoryAlloc(0x100, 0x100, 0, node->secondaryMotionCount << 2, 1);
            for (s32 i = 0; i < node->secondaryMotionCount; i++) {
                node->secondaryMotionTable[i] = ((ModelAnimContent *)node->file->cursor)->secondaryMotions.entry(i).data;
            }
            AsdMdlSceneNode *sceneNode = node->sceneNode;
            ModelAnimGroup *group = (ModelAnimGroup *)sceneNode->secondaryActive;
            AsdMotionInstance *evaluator = modelCreateAnimEvaluator(group, node->secondaryMotionTable[0]);
            if (evaluator != NULL) {
                evaluator->vtbl->target.bind(evaluator, (ModelBoneAnimationTarget *)group);
                asdMdlSceneNodeSetMaterialAnimObject(sceneNode, evaluator);
            }
            node->secondaryInstance = evaluator;
        }

        node->visibilityMotion.count = ((ModelAnimContent *)node->file->cursor)->visibilityMotions.count;
        if (node->visibilityMotion.count <= 0) {
            node->visibilityMotion.table = NULL;
        } else {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Model\\AsdModel.cpp", 0x125C);
            node->visibilityMotion.table = (void **)asdMemoryAlloc(0x100, 0x100, 0, node->visibilityMotion.count << 2, 1);
            for (s32 i = 0; i < node->visibilityMotion.count; i++) {
                node->visibilityMotion.table[i] = ((ModelAnimContent *)node->file->cursor)->visibilityMotions.entry(i).data;
            }
            AsdMdlSceneNode *sceneNode = node->sceneNode;
            ModelAnimGroup *group = (ModelAnimGroup *)sceneNode->visibilityGroup;
            AsdMotionInstance *evaluator = modelCreateAnimEvaluator(group, node->visibilityMotion.table[0]);
            if (evaluator != NULL) {
                evaluator->vtbl->target.bind(evaluator, (ModelBoneAnimationTarget *)group);
                asdMdlSceneNodeSetVisibilityAnimObject(sceneNode, evaluator);
            }
            node->visibilityInstance = evaluator;
        }
    }

    modelSelectPrimaryMotion(node, 0, 0.0f);
    asdMdlSelectSecondaryMotion(node, 0, 0.0f);
    asdModelSelectSecondaryMotion((ModelPropertyController *)node, 0, 0.0f);
}

} /* extern "C" */
