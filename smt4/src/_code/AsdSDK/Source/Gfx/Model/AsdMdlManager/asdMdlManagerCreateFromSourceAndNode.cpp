#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

AsdModelFile *asdModelRegisterImage(void *source, u32 size);
void FUN_003289a0(AsdMdlNode *node, u32 param, AsdMdlNode *other);
void FUN_002a9244(AsdMdlNode *node);
void asdListAdd(u32 *list, AsdMdlObject *obj, s32 arg);

extern u32 g_asdMdlList;

/* Creates a model object from a model source and a second model object: builds its data,
 * initializes the shared node from `drawMask` and `other`'s node, registers the object and adds it
 * to the model list. */
AsdMdlObject *asdMdlManagerCreateFromSourceAndNode(void *source, u32 size, u32 drawMask, AsdMdlObject *other)
{
    AsdMdlObject *obj = asdMdlObjectNew();

    obj->node->drawMask = drawMask;
    obj->node->file = asdModelRegisterImage(source, size);
    FUN_003289a0(obj->node, drawMask, other->node);
    FUN_002a9244(obj->node);
    asdMdlObjectBuildBounds(obj);
    asdListAdd(&g_asdMdlList, obj, 0);
    return obj;
}

} /* extern "C" */
