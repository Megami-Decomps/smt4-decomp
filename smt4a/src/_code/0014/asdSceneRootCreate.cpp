/* NON_MATCHING: 286 lines (from 292): the calls, descriptions, owning-pointer swaps and destructions follow retail,
 * but the frame is laid out differently (retail: the two temporary pointers at sp+0/sp+8, the queue description at
 * sp+24, the updater description at sp+48, 140 bytes), armcc batches the limit copies through vldmia/vstmia where
 * retail copies word by word, and the pointers' owner tests are predicated where retail branches. Tried: named
 * description fields copy word by word as retail does, a block around the list description reuses the queue's
 * slots as retail does, and a deleter functor gives retail's owner tests, but the two temporary pointers still
 * share one slot (retail: two), which shifts the frame (323-347 lines). */
#include "gfx/AsdSceneRoot.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlConfig.h"

extern "C" {
void *FUN_0015aef0(AsdSceneUpdaterDescription *description, AsdAllocatorObject *allocator);
void *FUN_0015d31c(AsdSceneLargeDescription *description, AsdAllocatorObject *allocator);
AsdSceneObject *FUN_001723b8(AsdSceneSmallDescription *description, AsdAllocatorObject *allocator);
AsdSceneObject *FUN_00172088(AsdSceneSmallDescription *description, AsdAllocatorObject *allocator);
void *FUN_0015c9f8(AsdSceneQueueDescription *description, AsdAllocatorObject *allocator);
void *FUN_0015d490(AsdSceneListDescription *description, AsdAllocatorObject *allocator);
void *FUN_0015d444(void **description, AsdAllocatorObject *allocator);

/* Builds a scene root from the allocator and one scene's limits. */
AsdSceneRoot *asdSceneRootCreate(AsdAllocatorObject *allocator, const AsdModelLimits *limits)
{
    AsdSceneRoot *root = new (allocator->allocate(sizeof(AsdSceneRoot), 4)) AsdSceneRoot;
    const u32 *source = (const u32 *)limits;

    AsdSceneUpdaterDescription updater;
    updater.values[0] = source[0];
    updater.values[2] = source[1];
    updater.values[3] = source[2];
    updater.values[4] = source[3];
    updater.values[5] = source[4];
    updater.values[6] = source[5];
    updater.values[7] = source[6];
    updater.values[8] = source[7];
    updater.values[9] = source[8];
    updater.values[10] = source[9];
    updater.values[11] = source[10];
    updater.values[14] = source[12];
    updater.values[1] = source[13];
    root->updater = FUN_0015aef0(&updater, allocator);

    AsdSceneLargeDescription unk08;
    root->unk08 = FUN_0015d31c(&unk08, allocator);

    AsdSceneSmallDescription firstDescription;
    AsdSceneSmallDescription secondDescription;
    AsdSceneObject *second = FUN_001723b8(&firstDescription, allocator);
    AsdSceneObject *first = FUN_00172088(&secondDescription, allocator);
    {
        /* retail destroys the queue description's pointers before the list is built */
        AsdSceneQueueDescription queue;
        queue.second = AsdSceneMovePtr<AsdSceneObject>(second);
        queue.first = AsdSceneMovePtr<AsdSceneObject>(first);
        root->queue = FUN_0015c9f8(&queue, allocator);
    }

    AsdSceneListDescription list;
    if (source[14] != 0) {
        list.capacity = source[14];
    } else {
        list.enabled = false;
    }
    void *listResult = FUN_0015d490(&list, allocator);
    root->list = FUN_0015d444(&listResult, allocator);
    root->allocator = allocator;
    return root;
}

} /* extern "C" */
