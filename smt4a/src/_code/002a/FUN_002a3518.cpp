/* NON_MATCHING: retail keeps the constant 6 in a callee-saved register across the calls (the built code loads it just before the last call) */
#include "ui/MessageMain.h"
#include "util/CalleeContracts.h"
extern "C" MessageGlobalsA g_messageMain;

extern "C" {

void eventTexRequestStopAll(void);
u32 scrGetCommandOwner(void);
s32 scrGetArg(...);
u32 scrGetCommandFrame(void);
void FUN_0021bdac(u32 a, u32 b, u32 frame, u8 state, s32 wait, s32 flags);

/* Stop the bust-up and event-texture animations, put the message window into state 21 and show the
 * script message with message state 6. */
void FUN_002a3518(s32 command, s32 target)
{
    bustupCutAnimRequestStopSlots(command);
    eventTexRequestStopAll();
    if (g_messageMain.state != NULL) {
        g_messageMain.state->displayMode = 21;
    }
    u32 a = scrGetCommandOwner();
    u32 b = scrGetArg(0);
    FUN_0021bdac(a, b, scrGetCommandFrame(), 6, 0, 0);
}

} /* extern "C" */
