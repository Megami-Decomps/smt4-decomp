/* NON_MATCHING: armcc hoists the constant 1 above the branch (mov r7, #1) where retail loads it separately in the lock block (r1) and after it (r4), so registers and one nop differ */
#include "ui/MessageMain.h"
#include "script/ScriptArgs.h"
#include "util/ScrGetCommandFrame.h"
#include "util/ScrGetCommandFrame.h"
#include "util/ScrGetCommandFrame.h"

extern "C" {
extern MessageGlobals g_messageMain;

void FUN_002866b4(u32 a, u32 b, u32 frame, u8 state, int wait, int flags);

/* Show a script message for a quest state, locking the message window first when no command frame is active. */
void FUN_0030a02c(u8 state)
{
    scrCommMessageSetMode(0);
    if (scrGetCommandFrame() == 0) {
        MessagePanel *target = g_messageMain.banner;
        if (target != NULL) {
            target->unk30 = 1;
        }
        target->unk31 = 1;
    }
    u32 a = scrGetCommandOwner();
    u32 b = scrGetArg(0);
    FUN_002866b4(a, b, scrGetCommandFrame(), state, 1, 0);
}

} /* extern "C" */
