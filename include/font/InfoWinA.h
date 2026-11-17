/* The info window (font/InfoWin/InfoWin.cpp, Apocalypse): a small popup that shows a message
 * sprite, kept by g_infoWin. IV's is font/InfoWin.h; Apocalypse inserts four words at 0x20. */
#ifndef FONT_INFOWINA_H
#define FONT_INFOWINA_H

#include "common.h"
#include <stddef.h>
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "ui/UiSpriteState.h"
struct AsdText;

typedef struct InfoWindowA {
    /* 0x000 */ u32 task;
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ u32 state;
    /* 0x00C */ s32 frame;
    /* 0x010 */ u32 timer;
    /* 0x014 */ s32 textWidth;
    /* 0x018 */ s32 labelX;
    /* 0x01C */ s32 textRight;
    /* 0x020 */ u32 active;
    /* 0x024 */ u32 argA;
    /* 0x028 */ u32 argB;
    /* 0x02C */ u32 pending;
    /* 0x030 */ u8 shown;
    /* 0x031 */ u8 hasText;
    /* 0x032 */ u8 wideText;
    /* 0x033 */ u8 style;
    /* 0x034 */ UiResourceParameters parameters;
    /* 0x054 */ UiSpriteState background;
    /* 0x0E0 */ UiSpriteState content;
    /* 0x16C */ UiSpriteState label;
    /* 0x1F8 */ u8 unk1F8[0x8C];
    /* 0x284 */ u32 resetState;
    /* 0x288 */ char message[0xA0];
    /* 0x328 */ void *text;                /* the message text object (spriteHandleCreate) */
    /* 0x32C */ u8 unk32C;
    /* 0x32D */ u8 unk32D;
} InfoWindowA;

extern "C" InfoWindowA *g_infoWin;

typedef char InfoWindowALayoutCheck[offsetof(InfoWindowA, textWidth) == 0x14 &&
    offsetof(InfoWindowA, hasText) == 0x31 && offsetof(InfoWindowA, parameters) == 0x34 &&
    offsetof(InfoWindowA, background) == 0x54 && offsetof(InfoWindowA, content) == 0xE0 &&
    offsetof(InfoWindowA, label) == 0x16C && offsetof(InfoWindowA, resetState) == 0x284 &&
    offsetof(InfoWindowA, message) == 0x288 && offsetof(InfoWindowA, text) == 0x328 &&
    sizeof(InfoWindowA) == 0x330 ? 1 : -1];

#endif
