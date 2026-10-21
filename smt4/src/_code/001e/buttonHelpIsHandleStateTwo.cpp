#include "shard/Obj43da28.h"

extern "C" {

s32 FUN_0019e0c0(u32 handle);

/* Test whether the button-help handle reports state two. */
bool buttonHelpIsHandleStateTwo(void)
{
    return FUN_0019e0c0(g_buttonHelp.obj->unk560) == 2;
}

}
