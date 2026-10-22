/* NON_MATCHING: the constant-one lifetime and mode-result register allocation differ. */
#include "ui/MessageMain.h"

extern "C" {
void scrCommMessageSetMode(u32 mode);
s32 scrGetCommandFrame();
u32 scrGetArg(u32 index);
s32 FUN_0028660c();
u32 FUN_002865f8();
void FUN_002866b4(u32 context, u32 message, s32 frame, s32 mode, bool wait, u32 flags);
extern MessageGlobals g_messageMain;

void scrComm_Message_ShowWaitLockConfirm()
{
    scrCommMessageSetMode(0);
    if (scrGetCommandFrame() == 0) {
        MessagePanel *panel = g_messageMain.banner;
        if (panel != 0) {
            panel->unk30 = 1;
        }
        panel->unk31 = 1;
    }
    s32 mode = FUN_0028660c();
    if (mode == 20) {
        mode = 5;
    }
    u32 context = FUN_002865f8();
    u32 message = scrGetArg(0);
    s32 frame = scrGetCommandFrame();
    FUN_002866b4(context, message, frame, mode, true, 0);
}
}
