#include "ui/UiSpriteApi.h"
#include "ui/ButtonHelpGlobal.h"
#include "script/scrScriptProcess.h"

extern "C" {

/* Test whether the button-help handle reports state two. */
bool buttonHelpIsHandleStateTwo(void)
{
    return scrRunOpcodesStub(g_buttonHelp.work->scriptProcess) == 2;
}

}
