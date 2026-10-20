#include "common.h"

extern "C" {

typedef struct MsgWindow {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u8 state;
    /* 0x09 */ u8 kind;
    /* 0x0A */ u8 unk0A[0x2B];
    /* 0x35 */ u8 dirty;
} MsgWindow;

typedef struct MessageMain {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ MsgWindow *window;
} MessageMain;

extern MessageMain g_messageMain;

extern s32 FUN_00165088(MsgWindow *window, u32 kind);

/* If the message window is active (state != 0), runs FUN_00165088 for its kind and resets it to state 3. */
void msgWindowReset(void)
{
    MsgWindow *window = g_messageMain.window;

    if (window->state != 0 && window != NULL) {
        FUN_00165088(window, window->kind);
        window->state = 3;
        window->dirty = 0;
    }
}

} /* extern "C" */
