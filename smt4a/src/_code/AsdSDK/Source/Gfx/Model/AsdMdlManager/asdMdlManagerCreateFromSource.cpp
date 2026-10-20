#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

AsdMdlObject *asdMdlObjectNew(void);
void *FUN_001847c4(void *source, void *arg);
void FUN_0019cba8(AsdMdlNode *node, u32 param);
void FUN_00185b84(AsdMdlObject *obj);
void asdListAdd(u32 *list, AsdMdlObject *obj, s32 arg);

extern u32 g_asdMdlList;

/* Creates a model object from a model source: builds its data, initializes the shared node with
 * `param`, registers the object and adds it to the model list. */
AsdMdlObject *asdMdlManagerCreateFromSource(void *source, void *arg, u32 param)
{
    AsdMdlObject *obj = asdMdlObjectNew();

    obj->node->unk08 = param;
    obj->node->unk04 = FUN_001847c4(source, arg);
    FUN_0019cba8(obj->node, param);
    FUN_00185b84(obj);
    asdListAdd(&g_asdMdlList, obj, 0);
    return obj;
}

} /* extern "C" */
