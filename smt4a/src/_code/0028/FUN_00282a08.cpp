#include "common.h"
#include "shard/W6_W6Match1_PositionedStream.h"
#include "script/ScriptArgs.h"

extern "C" {
s32 scrMessageKindGetValue(void);
u32 scrGetCommandOwner(void);
u32 scrGetCommandFrame(void);
u32 FUN_0021bdac(u32 context, s32 argument, s32 frame, s32 kind, s32 enabled, u32 flags);

static __inline s32 messageKind(s32 kind)
{
    return kind == 21 ? 5 : kind;
}

// Request a kind-five script message using the command's context and frame.
u32 FUN_00282a08(void)
{
    scrCommMessageSetMode(0);
    s32 kind = messageKind(scrMessageKindGetValue());
    s32 enabled = 1;
    u32 context = scrGetCommandOwner();
    s32 argument = scrGetArg(0);
    s32 frame = scrGetCommandFrame();
    return FUN_0021bdac(context, argument, frame, kind, enabled, 0);
}
}
