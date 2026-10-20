#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

AsdMdlObject *asdMdlObjectNew(void);
void *asdFileQueueRequest(void *source, s32 arg);
void FUN_002b0184(void *data, s32 arg);
void asdFileWait(void *data);
u32 FUN_0013840c(void *data, u32 *out);
void *FUN_002b2988(u32 data, u32 arg);
void FUN_002a91f4(AsdMdlNode *node, u32 param);
void FUN_002b2770(AsdMdlObject *obj);
void asdListAdd(u32 *list, AsdMdlObject *obj, s32 arg);

extern u32 g_asdMdlList;

/* Creates a model object from a model source: loads and prepares the model data, builds the
 * shared node's data from it, initializes the node with `param`, registers the object and adds
 * it to the model list. */
AsdMdlObject *asdMdlManagerCreateLoaded(void *source, u32 param)
{
    AsdMdlObject *obj = asdMdlObjectNew();
    u32 flags;
    u32 data;

    obj->node->unk08 = param;
    obj->unk04 = asdFileQueueRequest(source, 0);
    FUN_002b0184(obj->unk04, 1);
    asdFileWait(obj->unk04);
    data = FUN_0013840c(obj->unk04, &flags);
    obj->node->unk04 = FUN_002b2988(data, flags);
    FUN_002a91f4(obj->node, param);
    FUN_002b2770(obj);
    asdListAdd(&g_asdMdlList, obj, 0);
    return obj;
}

} /* extern "C" */
