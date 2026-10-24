/* The info window behind g_infoWin (Apocalypse): a small popup that shows a message sprite. */
#ifndef SHARD_W4_MATCH3_INFOWINDOW_H
#define SHARD_W4_MATCH3_INFOWINDOW_H

#include "common.h"
#include "shard/W6_W6Match7_DrawParameters.h"
#include "ui/UiSpriteState.h"
#include <stddef.h>

typedef struct InfoWindow {
    union {
        /* 0x000 */ u8 unk000[8];
        /* 0x000 */ u32 task;
    };
    /* 0x008 */ u32 state;
    union {
        /* 0x00C */ u8 unk00C[4];
        /* 0x00C */ s32 frame;
    };
    /* 0x010 */ u32 timer;
    /* 0x014 */ s32 textWidth;
    /* 0x018 */ s32 labelX;
    /* 0x01C */ s32 textRight;
    /* 0x020 */ u32 active;
    /* 0x024 */ u32 argA;
    /* 0x028 */ u32 argB;
    union {
        /* 0x02C */ u8 unk02C[4];
        /* 0x02C */ u32 pending;
    };
    /* 0x030 */ u8 shown;
    /* 0x031 */ u8 hasText;
    /* 0x032 */ u8 wideText;
    /* 0x033 */ u8 style;
    union {
        /* 0x034 */ u8 unk034[0x20];
        /* 0x034 */ Params002c312c parameters;
    };
    union {
        /* 0x054 */ u8 sprite[0x118];
        struct {
            /* 0x054 */ UiSpriteState background;
            /* 0x0E0 */ UiSpriteState content;
        } sprites;
    };
    union {
        /* 0x16C */ u8 labelSprite[0x1BC];
        /* 0x16C */ UiSpriteState labelAnimation;
        struct {
            u8 prefix[0x118];
            /* 0x284 */ u32 resetState;
        } initialization;
        struct {
            /* 0x16C */ u8 unk16C[0x11C];
            /* 0x288 */ char buffer[0xA0];
        } message;
    };
    /* 0x328 */ void *text;
    /* 0x32C */ u8 unk32C;
    /* 0x32D */ u8 unk32D;
} InfoWindow;

extern "C" InfoWindow *g_infoWin;

typedef char InfoWindowOffsets[offsetof(InfoWindow, textWidth) == 0x14 && offsetof(InfoWindow, hasText) == 0x31 &&
    offsetof(InfoWindow, labelSprite) == 0x16C && offsetof(InfoWindow, text) == 0x328 &&
    offsetof(InfoWindow, unk32D) == 0x32D ? 1 : -1];
typedef char InfoWindowMessageOffsetCheck[offsetof(InfoWindow, message.buffer) == 0x288 &&
    sizeof(InfoWindow) == 0x330 ? 1 : -1];
typedef char InfoWindowInitializationOffsetCheck[
    offsetof(InfoWindow, task) == 0 &&
    offsetof(InfoWindow, pending) == 0x2C &&
    offsetof(InfoWindow, parameters) == 0x34 &&
    offsetof(InfoWindow, sprites.background) == 0x54 &&
    offsetof(InfoWindow, sprites.content) == 0xE0 &&
    offsetof(InfoWindow, labelAnimation) == 0x16C &&
    offsetof(InfoWindow, initialization.resetState) == 0x284 &&
    sizeof(InfoWindow) == 0x330 ? 1 : -1];

#endif
