#include "ui/MessageMain.h"
#include "script/ScriptArgs.h"

extern "C" {

extern s32 FUN_0021bdac(u32 a, u32 b, u32 c, s32 d, s32 e, s32 f);
extern MessageGlobalsA g_messageMain;

static void showMessage(s32 mode)
{
    u32 a = scrGetCommandOwner();
    u32 b = scrGetArg(0);
    u32 c = scrGetCommandFrame();

    FUN_0021bdac(a, b, c, mode, 0, 0);
}

/* Script command: puts the message state in display mode 0x15 and shows the first argument with mode 8. */
void FUN_0031a1a4(void)
{
    if (g_messageMain.state != NULL) {
        g_messageMain.state->displayMode = 0x15;
    }
    showMessage(8);
}

} /* extern "C" */
