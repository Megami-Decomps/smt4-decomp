#include "ui/ButtonHelp.h"

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;

s32 scrRunOpcodesStub(u32 handle);

/* Test whether the button-help handle reports state two. */
bool buttonHelpIsHandleStateTwo(void)
{
    return scrRunOpcodesStub(g_buttonHelp.work->unk560) == 2;
}

}
