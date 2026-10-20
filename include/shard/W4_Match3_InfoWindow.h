/* The info window behind g_infoWin (Apocalypse): a small popup that shows a message sprite. */
#ifndef SHARD_W4_MATCH3_INFOWINDOW_H
#define SHARD_W4_MATCH3_INFOWINDOW_H

#include "common.h"

typedef struct InfoWindow {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ u32 state;
    /* 0x00C */ u8 unk00C[4];
    /* 0x010 */ u32 timer;
    /* 0x014 */ u8 unk014[0xC];
    /* 0x020 */ u32 active;
    /* 0x024 */ u32 argA;
    /* 0x028 */ u32 argB;
    /* 0x02C */ u8 unk02C[4];
    /* 0x030 */ u8 shown;
    /* 0x031 */ u8 unk031[2];
    /* 0x033 */ u8 style;
    /* 0x034 */ u8 unk034[0x20];
    /* 0x054 */ u8 sprite[0x2D9];
    /* 0x32D */ u8 unk32D;
} InfoWindow;

extern "C" InfoWindow *g_infoWin;

#endif
