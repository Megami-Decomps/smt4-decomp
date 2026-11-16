#include "common.h"

extern "C" {

s32 scrCommMessageSetMode(s32 arg);
u32 scrGetCommandOwner(void);
u32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
s32 messageWindowShowOrPoll(u32 a, u32 b, u32 c, s32 mode, s32 e, s32 f);

static void showMessage(s32 mode)
{
    u32 a = scrGetCommandOwner();
    u32 b = scrGetArg(0);
    u32 c = scrGetCommandFrame();

    messageWindowShowOrPoll(a, b, c, mode, 0, 0);
}

/* Script command: clears the message state and shows a message in mode 14. */
void scrComm_Message_ShowMode14(void)
{
    scrCommMessageSetMode(0);
    showMessage(14);
}

} /* extern "C" */
