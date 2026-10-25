/* NON_MATCHING: Retail push {r4, r5, r6, r7, lr} differs from recovered push {r4, r5, r6, lr}. */
#include "common.h"
#include "script/ScriptArgs.h"
#include "util/ScrGetCommandFrame.h"
#include "util/ScrGetCommandFrame.h"
#include "util/ScrGetCommandFrame.h"

namespace {

struct MessageLockView {
    u8 unk00[0x30]; // 0x00
    u8 unk30;       // 0x30
    u8 unk31;       // 0x31
};

struct MessageStateView {
    u8 unk00[0xA11]; // 0x00
    u8 unkA11;       // 0xA11
};

struct MessageMainView {
    u32 unk00;                  // 0x00
    MessageStateView* unk04;    // 0x04
    MessageLockView* unk08;     // 0x08
};

}

extern "C" {
extern MessageMainView g_messageMain;
void FUN_002866b4(u32 message, u32 argument, s32 frame, s32 mode,
                  s32 wait, s32 unused);
}

// Set the confirmation locks on the first frame and advance the waiting message.
extern "C" void scrComm_Message_ShowConfirmWaitLock(void)
{
    scrCommMessageSetMode(0);
    if (scrGetCommandFrame() == 0) {
        MessageLockView* lock = g_messageMain.unk08;
        if (lock != 0) {
            lock->unk30 = 1;
        }
        lock->unk31 = 1;
    }

    if (g_messageMain.unk04 != 0) {
        g_messageMain.unk04->unkA11 = 0x14;
    }

    u32 message = scrGetCommandOwner();
    u32 argument = scrGetArg(0);
    s32 frame = scrGetCommandFrame();
    FUN_002866b4(message, argument, frame, 6, 1, 0);
}
