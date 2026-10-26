/* NON_MATCHING: retail keeps the 21-to-5 remap unfolded (mov r0,#21; cmp r0,#21; moveq r0,#5); armcc folds it to mov r4,#5 here. Mode held in r4 across the getters now matches. */
#include "common.h"
#include "script/ScriptArgs.h"

struct ScriptTransitionContext;

extern "C" {
u32 scrGetCommandFrame();
void FUN_0021bdac(ScriptTransitionContext* context, u32 argument, u32 frame, s32 mode, s32 first, s32 second);

/* Maps the script's transition kind 21 to mode 5; other kinds pass through. */
static __inline s32 transitionMode(s32 kind)
{
    if (kind == 21)
        return 5;
    return kind;
}

// Submit the script argument and frame to the mode-five transition.
void FUN_002378b8()
{
    s32 mode = transitionMode(21);
    ScriptTransitionContext* context = reinterpret_cast<ScriptTransitionContext*>(scrGetCommandOwner());
    u32 argument = scrGetArg(0);
    u32 frame = scrGetCommandFrame();
    FUN_0021bdac(context, argument, frame, mode, 0, 0);
}
}
