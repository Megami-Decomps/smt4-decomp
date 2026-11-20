/* Message windows (Shin Megami Tensei IV): the message module's three windows behind g_messageMain
 * (0x43E188). Apocalypse's layouts are in ui/MessageMainA.h. */
#ifndef UI_MESSAGEMAIN_H
#define UI_MESSAGEMAIN_H
#include "common.h"
#include "ui/UiSpriteState.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include <stddef.h>

/* One message window (0xA3C bytes, allocated by messageWindowCreate). The dialogue window, the banner and
 * the auxiliary window are all of this type. */
struct MessageWindow {
    /* 0x000 */ u32 job;                 /* calculation job (MESS_C) */
    /* 0x004 */ u32 box;                 /* the window's text box (AsdText) */
    /* 0x008 */ u8 state;                /* 0 closed, 1/2 opening, 3 closing, 4/5 finished, 6 waiting */
    /* 0x009 */ u8 mode;                 /* layout (message kind) */
    /* 0x00A */ u8 variant;              /* how the window opened (0: at once, 1/2: waiting) */
    /* 0x00B */ u8 unk00B;
    /* 0x00C */ u32 flags;
    /* 0x010 */ u32 color;               /* text colour (RGBA) */
    /* 0x014 */ s32 unk014;
    /* 0x018 */ u32 value;
    /* 0x01C */ s32 choiceResult;
    /* 0x020 */ s32 touchRegionCount;
    /* 0x024 */ u32 argument;            /* the auxiliary window's script value */
    /* 0x028 */ u32 unk028;
    /* 0x02C */ u8 empty;                /* set when the window opened without a message */
    /* 0x02D */ u8 plainText;            /* draw the message as a plain "%s" string */
    /* 0x02E */ u8 restartPending;
    /* 0x02F */ u8 unk02F;
    /* 0x030 */ u8 unk030;
    /* 0x031 */ u8 unk031;
    /* 0x032 */ u8 unk032;
    /* 0x033 */ u8 unk033;
    /* 0x034 */ u8 unk034;
    /* 0x035 */ u8 closeRequested;
    /* 0x036 */ u8 priority;
    /* 0x037 */ u8 unk037[0x27];
    /* 0x05E */ u8 isPlain;
    /* 0x05F */ u8 closeLocked;
    /* 0x060 */ u8 unk060[4];
    /* The banner's animated counter (the numeric banner) or its timed display (bannerShow). */
    /* 0x064 */ s32 counterDuration;
    /* 0x068 */ u32 bannerId;
    /* 0x06C */ s32 counterValue;
    /* 0x070 */ s32 counterDelta;
    /* 0x074 */ s32 counterElapsed;
    /* 0x078 */ s32 counterBase;
    /* 0x07C */ u8 counterState;         /* 0 idle, 1 shown, 3 counting, 4 closing */
    /* 0x07D */ u8 wideValue;
    /* 0x07E */ u8 smallValue;
    /* 0x07F */ u8 alternateAnimation;
    /* 0x080 */ u8 unk080;
    /* 0x081 */ u8 unk081;
    /* 0x082 */ s8 transition;           /* 1: opening, 2: closing */
    /* 0x083 */ s8 activeState;
    /* 0x084 */ u32 unk084;
    /* 0x088 */ u8 panelState;           /* the counter panel's state (0: closed) */
    /* 0x089 */ u8 unk089[0xF];
    /* 0x098 */ u16 unk098;
    /* 0x09A */ u8 unk09A[2];
    /* 0x09C */ u32 unk09C;
    /* 0x0A0 */ u8 unk0A0;
    /* 0x0A1 */ u8 unk0A1;
    /* 0x0A2 */ u8 unk0A2[2];
    /* 0x0A4 */ UiResourceParameters parameters; /* sprite resource packets */
    /* 0x0C4 */ UiSpriteState sprites[17]; /* 12: the banner frame, 13: its timer, 16: the counter panel's list */
    /* 0xA10 */ u8 displayEnabled;
    /* 0xA11 */ u8 displayMode;          /* 20: follow the message kind */
    /* 0xA12 */ u8 savedHelpStatus;
    /* 0xA13 */ u8 savedHelpSlots[6];
    /* 0xA19 */ u8 unkA19;
    /* 0xA1A */ u16 savedHelpValues[6];
    /* 0xA26 */ u8 enabled;
    /* 0xA27 */ u8 unkA27[0xD];
    /* 0xA34 */ u8 unkA34;
    /* 0xA35 */ u8 unkA35[3];
    /* 0xA38 */ s32 taskValue;
};

/* g_messageMain: the message module. */
struct MessageMain {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ MessageWindow *window;    /* the dialogue window */
    /* 0x08 */ MessageWindow *banner;    /* plain messages, banners and counters */
    /* 0x0C */ MessageWindow *aux;       /* kind-12 messages */
};

typedef char MessageWindowOffsetsCheck[
    offsetof(MessageWindow, flags) == 0xC && offsetof(MessageWindow, choiceResult) == 0x1C &&
    offsetof(MessageWindow, closeRequested) == 0x35 && offsetof(MessageWindow, closeLocked) == 0x5F &&
    offsetof(MessageWindow, counterState) == 0x7C && offsetof(MessageWindow, panelState) == 0x88 &&
    offsetof(MessageWindow, parameters) == 0xA4 && offsetof(MessageWindow, sprites) == 0xC4 && offsetof(MessageWindow, sprites[12]) == 0x754 &&
    offsetof(MessageWindow, displayMode) == 0xA11 && offsetof(MessageWindow, savedHelpValues) == 0xA1A &&
    offsetof(MessageWindow, enabled) == 0xA26 && offsetof(MessageWindow, taskValue) == 0xA38 &&
    sizeof(MessageWindow) == 0xA3C ? 1 : -1];
typedef char MessageMainSizeCheck[sizeof(MessageMain) == 0x10 ? 1 : -1];

extern "C" MessageMain g_messageMain;

#ifdef __cplusplus
extern "C" {
#endif

void FUN_001a1648(void);
/* Allocates a message window with its text box and jobs. */
MessageWindow *messageWindowCreate(void);

#ifdef __cplusplus
}
#endif

#endif
