#include "AsdSDK/Source/Gfx/Text/TextDefaults.h"

#define MESSAGE_WINDOW_PAUSED 0x08
#define MESSAGE_WINDOW_LAST_PAGE 0x20
#define MESSAGE_WINDOW_FINISHED 0x40
#define MESSAGE_WINDOW_NO_INPUT 0x80
#define MESSAGE_WINDOW_AUTO_ADVANCE 0x02
#define MESSAGE_WINDOW_CLOSING 0x10
#define MESSAGE_WINDOW_NOTIFY_FIRST 0x400

enum MessageWindowState {
    MESSAGE_WINDOW_PRINTING = 1,
    MESSAGE_WINDOW_WAIT_INPUT = 2,
    MESSAGE_WINDOW_WAIT_PAD = 3,
    MESSAGE_WINDOW_HOLD = 4,
    MESSAGE_WINDOW_IDLE = 5
};

/* One page entry: first halfword is the page id (0xFFFF ends the message), 0x20 bytes each. */
struct MessagePage {
    u16 id;
    u8 unk02[0x1E];
};

struct MessageWindow {
    /* 0x00 */ MessagePage *pages;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ s32 page;
    /* 0x0C */ s32 shownPage;
    /* 0x10 */ s32 shownChars;
    /* 0x14 */ u8 unk14[0x0C];
    /* 0x20 */ s32 speed;           /* characters per step; -1: show the whole line at once */
    /* 0x24 */ s32 progress;
    /* 0x28 */ s32 holdCounter;
    /* 0x2C */ s32 holdFrames;
    /* 0x30 */ s32 frame;
    /* 0x34 */ u32 flags;
    /* 0x38 */ u8 unk38[0x0C];
    /* 0x44 */ u8 state;
    /* 0x45 */ u8 unk45[3];
    /* 0x48 */ u8 unk48[0x65];
    /* 0xAD */ u8 lineDone;
};

extern "C" {
extern AsdTextDefaults g_asdTextDefaults;

s32 FUN_002b31b4(MessageWindow *window);
s32 padIsButtonPressed(u32 button);

/* Prints the next characters of the line: all of them when printing at once or skipping with auto-advance on,
 * -speed of them when the speed is below -1, otherwise one every speed + 1 frames. */
static void messageWindowPrintLine(MessageWindow *window, bool skip)
{
    if (window->speed == -1 || (skip && (window->flags & MESSAGE_WINDOW_AUTO_ADVANCE))) {
        while (FUN_002b31b4(window) == 0) {
        }
        window->lineDone = 1;
        return;
    }
    window->lineDone = 0;
    if (window->speed < -1) {
        s32 count = -window->speed;
        for (s32 i = 0; i < count; i++) {
            if (FUN_002b31b4(window) != 0)
                break;
        }
        window->progress = 0;
        return;
    }
    if (++window->progress > window->speed) {
        FUN_002b31b4(window);
        window->progress = 0;
    }
}

/* Advances one frame of a message window: prints characters, waits for the player and moves on
 * through pages. */
void messageWindowUpdate(MessageWindow *window)
{
    u32 flags = window->flags;
    if (flags & MESSAGE_WINDOW_PAUSED)
        return;
    AsdTextDefaults *defaults = &g_asdTextDefaults;
    switch (window->state) {
    case MESSAGE_WINDOW_IDLE:
        window->frame++;
        return;
    case MESSAGE_WINDOW_PRINTING:
    {
        bool skip = false;
        if ((flags & MESSAGE_WINDOW_NO_INPUT) || defaults->skipRequested(window) == 1)
            skip = true;
        messageWindowPrintLine(window, skip);
        return;
    }
    case MESSAGE_WINDOW_WAIT_INPUT: {
        window->frame++;
        /* Both page paths poll the same advance callback. */
        AsdTextWindowPoll advance = g_asdTextDefaults.advanceRequested;
        if (flags & MESSAGE_WINDOW_LAST_PAGE) {
            if (window->pages[window->page].id == 0xFFFF) {
                window->flags = flags | MESSAGE_WINDOW_FINISHED;
            } else if (!(flags & MESSAGE_WINDOW_NO_INPUT)) {
                s32 request = advance(window);
                if (request != 0) {
                    window->state = MESSAGE_WINDOW_PRINTING;
                    window->shownPage = window->page;
                    window->shownChars = 0;
                    if (request == 1 && (window->flags & MESSAGE_WINDOW_NOTIFY_FIRST)
                        && defaults->unk18 != 0) {
                        ((void (*)(s32))defaults->unk18)(0);
                        return;
                    }
                }
            }
        } else if (!(flags & MESSAGE_WINDOW_NO_INPUT)) {
            s32 request = advance(window);
            if (request != 0) {
                if (window->pages[window->page].id == 0xFFFF) {
                    window->state = MESSAGE_WINDOW_IDLE;
                    window->flags |= MESSAGE_WINDOW_CLOSING;
                } else {
                    window->state = MESSAGE_WINDOW_PRINTING;
                    window->shownPage = window->page;
                    window->shownChars = 0;
                }
                if (request == 1 && (window->flags & MESSAGE_WINDOW_NOTIFY_FIRST)
                    && defaults->unk18 != 0) {
                    ((void (*)(s32))defaults->unk18)(0);
                    return;
                }
            }
        }
        break;
    }
    case MESSAGE_WINDOW_WAIT_PAD:
        if (padIsButtonPressed(0) != 0)
            window->state = MESSAGE_WINDOW_PRINTING;
        return;
    case MESSAGE_WINDOW_HOLD:
        if (window->holdCounter < window->holdFrames) {
            window->holdCounter++;
        } else {
            window->holdCounter = 0;
            window->state = MESSAGE_WINDOW_PRINTING;
            window->holdFrames = 0;
        }
        return;
    }
}

} /* extern "C" */
