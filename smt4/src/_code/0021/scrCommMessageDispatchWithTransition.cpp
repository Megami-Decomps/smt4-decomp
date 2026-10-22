#include "ui/MessageMain.h"

extern "C" {
extern MessageGlobals g_messageMain;

u32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
u32 FUN_002866b4(u32 message, u32 argument, u32 frame, s32 mode, s32 option, u32 flags);

/* Set the window's transition mode and dispatch the requested script message. */
u32 scrCommMessageDispatchWithTransition(u32 message, s32 mode)
{
    u32 argument = scrGetArg(0);
    u32 frame = scrGetCommandFrame();
    if (g_messageMain.state != NULL) {
        g_messageMain.state->displayMode = 20;
    }
    return FUN_002866b4(message, argument, frame, mode, 0, 0);
}

}
