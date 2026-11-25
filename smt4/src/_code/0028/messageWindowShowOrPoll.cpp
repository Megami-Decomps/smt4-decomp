#include "script/ScriptArgs.h"
#include "ui/MessageMain.h"
/* NON_MATCHING: near (207 rows against 205): flow, constants and calls follow retail; retail's prologue is a variadic-style `push {r0-r3,...}` with the 5th/6th stack arguments read at sp+72/+76 and the 6th forwarded to messageWindowOpen through a VFP register copy (vldr/vstr), which a plain u32 parameter does not reproduce, and register allocation differs */
extern "C" {

#define MSG_KIND_PLAIN 11
#define MSG_KIND_PLAIN_HELP 19

void messageSlotSet(s32 slot);
void messageWindowSetupLayoutSprites(MessageWindow *window, u32 layout);
void messageWindowOpen(MessageWindow *window, u32 a, u32 b, u32 kind, u32 c, u32 d, u32 options);
int buttonHelpSetEnabled(void);
u32 FUN_002b753c(u32 object);
s32 resultIsIdle(void);
s32 eventIsSkipping(void);
void buttonHelpSetPreset(s32 preset);
u32 buttonHelpGetStatus(void);
u32 buttonHelpGetEntryValue(u32 entry);
u8 buttonHelpGetSlotByte(u32 slot);
u16 FUN_002d6624(u32 slot);
void titleOverlaySetModeAnimation(MessageWindow *window, u8 layout);
void msgBoxFlagsClear(u32 object, s32 bits);
void objFlagsSetBits(u32 object, s32 bits);

/* Opens (when `wait` is 0) or advances/finishes (when nonzero) the message window of the given kind;
 * returns 1 when the message is complete and 0 while it is still showing. */
u32 messageWindowShowOrPoll(u32 a, u32 b, s32 wait, s32 kind, s32 priority, u32 options)
{
    MessageWindow *first = g_messageMain.window;
    MessageWindow *win;
    u8 modeBit = 0;
    u8 isPlain = (kind == MSG_KIND_PLAIN);

    win = g_messageMain.banner;
    if (!isPlain) {
        if (kind != 13) {
            if (kind == 14) {
                kind = MSG_KIND_PLAIN;
            } else if (kind != 15) {
                win = g_messageMain.aux;
                if (kind != 12) {
                    win = g_messageMain.banner;
                    if (kind != MSG_KIND_PLAIN && kind != MSG_KIND_PLAIN_HELP) {
                        win = first;
                    }
                }
            } else {
                kind = MSG_KIND_PLAIN;
                modeBit = 1;
                isPlain = 0;
            }
        } else {
            modeBit = 1;
            kind = MSG_KIND_PLAIN;
            isPlain = 1;
        }
    }
    win->plainText = modeBit;
    win->isPlain = isPlain;

    if (wait != 0) {
        u8 state = 0;
        if (win != 0 && win->state == 4) {
            return 1;
        }
        if (win != 0) {
            state = win->state;
        }
        if (win == 0 || state == 0) {
            if (win->restartPending != 0) {
                win->restartPending = 0;
                messageWindowOpen(win, a, b, kind, 26, 1, 0);
                if (win->closeRequested == 0) {
                    messageWindowSetupLayoutSprites(win, win->mode);
                }
                return 0;
            }
            if (kind != MSG_KIND_PLAIN && kind != MSG_KIND_PLAIN_HELP) {
                return 1;
            }
            state = 0;
            if (first != 0) {
                state = first->state;
            }
            if (first == 0 || state == 0) {
                scrSetResult(win->value);
                scrCommMessageSetMode(-1);
                messageSlotSet(0);
                return 1;
            }
            return 0;
        }
        if (state == 5) {
            scrSetResult(win->value);
            return 1;
        }
        if (eventIsSkipping() == 0) {
            return 0;
        }
        {
            s32 busy = resultIsIdle();
            u8 now = 0;
            if (busy != 0) {
                now = win->state;
            }
            if (busy == 0 || now == 3 || now == 0) {
                return 0;
            }
        }
    } else {
        if (isPlain != 0) {
            win->closeLocked = 1;
            first->closeLocked = 1;
        }
        win->priority = (u8)priority;
        win->color = (kind == 6) ? 0x035AB9FF : 0x320202FF;
        u32 state = 0;
        if (win != 0) {
            state = win->state;
        }
        if (win == 0 || state == 0) {
            if (eventIsSkipping() != 0 && resultIsIdle() != 0) {
                return 1;
            }
            messageWindowOpen(win, a, b, kind, 26, 1, options);
            if (kind == MSG_KIND_PLAIN || kind == MSG_KIND_PLAIN_HELP) {
                win->touchRegionCount = FUN_002b753c(win->box);
            }
            if (win->closeRequested == 0) {
                messageWindowSetupLayoutSprites(win, win->mode);
            }
            if (priority != 0) {
                objFlagsSetBits(win->box, 0x20);
                msgBoxFlagsClear(win->box, 0x40);
            }
            win->savedHelpStatus = 0;
            for (u32 i = 0; i < 6; i++) {
                win->savedHelpSlots[i] = buttonHelpGetSlotByte(i & 0xFF);
                win->savedHelpValues[i] = FUN_002d6624(i & 0xFF);
            }
            u8 layout = win->mode;
            if ((layout == 7 || layout == 8 || layout == 9) && buttonHelpGetEntryValue(0) == 5) {
                win->enabled = 1;
                win->savedHelpStatus = (u8)buttonHelpGetStatus();
                buttonHelpSetPreset(0xDC);
            }
            if (kind == MSG_KIND_PLAIN_HELP) {
                buttonHelpSetEnabled();
            }
            return 0;
        }
        win->restartPending = 1;
    }
    titleOverlaySetModeAnimation(win, win->mode);
    win->state = 3;
    win->closeRequested = 0;
    return 0;
}

} /* extern "C" */
