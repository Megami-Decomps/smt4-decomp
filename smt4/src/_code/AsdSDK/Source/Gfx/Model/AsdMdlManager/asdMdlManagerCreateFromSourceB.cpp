#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

AsdModelFile *asdModelRegisterImage(void *source, u32 size);
void FUN_003289d8(AsdMdlNode *node, u32 param);
void asdListAdd(u32 *list, AsdMdlObject *obj, s32 arg);

extern u32 g_asdMdlList;

/* Creates a model object from a model source: builds its data, initializes the shared node with
 * `drawMask`, registers the object and adds it to the model list. */
AsdMdlObject *asdMdlManagerCreateFromSourceB(void *source, u32 size, u32 drawMask)
{
    AsdMdlObject *obj = asdMdlObjectNew();

    obj->node->drawMask = drawMask;
    obj->node->file = asdModelRegisterImage(source, size);
    FUN_003289d8(obj->node, drawMask);
    asdMdlObjectBuildBounds(obj);
    asdListAdd(&g_asdMdlList, obj, 0);
    return obj;
}

} /* extern "C" */
