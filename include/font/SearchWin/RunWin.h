/* font/SearchWin/RunWin.c: the "run" (escape) command window. */
#ifndef FONT_SEARCHWIN_RUNWIN_H
#define FONT_SEARCHWIN_RUNWIN_H

#include "common.h"

/* The run (escape) window's work area. */
typedef struct RunWinWork {
    /* 0x00 */ u32 task;                   /* the window's task handle */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ s32 state;
    /* 0x0C */ s32 nextState;
    /* 0x10 */ s32 counter;
    /* 0x14 */ u8 active;
    /* 0x15 */ u8 unk15[0x3];
    /* 0x18 */ u8 sound[0x20];             /* sound player object (constructed in place) */
    /* 0x38 */ u8 ui[0x8c];                /* UI object set up by FUN_002bd954 */
    /* 0xC4 */ u8 text[0x20];
} RunWinWork;

/* The message drawing job owns two interchangeable UI windows. */
struct MessageWindowDrawState {
    /* 0x0000 */ u32 flags;
    /* 0x0004 */ u8 unk0004[0x17A0];
    /* 0x17A4 */ s32 mode;
    /* 0x17A8 */ u8 unk17a8[0x28];
    /* 0x17D0 */ u8 firstWindow[0x8C];
    /* 0x185C */ u8 secondWindow[0x8C];
};
struct MessageDrawPosition {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s16 x;
    /* 0x0A */ s16 y;
};
typedef char MessageWindowDrawStateSizeCheck[sizeof(MessageWindowDrawState) == 0x18E8 ? 1 : -1];

struct MessageImageSelector {
    /* 0x00 */ u8 unk00[0x37];
    /* 0x37 */ u8 selection;
};
struct MessageImagePair {
    /* 0x00 */ s32 first;
    /* 0x04 */ s32 second;
};
struct MessageImageChoices {
    /* 0x00 */ MessageImagePair pairs[2];
};
typedef char MessageImageSelectorSizeCheck[sizeof(MessageImageSelector) == 0x38 ? 1 : -1];
typedef char MessageImageChoicesSizeCheck[sizeof(MessageImageChoices) == 0x10 ? 1 : -1];

struct RequestImageSelector {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ u8 selection;
};
typedef char RequestImageSelectorSizeCheck[sizeof(RequestImageSelector) == 0x23 ? 1 : -1];

struct MessageDrawTransform {
    /* 0x00 */ f32 alpha;
    /* 0x04 */ s32 x;
    /* 0x08 */ s32 y;
};
struct MessageDrawSize {
    /* 0x00 */ s16 width;
    /* 0x02 */ s16 height;
};
struct MessageDrawItem {
    /* 0x00 */ MessageDrawPosition position;
    /* 0x0C */ const MessageDrawSize *size;
};
typedef char MessageDrawTransformSizeCheck[sizeof(MessageDrawTransform) == 0x0C ? 1 : -1];
typedef char MessageDrawItemSizeCheck[sizeof(MessageDrawItem) == 0x10 ? 1 : -1];

#endif
