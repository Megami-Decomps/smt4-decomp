/* Message windows (Shin Megami Tensei IV: Apocalypse): the message module's three windows behind
 * g_messageMain (0x57F588). IV's layouts are in ui/MessageMain.h. */
#ifndef UI_MESSAGEMAINA_H
#define UI_MESSAGEMAINA_H
#include "common.h"
#include "ui/UiSpriteState.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include <stddef.h>

/* One message window (0x1A28 bytes, allocated by FUN_00145280). The dialogue window, the banner and
 * the auxiliary window are all of this type. */
struct MessageWindowA {
    /* 0x0000 */ u32 job;                /* calculation job (MESS_C) */
    /* 0x0004 */ u32 box;                /* the window's text box */
    /* 0x0008 */ u8 state;               /* 0 closed, 1/2 opening, 3 closing, 4/5 finished */
    /* 0x0009 */ u8 mode;                /* layout (message kind) */
    /* 0x000A */ u8 unk000A[2];
    /* 0x000C */ u32 flags;
    /* 0x0010 */ u8 unk0010[4];
    /* 0x0014 */ s32 unk0014;
    /* 0x0018 */ u32 value;
    /* 0x001C */ u32 choiceResult;
    /* 0x0020 */ u32 unk0020;
    /* 0x0024 */ u32 argument;           /* the auxiliary window's script value */
    /* 0x0028 */ u32 unk0028;
    /* 0x002C */ u8 unk002C[3];
    /* 0x002F */ u8 unk002F;
    /* 0x0030 */ u8 unk0030;
    /* 0x0031 */ u8 unk0031;
    /* 0x0032 */ u8 unk0032;
    /* 0x0033 */ u8 unk0033;
    /* 0x0034 */ u8 unk0034;
    /* 0x0035 */ u8 closeRequested;
    /* 0x0036 */ u8 unk0036[0x22];
    /* 0x0058 */ u16 unk0058;
    /* 0x005A */ u8 unk005A[0x13];
    /* 0x006D */ u8 closeLocked;
    /* 0x006E */ u8 unk006E[6];
    /* The banner's animated counter or its timed display (as in IV, 0x10 bytes later). */
    /* 0x0074 */ s32 counterDuration;
    /* 0x0078 */ u32 bannerId;
    /* 0x007C */ s32 counterValue;
    /* 0x0080 */ s32 counterDelta;
    /* 0x0084 */ s32 counterElapsed;     /* also the -1/1 step messageSetActiveMode sets */
    /* 0x0088 */ s32 counterBase;
    /* 0x008C */ u8 stepActive;          /* set with counterElapsed by messageSetActiveMode */
    /* 0x008D */ u8 counterState;        /* 0 idle, 1 shown, 2 waiting, 3 counting, 4 closing */
    /* 0x008E */ u8 wideValue;
    /* 0x008F */ u8 smallValue;
    /* 0x0090 */ u8 shown;               /* the banner (or demon notification) is up */
    /* 0x0091 */ u8 alternateAnimation;
    /* 0x0092 */ u8 unk0092;
    /* 0x0093 */ u8 unk0093;
    /* 0x0094 */ s8 transition;          /* 1: opening, 2: closing */
    /* 0x0095 */ u8 activeState;
    /* 0x0096 */ u8 unk0096[2];
    /* The demon notification queue (scrShowDemonNotification); its rows are sprites[22..33]. */
    /* 0x0098 */ s32 queueTimer;
    /* 0x009C */ s32 queueIndex;
    /* 0x00A0 */ u8 queueStates[12];
    /* 0x00AC */ u32 queueIds[12];
    /* 0x00DC */ u8 queueSpecial[12];
    /* 0x00E8 */ u8 unk00E8;
    /* 0x00E9 */ u8 queuePending;
    /* 0x00EA */ u8 unk00EA[0x66];
    /* The counter panel. */
    /* 0x0150 */ u32 panelMode;
    /* 0x0154 */ u8 panelState;          /* 0: closed */
    /* 0x0155 */ u8 unk0155[3];
    /* 0x0158 */ u32 panelStep;
    /* 0x015C */ u16 panelCount;
    /* 0x015E */ u16 panelDisplayCount;
    /* 0x0160 */ f32 panelCountValue;
    /* 0x0164 */ u16 panelArgument;       /* scrCommArmWork150 */
    /* 0x0166 */ u8 unk0166[2];
    /* 0x0168 */ u32 unk0168;
    /* 0x016C */ u8 unk016C;
    /* 0x016D */ u8 unk016D;
    /* 0x016E */ u8 unk016E[2];
    /* The popup value. */
    /* 0x0170 */ u32 unk0170;
    /* 0x0174 */ u32 unk0174;
    /* 0x0178 */ s32 popupValue;
    /* 0x017C */ u8 popupEnabled;
    /* 0x017D */ s8 popupShown;
    /* 0x017E */ u8 unk017E[2];
    /* 0x0180 */ s32 popupValueCopy;
    /* 0x0184 */ f32 popupValueFloat;
    /* 0x0188 */ u8 unk0188[4];
    /* 0x018C */ u32 unk018C;
    /* 0x0190 */ u8 introMode;
    /* 0x0191 */ u8 introStep;
    /* 0x0192 */ u8 introFlag;
    /* 0x0193 */ u8 unk0193;
    /* 0x0194 */ UiResourceParameters parameters; /* sprite resource packets */
    /* 0x01B4 */ UiSpriteState sprites[44]; /* 17: the banner frame, 21: the counter panel, 22-33: the
                                                * notification queue rows, 41: the intro */
    /* 0x19C4 */ u8 displayEnabled;
    /* 0x19C5 */ u8 displayMode;         /* 0x15: follow the message kind */
    /* 0x19C6 */ u8 unk19C6[0x14];
    /* 0x19DA */ u8 enabled;
    /* 0x19DB */ u8 unk19DB[0xD];
    /* 0x19E8 */ s8 unk19E8;
    /* 0x19E9 */ u8 unk19E9[3];
    /* 0x19EC */ s32 taskValue;
    /* 0x19F0 */ u8 closeMode;
    /* 0x19F1 */ s8 closeBusy;
    /* 0x19F2 */ u8 closePending;
    /* 0x19F3 */ u8 unk19F3;
    /* 0x19F4 */ u32 unk19F4;
    /* 0x19F8 */ u8 unk19F8;
    /* 0x19F9 */ u8 unk19F9;
    /* 0x19FA */ u8 unk19FA;
    /* 0x19FB */ u8 unk19FB;
    /* 0x19FC */ u32 unk19FC;
    /* 0x1A00 */ u8 unk1A00[4];
    /* 0x1A04 */ u32 unk1A04;
    /* 0x1A08 */ u8 unk1A08;
    /* 0x1A09 */ u8 unk1A09[7];
    /* 0x1A10 */ u8 activeValueEnabled;
    /* 0x1A11 */ u8 indexedFlags[4];
    /* 0x1A15 */ u8 unk1A15[3];
    /* 0x1A18 */ u32 unk1A18;
    /* 0x1A1C */ f32 activeValues[3];
};

/* g_messageMain: the message module. */
struct MessageMainA {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ MessageWindowA *window;   /* the dialogue window */
    /* 0x08 */ MessageWindowA *banner;   /* plain messages, banners, counters and panels */
    /* 0x0C */ MessageWindowA *aux;      /* kind-12 messages */
};

typedef char MessageWindowAOffsetsCheck[
    offsetof(MessageWindowA, closeRequested) == 0x35 && offsetof(MessageWindowA, closeLocked) == 0x6D &&
    offsetof(MessageWindowA, counterState) == 0x8D && offsetof(MessageWindowA, activeState) == 0x95 &&
    offsetof(MessageWindowA, queueIds) == 0xAC && offsetof(MessageWindowA, panelState) == 0x154 &&
    offsetof(MessageWindowA, popupValueFloat) == 0x184 && offsetof(MessageWindowA, parameters) == 0x194 &&
    offsetof(MessageWindowA, sprites) == 0x1B4 && offsetof(MessageWindowA, sprites[17]) == 0xB00 && offsetof(MessageWindowA, displayEnabled) == 0x19C4 &&
    offsetof(MessageWindowA, enabled) == 0x19DA && offsetof(MessageWindowA, taskValue) == 0x19EC &&
    offsetof(MessageWindowA, unk19FC) == 0x19FC && offsetof(MessageWindowA, indexedFlags) == 0x1A11 &&
    offsetof(MessageWindowA, activeValues) == 0x1A1C && sizeof(MessageWindowA) == 0x1A28 ? 1 : -1];
typedef char MessageMainASizeCheck[sizeof(MessageMainA) == 0x10 ? 1 : -1];

extern "C" MessageMainA g_messageMain;

#ifdef __cplusplus
extern "C" {
#endif

/* Canonical declaration (matches the definition). */
void FUN_003e48dc(u32 id);
void FUN_0015059c(u8 value);
/* Allocates a message window with its text box and jobs. */
MessageWindowA *FUN_00145280(void);

#ifdef __cplusplus
}
#endif

#endif
