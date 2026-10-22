/* The info window behind g_infoWin (base game): a popup that slides in a message line. */
#ifndef SHARD_X14_INFOWINDOWSMT4_H
#define SHARD_X14_INFOWINDOWSMT4_H

#include "common.h"
#include <stddef.h>

typedef struct InfoWindowSmt4 {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ s32 state;
    /* 0x00C */ u8 unk00C[4];
    /* 0x010 */ s32 timer;
    /* 0x014 */ s32 textWidth;
    /* 0x018 */ s32 labelX;
    /* 0x01C */ s32 textRight;
    /* 0x020 */ u8 unk020;
    /* 0x021 */ u8 hasText;
    /* 0x022 */ u8 wideText;
    /* 0x023 */ u8 unk023[0xAD];
    /* 0x0D0 */ u8 slideTimer[0xE8];
    /* 0x1B8 */ void *text;
} InfoWindowSmt4;

extern "C" InfoWindowSmt4 *g_infoWin;

typedef char InfoWindowSmt4Offsets[offsetof(InfoWindowSmt4, wideText) == 0x22 &&
    offsetof(InfoWindowSmt4, slideTimer) == 0xD0 && offsetof(InfoWindowSmt4, text) == 0x1B8 ? 1 : -1];

#endif
