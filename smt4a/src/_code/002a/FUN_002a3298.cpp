#include "common.h"
#include "script/ScriptArgs.h"

struct ScriptTransitionContext;

extern "C" {
u32 scrGetCommandFrame();
void FUN_0021bdac(ScriptTransitionContext* context, u32 argument, u32 frame, s32 mode, s32 first, s32 second);

static void showTransition(s32 mode, s32 wait)
{
    ScriptTransitionContext* context = reinterpret_cast<ScriptTransitionContext*>(scrGetCommandOwner());
    u32 argument = scrGetArg(0);
    u32 frame = scrGetCommandFrame();
    FUN_0021bdac(context, argument, frame, mode, wait, 0);
}

// Submit the script's argument and frame to the mode-fifteen transition.
void FUN_002a3298()
{
    scrCommMessageSetMode(0);
    showTransition(15, 0);
}
}
