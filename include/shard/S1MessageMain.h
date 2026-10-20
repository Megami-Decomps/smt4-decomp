/* The message window state reached through g_messageMain's second word (Apocalypse). */
#ifndef SHARD_S1MESSAGEMAIN_H
#define SHARD_S1MESSAGEMAIN_H

#include "common.h"

typedef struct MessageWindow {
    /* 0x0000 */ u8 unk0000[0x19C5];
    /* 0x19C5 */ u8 mode;
} MessageWindow;

typedef struct MessageMainA {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ MessageWindow *window;
} MessageMainA;

extern "C" MessageMainA g_messageMain;

#endif
