/* NON_MATCHING: retail preserves style14/option0 in extra saved registers across calls and uses strd; compiler materializes them at the final call and uses stm (O2 also differs). */
#include "common.h"

extern "C" {
void scrCommMessageSetMode(s32 mode);
u32 FUN_002865f8(void);
u32 scrGetArg(u32 index);
s32 scrGetCommandFrame(void);
u32 FUN_002866b4(u32 owner, u32 message, s32 frame, s32 style, s32 option, u32 duration);

// Show the requested message with its script duration at the current command frame.
u32 scrComm_Message_ShowTimed(void)
{
    scrCommMessageSetMode(0);
    u32 owner = FUN_002865f8();
    u32 message = scrGetArg(0);
    u32 duration = scrGetArg(1);
    s32 frame = scrGetCommandFrame();
    return FUN_002866b4(owner, message, frame, 14, 0, duration);
}
}
