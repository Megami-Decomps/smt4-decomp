/* NON_MATCHING: retail retains the mode-fifteen and zero constants in saved registers across the getters; compiler rematerializes them and uses fewer saved registers. */
#include "common.h"
#include "script/ScriptArgs.h"

struct ScriptTransitionContext;

extern "C" {
u32 scrGetCommandFrame();
void FUN_0021bdac(ScriptTransitionContext* context, u32 first, u32 frame, s32 mode, s32 flags, u32 second);

// Submit both script values and the frame to the mode-fifteen transition.
void FUN_002a32ec()
{
    scrCommMessageSetMode(0);
    ScriptTransitionContext* context = reinterpret_cast<ScriptTransitionContext*>(scrGetCommandOwner());
    u32 first = scrGetArg(0);
    u32 second = scrGetArg(1);
    u32 frame = scrGetCommandFrame();
    FUN_0021bdac(context, first, frame, 15, 0, second);
}
}
