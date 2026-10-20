#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

AsdMdlObject *asdMdlObjectNew(void);
void *asdFileQueueRequest(void *source, s32 arg);
void asdFileRequestSetHeapKind(void *data, s32 arg);
void asdListAdd(u32 *list, AsdMdlObject *obj, s32 arg);

extern u32 g_asdMdlList2;

/* Creates a model object from a model source with `param` as its node parameter and adds it to
 * the second model list. */
AsdMdlObject *asdMdlManagerCreateSecondList(void *source, u32 param)
{
    AsdMdlObject *obj = asdMdlObjectNew();

    obj->node->param = param;
    obj->request = asdFileQueueRequest(source, 0);
    asdFileRequestSetHeapKind(obj->request, 1);
    asdListAdd(&g_asdMdlList2, obj, 0);
    return obj;
}

} /* extern "C" */
