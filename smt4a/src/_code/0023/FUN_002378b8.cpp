/* NON_MATCHING: retail retains an unfolded 21-to-5 mode remapping and keeps the result in r4 across getters; direct mode-five source is folded and uses a smaller frame. */
#include "common.h"

struct ScriptTransitionContext;

extern "C" {
ScriptTransitionContext* FUN_002ba85c();
u32 scrGetArg(u32 index);
u32 scrGetCommandFrame();
void FUN_0021bdac(ScriptTransitionContext* context, u32 argument, u32 frame, s32 mode, s32 first, s32 second);

// Submit the script argument and frame to the mode-five transition.
void FUN_002378b8()
{
    ScriptTransitionContext* context = FUN_002ba85c();
    u32 argument = scrGetArg(0);
    u32 frame = scrGetCommandFrame();
    FUN_0021bdac(context, argument, frame, 5, 0, 0);
}
}
