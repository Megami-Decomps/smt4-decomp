/* The info window (font/InfoWin/InfoWin.cpp, IV): a popup that slides in a message line, kept by
 * g_infoWin. Apocalypse's is font/InfoWinA.h. */
#ifndef FONT_INFOWIN_H
#define FONT_INFOWIN_H

#include "common.h"
#include <stddef.h>
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/UiSpriteState.h"
struct AsdText;

typedef struct InfoWindow {
    /* 0x000 */ u32 task;                    /* the "InfoWin Calc" process */
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ s32 state;
    /* 0x00C */ s32 frame;
    /* 0x010 */ s32 timer;
    /* 0x014 */ s32 textWidth;               /* the extra width of a long text */
    /* 0x018 */ s32 labelX;
    /* 0x01C */ s32 textRight;
    /* 0x020 */ u8 shown;
    /* 0x021 */ u8 hasText;
    /* 0x022 */ u8 wideText;
    /* 0x023 */ u8 style;
    /* 0x024 */ UiResourceParameters parameters;
    /* 0x044 */ UiSpriteState background;     /* the window; its timer drives the open/close transition */
    /* 0x0D0 */ UiSpriteState content;        /* the sliding label */
    /* 0x15C */ char message[0x5A];
    /* 0x1B6 */ u8 unk1B6[2];
    /* 0x1B8 */ void *text;                /* the message text object (asdTextCreate) */
} InfoWindow;

extern "C" InfoWindow *g_infoWin;

typedef char InfoWindowLayoutCheck[offsetof(InfoWindow, wideText) == 0x22 &&
    offsetof(InfoWindow, parameters) == 0x24 && offsetof(InfoWindow, background) == 0x44 &&
    offsetof(InfoWindow, content) == 0xD0 && offsetof(InfoWindow, message) == 0x15C &&
    offsetof(InfoWindow, text) == 0x1B8 && sizeof(InfoWindow) == 0x1BC ? 1 : -1];

#endif
