#include "shard/Obj43da28.h"

extern "C" {

s32 scrRunOpcodesStub(u32 handle);

/* Test whether the button-help handle reports state two. */
bool buttonHelpIsHandleStateTwo(void)
{
    return scrRunOpcodesStub(g_buttonHelp.obj->unk560) == 2;
}

}
