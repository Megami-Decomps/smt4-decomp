#include "common.h"

extern "C" {

int nw_gfx_SceneNode_AttachChild(u32 parent, u32 child);
extern int DAT_004dad80;
extern u32 FUN_00252394(u32 index);

void FUN_0020ffa0(u32 **nodes, int index)
{
    u32 parent = FUN_00252394(1);

    nw_gfx_SceneNode_AttachChild(parent, (*nodes)[index]);
    DAT_004dad80 = DAT_004dad80 + 1;
}

} /* extern "C" */
