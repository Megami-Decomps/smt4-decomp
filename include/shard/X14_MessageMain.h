/* The message system behind g_messageMain (Apocalypse), as the busy checks read it. */
#ifndef SHARD_X14_MESSAGEMAIN_H
#define SHARD_X14_MESSAGEMAIN_H

#include "common.h"
#include <stddef.h>

/* The message window inside the message work area. */
typedef struct MessageMainWindow {
    /* 0x00 */ u8 unk00[0xE8];
    /* 0xE8 */ u8 state;
} MessageMainWindow;

typedef struct MessageMainWork {
    /* 0x0000 */ u8 unk0000[4];
    /* 0x0004 */ s32 messageId;   /* message being shown */
    /* 0x0008 */ u8 unk0008[0x18F8];
    /* 0x1900 */ MessageMainWindow window;
} MessageMainWork;

typedef struct MessageMain {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ MessageMainWork *work;
} MessageMain;

extern "C" MessageMain g_messageMain;

typedef char MessageMainWorkOffsets[offsetof(MessageMainWork, messageId) == 0x4 &&
    offsetof(MessageMainWork, window) == 0x1900 ? 1 : -1];

#endif
