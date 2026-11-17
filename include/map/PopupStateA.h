#ifndef MAP_POPUPSTATEA_H
#define MAP_POPUPSTATEA_H

#include "common.h"
#include <stddef.h>

/* The partner's map popup (Apocalypse only): the comment a party member (or a navigator id such as
 * 0xAD/0xAE/0xBB) makes on the field, kept by g_popupState. A starter sets `state` to the popup
 * kind and `timer` to 0; the per-frame update (FUN_002237a0) shows `message` as `speakerId` on
 * frame 2 and closes the popup after 90 frames. Kinds that cannot start while another popup runs
 * are queued in `pending`. */
typedef struct PopupStateA {
    /* 0x00 */ s32 state;              /* popup kind; 0 when idle */
    /* 0x04 */ s32 timer;              /* frames since the popup started */
    /* 0x08 */ s32 unk08;              /* set by popupStateSetAndShow */
    /* 0x0C */ s32 unk0C;              /* set by popupStateSetAndShow */
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ const char *message;    /* text shown: a message record's text or `text` */
    /* 0x18 */ s32 speakerId;          /* who says it (the selected slot's id; 0 shows as 0xAE) */
    /* 0x1C */ const void *messageData; /* the message record's 0x20-byte data block */
    /* 0x20 */ u32 unk20;
    /* 0x24 */ s8 requested;           /* raised by popupRequest */
    /* 0x25 */ char text[0x48];        /* the message formatted with its arguments */
    /* 0x6D */ u8 unk6D[0x43];
    /* 0xB0 */ s32 pending[16];        /* queued popup kinds, 0 = free (popupQueueInsertUnique) */
    /* 0xF0 */ u32 unkF0;
} PopupStateA;

typedef char PopupStateALayoutCheck[
    offsetof(PopupStateA, message) == 0x14 &&
    offsetof(PopupStateA, speakerId) == 0x18 &&
    offsetof(PopupStateA, messageData) == 0x1C &&
    offsetof(PopupStateA, requested) == 0x24 &&
    offsetof(PopupStateA, text) == 0x25 &&
    offsetof(PopupStateA, pending) == 0xB0 &&
    offsetof(PopupStateA, unkF0) == 0xF0 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif

extern PopupStateA *g_popupState;

#ifdef __cplusplus
}
#endif

#endif
