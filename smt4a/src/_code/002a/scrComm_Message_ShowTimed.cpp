#include "common.h"
#include "script/ScriptArgs.h"

extern "C" {
void scrCommMessageSetMode(s32 mode);
u32 FUN_0021bdac(u32 owner, u32 message, s32 frame, s32 style, s32 option, u32 duration);

// Submit both script values and the frame to the mode-fifteen transition.
u32 scrComm_Message_ShowTimed()
{
    scrCommMessageSetMode(0);
    s32 style = 15;
    s32 option = 0;
    u32 owner = scrGetCommandOwner();
    u32 message = scrGetArg(0);
    u32 duration = scrGetArg(1);
    s32 frame = scrGetCommandFrame();
    return FUN_0021bdac(owner, message, frame, style, option, duration);
}
}
