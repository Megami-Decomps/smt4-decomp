#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/asdMdlManagerCreateLoaded.h"

extern "C" {

AsdMdlObject *asdMdlObjectNew(void);
void *asdFileQueueRequest(void *source, s32 arg);
void asdFileRequestSetHeapKind(void *data, s32 arg);
void asdFileWait(void *data);
u32 asdFileRequestGetResult(void *data, u32 *out);
void *FUN_002b2988(u32 data, u32 arg);
void asdMdlNodeInit(AsdMdlNode *node, u32 param);
void asdMdlObjectBuildBounds(AsdMdlObject *obj);
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

    obj->node->param = param;
    obj->request = asdFileQueueRequest(source, 0);
    asdFileRequestSetHeapKind(obj->request, 1);
    asdFileWait(obj->request);
    data = asdFileRequestGetResult(obj->request, &flags);
    obj->node->data = FUN_002b2988(data, flags);
    asdMdlNodeInit(obj->node, param);
    asdMdlObjectBuildBounds(obj);
    asdListAdd(&g_asdMdlList, obj, 0);
    return obj;
}

} /* extern "C" */
