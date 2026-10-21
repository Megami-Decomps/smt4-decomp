#include "common.h"

extern "C" {

int nw_gfx_SceneNode_AttachChild(u32 parent, u32 child);
extern int g_asdLightCount;
extern u32 asdLightSelectActive(u32 index);

void sceneAttachLightChild(u32 **nodes, int index)
{
    u32 parent = asdLightSelectActive(1);

    nw_gfx_SceneNode_AttachChild(parent, (*nodes)[index]);
    g_asdLightCount = g_asdLightCount + 1;
}

} /* extern "C" */
