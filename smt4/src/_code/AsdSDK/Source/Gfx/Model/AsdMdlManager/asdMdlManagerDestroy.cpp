#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "shard/W4_W4Match2_IndexedList.h"
#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

void asdMdlLightBatchRemove(AsdMdlNode *node);
void asdMdlListDestroyModels(AsdMdlObject *obj);
s32 asdMdlNodeGetCount(const AsdMdlNode *node);
LookupListNode *lookupListFindByKey(const LookupList *list, u32 key);
IndexedNode *indexedListErase(IndexedList *list, IndexedNode *node);
void asdMemFree(void *block);

extern IndexedList g_asdMdlList;

/* Destroys a model object: releases its node data and records, removes it from the model list
 * and frees it. */
void asdMdlManagerDestroy(AsdMdlObject *obj)
{
    LookupListNode *removed;

    if (obj->node->unk0c >= 0) {
        obj->flags |= 0x200000;
        asdMdlLightBatchRemove(obj->node);
    }
    asdMdlListDestroyModels(obj);
    if (obj->records != NULL) {
        s32 count = asdMdlNodeGetCount(obj->node);
        s32 i = 0;

        if (count > 0) {
            do {
                asdMemFree(obj->records[i].data);
                i++;
            } while (i < count);
        }
        asdMemFree(obj->records);
        obj->records = NULL;
    }
    asdMdlManagerReleaseResources(obj->node, obj->request);
    removed = lookupListFindByKey(reinterpret_cast<const LookupList *>(&g_asdMdlList), reinterpret_cast<u32>(obj));
    if (removed != NULL) {
        indexedListErase(&g_asdMdlList, reinterpret_cast<IndexedNode *>(removed));
    }
    asdMemFree(obj);
}

} /* extern "C" */
