#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

void *asdFileQueueRequest(const char *path, s32 arg);
void asdFileRequestSetHeapKind(void *data, s32 arg);
void asdFileWait(void *data);
u32 asdFileRequestGetResult(void *data, u32 *out);
AsdModelFile *asdModelRegisterImage(u32 data, u32 arg);
void asdListAdd(u32 *list, AsdMdlObject *obj, s32 arg);

extern u32 g_asdMdlList;

/* Creates a model object from a model source: loads and prepares the model data, builds the
 * shared node's data from it, initializes the node with `drawMask`, registers the object and adds
 * it to the model list. */
AsdMdlObject *asdMdlManagerCreateLoaded(const char *path, u32 drawMask)
{
    AsdMdlObject *obj = asdMdlObjectNew();
    u32 flags;
    u32 data;

    obj->node->drawMask = drawMask;
    obj->request = asdFileQueueRequest(path, 0);
    asdFileRequestSetHeapKind(obj->request, 1);
    asdFileWait(obj->request);
    data = asdFileRequestGetResult(obj->request, &flags);
    obj->node->file = asdModelRegisterImage(data, flags);
    asdMdlNodeInit(obj->node, drawMask);
    asdMdlObjectBuildBounds(obj);
    asdListAdd(&g_asdMdlList, obj, 0);
    return obj;
}

} /* extern "C" */
