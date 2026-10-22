#ifndef UI_SELECTIONNOTIFICATION_H
#define UI_SELECTIONNOTIFICATION_H
#include "ui/UiSpriteState.h"

struct SelectionNotificationState {
    u32 unk00;
    /* 0x004 */ s32 state;
    /* 0x008 */ s32 phase;
    u8 unk00C[0xC34];
    /* 0xC40 */ UiSpriteState entries[6];
    u8 unkF88[0x118];
    /* 0x10A0 */ UiSpriteState auxiliary[2];
    /* 0x11B8 */ UiSpriteState headings[2];
};
typedef char SelectionNotificationOffsetsCheck[
    offsetof(SelectionNotificationState, entries) == 0xC40 &&
    offsetof(SelectionNotificationState, auxiliary) == 0x10A0 &&
    offsetof(SelectionNotificationState, headings) == 0x11B8 &&
    sizeof(SelectionNotificationState) == 0x12D0 ? 1 : -1];
#endif
