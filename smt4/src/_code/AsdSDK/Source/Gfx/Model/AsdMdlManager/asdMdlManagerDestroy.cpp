/* NON_MATCHING: instruction scheduling and register allocation differ; retail 44 vs built 44 rows, 7 diff lines. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

void FUN_00152c00(AsdMdlNode *node);
void asdMdlListDestroyModels(AsdMdlObject *obj);
void FUN_00152894(AsdMdlNode *node, void *data);
s32 lookupListFindByKey(u32 *list, AsdMdlObject *obj);
void FUN_002b26d4(u32 *list);
void asdMemFree(void *block);

extern u32 g_asdMdlList;

/* Destroys a model object: releases its node data and records, removes it from the model list
 * and frees it. */
void asdMdlManagerDestroy(AsdMdlObject *obj)
{
    s32 removed;

    if (obj->node->unk0c >= 0) {
        obj->flags |= 0x200000;
        FUN_00152c00(obj->node);
    }
    asdMdlListDestroyModels(obj);
    if (obj->records != NULL) {
        s32 count = obj->node->count;
        s32 i = 0;

        if (i < count) {
            do {
                asdMemFree(obj->records[i].data);
                i++;
            } while (i < count);
        }
        asdMemFree(obj->records);
        obj->records = NULL;
    }
    FUN_00152894(obj->node, obj->request);
    removed = lookupListFindByKey(&g_asdMdlList, obj);
    if (removed != 0) {
        FUN_002b26d4(&g_asdMdlList);
    }
    asdMemFree(obj);
}

} /* extern "C" */
