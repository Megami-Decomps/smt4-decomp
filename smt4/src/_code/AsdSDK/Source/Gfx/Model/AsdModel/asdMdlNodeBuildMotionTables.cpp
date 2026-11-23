/* NON_MATCHING: typed rewrite (440 raw / 360 shape rows, 355 rows against retail's 361). The calls, the three
 * tables, the trace lines and the stores are retail's. What differs: retail resolves each offset word without a
 * branch (`cmp; addne r0, r0, r2; moveq r0, r8`, NULL from the zero it keeps in r8) where the build branches,
 * saves r4-sl with a 24-byte frame (built: r4-r9 and 28 bytes), and loads each table's count before it stores the
 * new table. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/Source/Gfx/Model/AsdMotionModel.h"
#include "AsdSDK/Source/Gfx/Model/AsdMotionControlApi.h"
#include "AsdSDK/AsdDebug.h"
#include "map/LmapPlayerModel.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "AsdSDK/asdMemoryGetDefaultAllocator.h"

/* unit-local: the model image's animation tables as this function reads them (nw::gfx::ResGraphicsFile: a count
 * and the offset of a dictionary for the skeletal, material and visibility animations) */
struct ModelAnimDictionaryEntry {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 data;            /* offset of the animation from this word, 0: none */
};
struct ModelAnimDictionary {
    /* 0x00 */ u8 header[0x1C];
    /* 0x1C */ ModelAnimDictionaryEntry entries[1];
};
struct ModelAnimTable {
    /* 0x00 */ s32 count;
    /* 0x04 */ s32 dictionary;      /* offset of the dictionary from this word, 0: none */
};
struct ModelAnimContent {
    /* 0x00 */ u8 unk00[0x64];
    /* 0x64 */ ModelAnimTable motions;
    /* 0x6C */ ModelAnimTable secondaryMotions;
    /* 0x74 */ ModelAnimTable visibilityMotions;
};
struct ModelAnimData {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 memberCount;
};
/* unit-local: an animation group's member count, and the evaluator builder modelSetupCreatePartAnimations also
 * fills (nw::gfx's AnimEvaluator::Builder) */
struct ModelAnimGroup {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ struct ModelAnimGroupData {
        u8 unk00[0x10];
        s32 memberCount;
    } *data;
};
struct ModelAnimEvaluatorParameters {
    /* 0x00 */ void *resource;
    /* 0x04 */ s32 members;
    /* 0x08 */ s32 animatedMembers;
    /* 0x0C */ s8 allocateCache;
};
struct AsdAllocatorMethods {
    /* 0x00 */ void *unk00[2];
    /* 0x08 */ void *(*allocate)(AsdAllocator *allocator, u32 size, s32 alignment);
};

extern "C" {
AsdTrackNode *FUN_0015156c(AsdMdlNode *node);
AsdMotionInstance *FUN_0014f07c(AsdMdlSceneNode *owner, void *resource, u32 options);
AsdMotionInstance *_ZN9Obj42111cC1Ej(void *storage, AsdAllocator *allocator);
void FUN_002a5960(AsdMotionInstance *evaluator, ModelAnimEvaluatorParameters *parameters, s32 members,
                  s32 animatedMembers, s32 allocateCache);
}

/* The animation `index` of one of the image's tables (nw::gfx::ResGraphicsFile's Get...Anims(index): the offset
 * to the dictionary, then the offset in its entry). */
/* nw::ut::Offset::to_ptr: the address an offset word points at, NULL for 0. */
static __inline void *modelOffsetToPtr(s32 *offset)
{
    if (*offset != 0) {
        return (u8 *)offset + *offset;
    }
    return NULL;
}

static __inline void *modelAnimTableEntry(ModelAnimTable *table, s32 index)
{
    ModelAnimDictionary *dictionary = (ModelAnimDictionary *)modelOffsetToPtr(&table->dictionary);
    void *data = NULL;
    if (dictionary != NULL) {
        data = modelOffsetToPtr(&dictionary->entries[index].data);
    }
    return data;
}

/* An evaluator of `resource` for every member of `group`, bound to the group; NULL without a group or a
 * resource (the builder's Create, as modelSetupCreatePartAnimations has it). */
static __inline AsdMotionInstance *modelCreateAnimEvaluator(ModelAnimGroup *group, void *resource)
{
    if (group == NULL) {
        return NULL;
    }
    ModelAnimEvaluatorParameters parameters;
    parameters.members = group->data->memberCount;
    if (resource == NULL) {
        return NULL;
    }
    parameters.animatedMembers = parameters.members;
    parameters.resource = resource;
    parameters.allocateCache = 1;

    AsdAllocator *allocator = asdMemoryGetDefaultAllocator();
    void *storage = ((const AsdAllocatorMethods *)allocator->vtable)->allocate(allocator, 0x74, 4);
    if (storage == NULL) {
        return NULL;
    }
    AsdMotionInstance *evaluator = _ZN9Obj42111cC1Ej(storage, allocator);
    FUN_002a5960(evaluator, &parameters, parameters.members, parameters.animatedMembers, parameters.allocateCache);
    if (evaluator != NULL) {
        evaluator->vtbl->target.bind(evaluator, (ModelBoneAnimationTarget *)group);
    }
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
            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Model\\AsdModel.cpp", 0x11C2);
            node->motionTable = (void **)asdMemoryAlloc(0x100, 0x100, 0, node->motionCount << 2, 1);
            for (s32 i = 0; i < node->motionCount; i++) {
                ModelAnimData *motion =
                    (ModelAnimData *)modelAnimTableEntry(&((ModelAnimContent *)node->file->cursor)->motions, i);
                node->motionTable[i] = motion;
                if (members < motion->memberCount) {
                    members = motion->memberCount;
                }
            }
            node->motionMembers = members;
            node->blender = FUN_0015156c(node);
            node->active = FUN_0014f07c(node->sceneNode, node->motionTable[0], members);
            AsdTrackNode *blender = node->blender;
            blender->slot->instance = node->active;
            blender->channelA->weight = 1.0f;
            blender->channelB->weight = 1.0f;
            blender->handedOver = 1;
            if (node->sceneNode->fullBakedAnimEnabled) {
                AsdMdlSceneNode *sceneNode = node->sceneNode;
                AsdMotionInstance *active = node->active;
                if (sceneNode->activeTarget != NULL) {
                    sceneNode->trackList->setItem(sceneNode->activeIndex, active);
                }
            } else {
                AsdMdlSceneNode *sceneNode = node->sceneNode;
                AsdTrackNode *object = node->blender;
                if (sceneNode->activeTarget != NULL) {
                    sceneNode->trackList->setItem(sceneNode->activeIndex, object);
                }
            }
        }

        node->secondaryMotionCount = ((ModelAnimContent *)node->file->cursor)->secondaryMotions.count;
        if (node->secondaryMotionCount <= 0) {
            node->secondaryMotionTable = NULL;
        } else {
            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Model\\AsdModel.cpp", 0x11F1);
            node->secondaryMotionTable = (void **)asdMemoryAlloc(0x100, 0x100, 0, node->secondaryMotionCount << 2, 1);
            for (s32 i = 0; i < node->secondaryMotionCount; i++) {
                node->secondaryMotionTable[i] =
                    modelAnimTableEntry(&((ModelAnimContent *)node->file->cursor)->secondaryMotions, i);
            }
            AsdMdlSceneNode *sceneNode = node->sceneNode;
            AsdMotionInstance *evaluator =
                modelCreateAnimEvaluator((ModelAnimGroup *)sceneNode->secondaryActive, node->secondaryMotionTable[0]);
            if (evaluator != NULL && sceneNode->secondaryActive != 0) {
                sceneNode->trackList->setItem(sceneNode->secondaryIndex, evaluator);
            }
            node->secondaryInstance = evaluator;
        }

        node->visibilityMotion.count = ((ModelAnimContent *)node->file->cursor)->visibilityMotions.count;
        if (node->visibilityMotion.count <= 0) {
            node->visibilityMotion.table = NULL;
        } else {
            asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Model\\AsdModel.cpp", 0x1205);
            node->visibilityMotion.table = (void **)asdMemoryAlloc(0x100, 0x100, 0, node->visibilityMotion.count << 2, 1);
            for (s32 i = 0; i < node->visibilityMotion.count; i++) {
                node->visibilityMotion.table[i] =
                    modelAnimTableEntry(&((ModelAnimContent *)node->file->cursor)->visibilityMotions, i);
            }
            AsdMdlSceneNode *sceneNode = node->sceneNode;
            AsdMotionInstance *evaluator =
                modelCreateAnimEvaluator((ModelAnimGroup *)sceneNode->visibilityGroup, node->visibilityMotion.table[0]);
            if (evaluator != NULL && sceneNode->visibilityGroup != NULL) {
                sceneNode->trackList->setItem(sceneNode->visibilityIndex, evaluator);
            }
            node->visibilityInstance = evaluator;
        }
    }

    modelSelectPrimaryMotion(node, 0, 0.0f);
    node->secondarySpeed = 1.0f;
    if (node->secondaryMotionCount > 0 && node->secondaryInstance != NULL) {
        node->secondaryInstance->vtbl->setMotion(node->secondaryInstance, node->secondaryMotionTable[0]);
        node->secondaryCurrentMotion = 0;
    }
    asdModelSelectSecondaryMotion((ModelPropertyController *)node, 0, 0.0f);
}

} /* extern "C" */
