#include "common.h"

extern "C" {

s32 scrCommMessageSetMode(s32 arg);
s32 FUN_0028660c(void);
u32 FUN_002865f8(void);
u32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
s32 FUN_002866b4(u32 a, u32 b, u32 c, s32 mode, s32 wait, s32 f);

static void showMessage(s32 mode, s32 wait)
{
    u32 a = FUN_002865f8();
    u32 b = scrGetArg(0);
    u32 c = scrGetCommandFrame();

    FUN_002866b4(a, b, c, mode, wait, 0);
}

/* Script command: clears the message state and shows a message, waiting for it (mode 5 when the current mode is 20). */
void scrComm_Message_ShowAndWait(void)
{
    s32 mode;

    scrCommMessageSetMode(0);
    mode = FUN_0028660c();
    if (mode == 20) {
        mode = 5;
    }
    showMessage(mode, 1);
}

} /* extern "C" */
