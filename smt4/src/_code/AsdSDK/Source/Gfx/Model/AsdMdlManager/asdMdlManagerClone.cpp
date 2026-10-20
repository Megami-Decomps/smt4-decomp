#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

AsdMdlObject *asdMdlObjectNew(void);
void FUN_00192694(AsdMdlNode *node, AsdMdlNode *src, u32 arg);
void asdListAdd(u32 *list, AsdMdlObject *obj, s32 arg);

extern u32 g_asdMdlList;

/* Creates a model object that copies `src`'s node parameter and node data, and adds it to the model list. */
AsdMdlObject *asdMdlManagerClone(AsdMdlObject *src, u32 arg)
{
    AsdMdlObject *obj = asdMdlObjectNew();

    obj->node->unk08 = src->node->unk08;
    FUN_00192694(obj->node, src->node, arg);
    asdListAdd(&g_asdMdlList, obj, 0);
    return obj;
}

} /* extern "C" */
