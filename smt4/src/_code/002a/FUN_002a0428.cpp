#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {

int sceneNodeCollectionRegisterGroup(u32 a, u32 b);

void FUN_002a0428(AsdMdlObject *model, u32 group)
{
    model->flags = model->flags & 0xffdfffff;
    sceneNodeCollectionRegisterGroup(reinterpret_cast<u32>(model->node), group);
}

} /* extern "C" */
