/* The message-window block of Shin Megami Tensei IV, kept by the module global g_messageMain. */
#ifndef SHARD_W4_W4MATCH5B_MESSAGEMAIN_H
#define SHARD_W4_W4MATCH5B_MESSAGEMAIN_H

#include "common.h"

/* An object of the message module (both the state object and the banner begin like this). */
typedef struct MessageObject {
    /* 0x00 */ u8 unk00[0x5f];
    /* 0x5f */ u8 unk5f;
} MessageObject;

typedef struct MessageMain {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ MessageObject *state;   /* the message window's state object */
    /* 0x08 */ MessageObject *banner;
} MessageMain;

extern "C" MessageMain g_messageMain;

#endif
