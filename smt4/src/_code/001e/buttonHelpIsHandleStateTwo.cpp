#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"

extern "C" {

s32 scrRunOpcodesStub(u32 handle);

/* Test whether the button-help handle reports state two. */
bool buttonHelpIsHandleStateTwo(void)
{
    return scrRunOpcodesStub(g_buttonHelp.work->unk560) == 2;
}

}
