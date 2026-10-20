#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

AsdMdlObject *asdMdlObjectNew(void);
void *FUN_002b2988(void *source, u32 arg);
void FUN_003289a0(AsdMdlNode *node, u32 param, AsdMdlNode *other);
void FUN_002a9244(AsdMdlNode *node);
void FUN_002b2770(AsdMdlObject *obj);
void asdListAdd(u32 *list, AsdMdlObject *obj, s32 arg);

extern u32 g_asdMdlList;

/* Creates a model object from a model source and a second model object: builds its data,
 * initializes the shared node from `param` and `other`'s node, registers the object and adds it
 * to the model list. */
AsdMdlObject *asdMdlManagerCreateFromSourceAndNode(void *source, u32 arg, u32 param, AsdMdlObject *other)
{
    AsdMdlObject *obj = asdMdlObjectNew();

    obj->node->unk08 = param;
    obj->node->unk04 = FUN_002b2988(source, arg);
    FUN_003289a0(obj->node, param, other->node);
    FUN_002a9244(obj->node);
    FUN_002b2770(obj);
    asdListAdd(&g_asdMdlList, obj, 0);
    return obj;
}

} /* extern "C" */
