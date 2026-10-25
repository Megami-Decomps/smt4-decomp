#include "common.h"

extern "C" {

/* The message window's sprite state: an animation request (0x19F0/0x19F1/0x19F2 flags) at the end of the work area. */
struct MessageWindowWork {
    /* 0x0000 */ u8 unk0000[0x144C];
    /* 0x144C */ u8 sprite[0x5A4];
    /* 0x19F0 */ u8 mode;
    /* 0x19F1 */ s8 busy;
    /* 0x19F2 */ u8 requested;
};

struct MessageMainRoot {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ MessageWindowWork *window;
};

extern MessageMainRoot g_messageMain;
void uiSpriteSelectAnim(void *sprite, s32 anim);
s32 scrGetCommandFrame(void);

/* Starts the message window's close animation on a fresh command frame; true when it is not busy. */
u8 messageCloseWindowAndIsIdle(void)
{
    MessageWindowWork *window = g_messageMain.window;

    if (scrGetCommandFrame() == 0 && window->requested != 0) {
        MessageWindowWork *current = g_messageMain.window;
        uiSpriteSelectAnim(current->sprite, 12);
        current->busy = 1;
        current->mode = 4;
    }
    return window->busy == 0;
}

} /* extern "C" */
