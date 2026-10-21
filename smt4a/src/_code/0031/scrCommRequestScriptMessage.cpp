#include "common.h"

extern "C" {
void scrCommMessageSetMode(s32 mode);
u32 FUN_002ba85c(void);
s32 scrGetArg(s32 index);
u32 scrGetCommandFrame(void);
u32 FUN_0021bdac(u32 resource, s32 message, u32 frame, s32 kind, s32 option, u32 flags);

static __inline u32 requestCurrentScriptMessage(s32 kind)
{
    u32 resource = FUN_002ba85c();
    s32 message = scrGetArg(0);
    u32 frame = scrGetCommandFrame();
    return FUN_0021bdac(resource, message, frame, kind, 0, 0);
}

// Request message kind 20 using the current script resource and command frame.
u32 scrCommRequestScriptMessage(void)
{
    scrCommMessageSetMode(0);
    return requestCurrentScriptMessage(20);
}
}
