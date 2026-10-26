#include "common.h"

extern "C" {

typedef struct MessageState {
    /* 0x000 */ u8 unk000[0xA11];
    /* 0xA11 */ u8 mode;
} MessageState;

typedef struct MessageCommand {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ MessageState *state;
} MessageCommand;

u32 scrGetCommandOwner(void);
u32 scrGetArg(u32 index);
u32 scrGetCommandFrame(void);
s32 FUN_002866b4(u32 a, u32 b, u32 c, s32 d, s32 e, s32 f);

static void showMessage(MessageCommand *command, s32 state, s32 mode)
{
    u32 a;
    u32 b;
    u32 c;

    if (command->state != NULL) {
        command->state->mode = state;
    }
    a = scrGetCommandOwner();
    b = scrGetArg(0);
    c = scrGetCommandFrame();

    FUN_002866b4(a, b, c, mode, 0, 0);
}

/* Script command: puts the message state in mode 0x14 and starts FUN_002866b4 with the first argument. */
extern MessageCommand g_messageMain;
void FUN_001c2a1c(void)
{
    showMessage(&g_messageMain, 0x14, 7);
}

} /* extern "C" */
