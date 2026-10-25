#include "common.h"

extern "C" {

typedef struct MessageState {
    /* 0x000 */ u8 unk000[0xA11];
    /* 0xA11 */ u8 mode;
} MessageState;

typedef struct MessageMainView {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ MessageState *state;
} MessageMainView;

extern MessageMainView g_messageMain;

s32 scrCommMessageSetMode(s32 arg);
u32 scrGetCommandOwner(void);
u32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
s32 FUN_002866b4(u32 a, u32 b, u32 c, s32 mode, s32 wait, s32 f);

static void showMessage(s32 mode, s32 wait)
{
    u32 a = scrGetCommandOwner();
    u32 b = scrGetArg(0);
    u32 c = scrGetCommandFrame();

    FUN_002866b4(a, b, c, mode, wait, 0);
}

/* Script command: clears the message state, puts it in mode 0x14 and shows a confirm message, waiting for it. */
void scrComm_Message_ShowConfirmWait(void)
{
    scrCommMessageSetMode(0);
    if (g_messageMain.state != NULL) {
        g_messageMain.state->mode = 0x14;
    }
    showMessage(6, 1);
}

} /* extern "C" */
