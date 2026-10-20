#include "common.h"

extern "C" {

typedef struct MessageWindow {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 state;      /* 1 while the message is showing */
} MessageWindow;

typedef struct MessageMain {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ MessageWindow *window;
} MessageMain;

extern MessageMain g_messageMain;

/* True while the message window exists and is in state 1. */
u8 messageWindowIsState1(void)
{
    return g_messageMain.window != NULL && g_messageMain.window->state == 1;
}

} /* extern "C" */
