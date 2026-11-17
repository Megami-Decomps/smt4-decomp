#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

void *messageSubmitRequest(const char *path, s32 arg);
void asdFileRequestSetHeapKind(void *data, s32 arg);
void asdListAdd(u32 *list, AsdMdlObject *obj, s32 arg);

extern u32 g_asdMdlList2;

/* Creates a model object from a model source with `drawMask` as its node parameter and adds it to
 * the second model list. */
AsdMdlObject *asdMdlManagerCreateSecondList(const char *path, u32 drawMask)
{
    AsdMdlObject *obj = asdMdlObjectNew();

    obj->node->drawMask = drawMask;
    obj->request = messageSubmitRequest(path, 0);
    asdFileRequestSetHeapKind(obj->request, 1);
    asdListAdd(&g_asdMdlList2, obj, 0);
    return obj;
}

} /* extern "C" */
