#include "common.h"
#include "script/ScriptArgs.h"

struct ScriptTransitionContext;

extern "C" {
s32 scrMessageKindGetValue(void);
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
    s32 mode = transitionMode(scrMessageKindGetValue());
    ScriptTransitionContext* context = reinterpret_cast<ScriptTransitionContext*>(scrGetCommandOwner());
    u32 argument = scrGetArg(0);
    u32 frame = scrGetCommandFrame();
    FUN_0021bdac(context, argument, frame, mode, 0, 0);
}
}
