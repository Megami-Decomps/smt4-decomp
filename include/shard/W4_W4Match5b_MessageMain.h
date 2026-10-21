/* The message-window block of Shin Megami Tensei IV, kept by the module global g_messageMain. */
#ifndef SHARD_W4_W4MATCH5B_MESSAGEMAIN_H
#define SHARD_W4_W4MATCH5B_MESSAGEMAIN_H

#include "common.h"

/* An object of the message module (both the state object and the banner begin like this). */
typedef struct MessageObject {
    /* 0x00 */ union {
        u8 unk00[0x5f];
        struct {
            u8 unk00[0x2c];
            u8 empty; // 0x2c: set when the message identifier is zero
        } message;
        struct {
            u8 unk00[8];
            u8 state; // 0x08
            u8 mode; // 0x09
            u8 unk0a[0x2b];
            u8 pending; // 0x35
        } close;
    };
    /* 0x5f */ u8 unk5f;
} MessageObject;

/* The box word belongs to the aligned message object, but a u32 member in the
 * odd-sized byte union would move the trailing byte at 0x5f. */
static __inline u32 messageObjectGetBox(const MessageObject *object)
{
    return *(const u32 *)(object->unk00 + 4);
}

typedef struct MessageMain {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ MessageObject *state;   /* the message window's state object */
    /* 0x08 */ MessageObject *banner;
} MessageMain;

extern "C" MessageMain g_messageMain;

#endif
