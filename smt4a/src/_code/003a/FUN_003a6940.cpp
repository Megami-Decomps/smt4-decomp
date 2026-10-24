#include "common.h"

struct MessageWindow {
    /* 0x00 */ u8 unk00[0x19ec];
    /* 0x19ec */ s32 state;
};

struct MessageMain {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ MessageWindow *windowA;
    /* 0x08 */ MessageWindow *windowB;
    /* 0x0c */ MessageWindow *windowC;
};

extern "C" {

extern MessageMain g_messageMain;
extern MessageWindow *DAT_005e2010[12];

/* Script command: resets the state word of every message window to -2. */
u32 FUN_003a6940(void)
{
    g_messageMain.windowA->state = -2;
    g_messageMain.windowB->state = -2;
    g_messageMain.windowC->state = -2;
    for (s32 i = 0; i < 12; i++) {
        DAT_005e2010[i]->state = -2;
    }
    return 1;
}

} /* extern "C" */
