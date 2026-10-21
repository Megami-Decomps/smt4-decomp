/* NON_MATCHING: compiler rematerializes choice kind eleven at the final call instead of keeping it in a saved register. */
#include "common.h"

extern "C" {
void scrCommMessageSetMode(s32);
u32 FUN_002ba85c(void);
u32 scrGetArg(u32);
u32 scrGetCommandFrame(void);
u32 FUN_0021bdac(u32, u32, u32, s32, s32, s32);

// Show the script's choice message through the shared message-state handler.
u32 scrComm_Message_ShowChoice(void)
{
    scrCommMessageSetMode(0);
    u32 context = FUN_002ba85c();
    u32 message = scrGetArg(0);
    u32 frame = scrGetCommandFrame();
    return FUN_0021bdac(context, message, frame, 0xb, 0, 0);
}
}
