#include "common.h"

extern "C" {

extern struct {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ struct {
        /* 0x00 */ u8 unk00[0x7c];
        /* 0x7C */ u8 busy;
    } *window;
} g_messageMain;

/* Answers whether the message window is idle. */
u32 messageIsWindowIdle(void)
{
    return g_messageMain.window->busy == 0;
}

} /* extern "C" */
