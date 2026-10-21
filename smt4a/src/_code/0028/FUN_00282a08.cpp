/* NON_MATCHING: compiler folds retail's redundant literal-21-to-kind-five comparison and rematerializes the constant kind/enabled arguments after the getters. */
#include "common.h"

extern "C" {
void scrCommMessageSetMode(u32 mode);
u32 FUN_002ba85c(void);
u32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
u32 FUN_0021bdac(u32 context, s32 argument, s32 frame, s32 kind, s32 enabled, u32 flags);

// Request a kind-five script message using the command's context and frame.
u32 FUN_00282a08(void)
{
    scrCommMessageSetMode(0);
    u32 context = FUN_002ba85c();
    s32 argument = scrGetArg(0);
    s32 frame = scrGetCommandFrame();
    return FUN_0021bdac(context, argument, frame, 5, 1, 0);
}
}
