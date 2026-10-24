#include "common.h"

extern "C" {

typedef struct MessageState {
    /* 0x000 */ u8 unk000[0x19C5];
    /* 0x19C5 */ u8 mode;
} MessageState;

typedef struct MessageMain {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ MessageState *state;
} MessageMain;

extern MessageMain g_messageMain;

u32 FUN_002ba85c(void);
u32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
s32 FUN_0021bdac(u32 a, u32 b, u32 c, s32 d, s32 e, s32 f);

static void showMessage(s32 mode)
{
    u32 a = FUN_002ba85c();
    u32 b = scrGetArg(0);
    u32 c = scrGetCommandFrame();

    FUN_0021bdac(a, b, c, mode, 0, 0);
}

/* Script command: puts the message state in mode 0x15 and starts FUN_0021bdac with the first argument. */
void scrShowMessageWithMode(void)
{
    if (g_messageMain.state != NULL) {
        g_messageMain.state->mode = 0x15;
    }
    showMessage(9);
}

} /* extern "C" */
