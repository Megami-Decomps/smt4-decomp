/* NON_MATCHING: retail preserves the constant mode 15 in a callee-saved register across the argument getters; compiler uses an immediate and a smaller frame. */
#include "common.h"

struct ScriptTransitionContext;

extern "C" {
void scrCommMessageSetMode(s32 mode);
ScriptTransitionContext* scrGetCommandOwner();
u32 scrGetArg(u32 index);
u32 scrGetCommandFrame();
void FUN_0021bdac(ScriptTransitionContext* context, u32 argument, u32 frame, s32 mode, s32 first, s32 second);

// Submit the script's argument and frame to the mode-fifteen transition.
void FUN_002a3298()
{
    scrCommMessageSetMode(0);
    ScriptTransitionContext* context = scrGetCommandOwner();
    u32 argument = scrGetArg(0);
    u32 frame = scrGetCommandFrame();
    FUN_0021bdac(context, argument, frame, 15, 0, 0);
}
}
