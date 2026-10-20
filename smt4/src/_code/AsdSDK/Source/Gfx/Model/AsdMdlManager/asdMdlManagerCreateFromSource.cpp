#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

AsdMdlObject *asdMdlObjectNew(void);
void *FUN_002b2988(void *source, void *arg);
void asdMdlNodeInit(AsdMdlNode *node, u32 param);
void asdMdlObjectBuildBounds(AsdMdlObject *obj);
void asdListAdd(u32 *list, AsdMdlObject *obj, s32 arg);

extern u32 g_asdMdlList;

/* Creates a model object from a model source: builds its data, initializes the shared node with
 * `param`, registers the object and adds it to the model list. */
AsdMdlObject *asdMdlManagerCreateFromSource(void *source, void *arg, u32 param)
{
    AsdMdlObject *obj = asdMdlObjectNew();

    obj->node->param = param;
    obj->node->data = FUN_002b2988(source, arg);
    asdMdlNodeInit(obj->node, param);
    asdMdlObjectBuildBounds(obj);
    asdListAdd(&g_asdMdlList, obj, 0);
    return obj;
}

} /* extern "C" */
