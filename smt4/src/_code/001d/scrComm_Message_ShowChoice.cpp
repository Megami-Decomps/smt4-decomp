#include "common.h"

extern "C" {
void scrCommMessageSetMode(s32);
u32 FUN_002865f8(void);
u32 scrGetArg(u32);
u32 scrGetCommandFrame(void);
u32 FUN_002866b4(u32, u32, u32, s32, s32, s32);

static u32 showMessage(s32 mode, s32 wait)
{
    u32 context = FUN_002865f8();
    u32 message = scrGetArg(0);
    u32 frame = scrGetCommandFrame();
    return FUN_002866b4(context, message, frame, mode, wait, 0);
}

// Show the script's choice message through the shared message-state handler.
u32 scrComm_Message_ShowChoice(void)
{
    scrCommMessageSetMode(0);
    return showMessage(11, 0);
}
}
