#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

extern u32 scrGetArg(u32 index);
extern u32 scrGetCommandFrame(void);
extern void FUN_002866b4(u32 messageWindow, u32 arg, u32 frame, s32 kind, s32 a, s32 b);

/* Shows the choice for the script command's first argument in the given message window. */
void scrShowChoiceInWindow(u32 messageWindow)
{
    u32 arg = scrGetArg(0);
    u32 frame = scrGetCommandFrame();

    if (g_messageMain.state != NULL) {
        g_messageMain.state->displayMode = 0x14;
    }
    FUN_002866b4(messageWindow, arg, frame, 11, 0, 0);
}

} /* extern "C" */
