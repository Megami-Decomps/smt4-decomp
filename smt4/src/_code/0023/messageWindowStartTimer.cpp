#include "common.h"

extern "C" {

typedef struct MessageWindow {
    /* 0x000 */ u8 unk000[0x82];
    /* 0x082 */ u8 closing;           /* 1: opening, 2: closing */
    /* 0x083 */ u8 unk083[0x21];
    /* 0x0A4 */ u8 layout[0x73C];
    /* 0x7E0 */ u8 timer[1];
} MessageWindow;

typedef struct MessageMain {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ MessageWindow *window;
} MessageMain;

extern MessageMain g_messageMain; /* 0x43e188 */

extern int timerStart(void *timer, int kind, int arg);
extern int FUN_002bd954(void *timer, int a, int b, void *layout, int c, f32 scale);

/* Starts the message window's open (nonzero `open`) or close animation timer; returns 1. */
u32 messageWindowStartTimer(int open)
{
    MessageWindow *window = g_messageMain.window;

    if (open != 0) {
        window->closing = 1;
        FUN_002bd954(window->timer, 0xE, 0, window->layout, 0xB, 1.0f);
        timerStart(window->timer, 8, 0);
    } else {
        window->closing = 2;
        FUN_002bd954(window->timer, 0xE, 0, window->layout, 0xB, 1.0f);
        timerStart(window->timer, 9, 0);
    }
    return 1;
}

} /* extern "C" */
