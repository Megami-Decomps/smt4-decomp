#include "script/ScriptArgs.h"
/* NON_MATCHING: near (207 rows against 205): flow, constants and calls follow retail; retail's prologue is a variadic-style `push {r0-r3,...}` with the 5th/6th stack arguments read at sp+72/+76 and the 6th forwarded to FUN_0028e6d0 through a VFP register copy (vldr/vstr), which a plain u32 parameter does not reproduce, and register allocation differs */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef int s32;
typedef float f32;

extern "C" {

#define MSG_KIND_PLAIN 11
#define MSG_KIND_PLAIN_HELP 19

/* Message window object (observed fields only). */
struct MsgWindow {
    u8 pad00[4];
    u32 object;             /* 0x04 */
    u8 state;               /* 0x08: 0 idle, 3 opening, 4/5 finished */
    u8 layout;              /* 0x09 */
    u8 pad0A[6];
    u32 color;              /* 0x10 */
    u8 pad14[4];
    u32 result;             /* 0x18 */
    u8 pad1C[4];
    u32 menuLayer;          /* 0x20 */
    u8 pad24[9];
    u8 modeBit;             /* 0x2D */
    u8 restartPending;      /* 0x2E */
    u8 pad2F[6];
    u8 hasText;             /* 0x35 */
    u8 priority;            /* 0x36 */
    u8 pad37[0x27];
    u8 isPlain;             /* 0x5E */
    u8 closeLocked;         /* 0x5F */
    u8 pad60[0xA12 - 0x60];
    u8 savedHelpStatus;     /* 0xA12 */
    u8 savedSlot[6];        /* 0xA13 */
    u16 savedValue[6];      /* 0xA1A */
    u8 padA26[1];
};

struct MessageMainView {
    u8 pad00[4];
    MsgWindow *window[3];   /* 0x04, 0x08, 0x0C */
};

extern MessageMainView g_messageMain; /* 0x43e188 */

void messageSlotSet(s32 slot);
void scrCommMessageSetMode(s32 mode);
void FUN_0028dcf4(MsgWindow *window, u32 layout);
void FUN_0028e6d0(MsgWindow *window, u32 a, u32 b, u32 kind, u32 c, u32 d, u32 options);
int FUN_002b8244(void);
u32 FUN_002b753c(u32 object);
s32 FUN_002b8660(void);
s32 FUN_002c1d5c(void);
void buttonHelpSetPreset(s32 preset);
u32 buttonHelpGetStatus(void);
u32 buttonHelpGetEntryValue(u32 entry);
u8 buttonHelpGetSlotByte(u32 slot);
u16 FUN_002d6624(u32 slot);
void titleOverlaySetModeAnimation(MsgWindow *window, u8 layout);
void msgBoxFlagsClear(u32 object, s32 bits);
void objFlagsSetBits(u32 object, s32 bits);

/* Opens (when `wait` is 0) or advances/finishes (when nonzero) the message window of the given kind;
 * returns 1 when the message is complete and 0 while it is still showing. */
u32 FUN_002866b4(u32 a, u32 b, s32 wait, s32 kind, s32 priority, u32 options)
{
    MsgWindow *first = g_messageMain.window[0];
    MsgWindow *win;
    u8 modeBit = 0;
    u8 isPlain = (kind == MSG_KIND_PLAIN);

    win = g_messageMain.window[1];
    if (!isPlain) {
        if (kind != 13) {
            if (kind == 14) {
                kind = MSG_KIND_PLAIN;
            } else if (kind != 15) {
                win = g_messageMain.window[2];
                if (kind != 12) {
                    win = g_messageMain.window[1];
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
    win->modeBit = modeBit;
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
                FUN_0028e6d0(win, a, b, kind, 26, 1, 0);
                if (win->hasText == 0) {
                    FUN_0028dcf4(win, win->layout);
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
                scrSetResult(win->result);
                scrCommMessageSetMode(-1);
                messageSlotSet(0);
                return 1;
            }
            return 0;
        }
        if (state == 5) {
            scrSetResult(win->result);
            return 1;
        }
        if (FUN_002c1d5c() == 0) {
            return 0;
        }
        {
            s32 busy = FUN_002b8660();
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
            if (FUN_002c1d5c() != 0 && FUN_002b8660() != 0) {
                return 1;
            }
            FUN_0028e6d0(win, a, b, kind, 26, 1, options);
            if (kind == MSG_KIND_PLAIN || kind == MSG_KIND_PLAIN_HELP) {
                win->menuLayer = FUN_002b753c(win->object);
            }
            if (win->hasText == 0) {
                FUN_0028dcf4(win, win->layout);
            }
            if (priority != 0) {
                objFlagsSetBits(win->object, 0x20);
                msgBoxFlagsClear(win->object, 0x40);
            }
            win->savedHelpStatus = 0;
            for (u32 i = 0; i < 6; i++) {
                win->savedSlot[i] = buttonHelpGetSlotByte(i & 0xFF);
                win->savedValue[i] = FUN_002d6624(i & 0xFF);
            }
            u8 layout = win->layout;
            if ((layout == 7 || layout == 8 || layout == 9) && buttonHelpGetEntryValue(0) == 5) {
                win->padA26[0] = 1;
                win->savedHelpStatus = (u8)buttonHelpGetStatus();
                buttonHelpSetPreset(0xDC);
            }
            if (kind == MSG_KIND_PLAIN_HELP) {
                FUN_002b8244();
            }
            return 0;
        }
        win->restartPending = 1;
    }
    titleOverlaySetModeAnimation(win, win->layout);
    win->state = 3;
    win->hasText = 0;
    return 0;
}

} /* extern "C" */
