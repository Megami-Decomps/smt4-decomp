/* font/PlaceWin.c: the place-name window shown at the top of the screen (g_placeWin). */
#ifndef FONT_PLACEWIN_H
#define FONT_PLACEWIN_H

#include "common.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/UiSpriteState.h"

struct PlaceWindow {
    /* 0x00 */ u32 job;                  /* the update process */
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u32 state;                /* 0 idle, 1 opening, 2 shown, 3 closing */
    /* 0x0C */ u32 frame;                /* frames since the window opened */
    /* 0x10 */ s8 visible;               /* the text is drawn while it is set */
    /* 0x11 */ u8 unk11[3];
    /* 0x14 */ UiResourceParameters parameters; /* the sprite's animation resource */
    /* 0x34 */ UiSpriteState animation;  /* the window frame sprite; its position places the text */
    /* 0xC0 */ char text[0x80];
};
typedef char PlaceWindowLayoutCheck[
    offsetof(PlaceWindow, job) == 0 && offsetof(PlaceWindow, state) == 0x8 &&
    offsetof(PlaceWindow, frame) == 0xC && offsetof(PlaceWindow, visible) == 0x10 &&
    offsetof(PlaceWindow, parameters) == 0x14 && offsetof(PlaceWindow, animation) == 0x34 &&
    offsetof(PlaceWindow, text) == 0xC0 && sizeof(PlaceWindow) == 0x140 ? 1 : -1];

extern "C" void placeWinStartText(const u8 *text);

#endif
