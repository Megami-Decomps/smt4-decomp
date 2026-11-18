/* IV: the status panel of one party member (frame, level, HP/MP gauges, ailment icons), drawn by statusStripDraw
 * and statusStripDrawAilments. Observed fields; the object is at least 0x54 bytes. */
#ifndef STATUS_STATUSSTRIP_H
#define STATUS_STATUSSTRIP_H

#include "common.h"
#include <stddef.h>

struct StatusStrip {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 scroll;
    /* 0x1C */ s32 cursor;           /* which of the member's ailments is shown */
    /* 0x20 */ u8 hidden;            /* the panel's contents are not drawn */
    /* 0x21 */ u8 emptyFrame;        /* a hidden large panel still draws its empty frame */
    /* 0x22 */ u8 isPlayerVariant;   /* the large layout */
    /* 0x23 */ u8 dimmed;            /* the icon is drawn at 32% opacity under its own overlay */
    /* 0x24 */ u8 unk24;             /* selects an overlay */
    /* 0x25 */ u8 selected;
    /* 0x26 */ u8 unk26;
    /* 0x27 */ u8 targeted;
    /* 0x28 */ u8 unk28;             /* selects an overlay */
    /* 0x29 */ u8 unk29;             /* selects an overlay */
    /* 0x2A */ u8 unk2A[2];
    /* 0x2C */ s32 originX;
    /* 0x30 */ s32 originY;
    /* 0x34 */ s32 member;           /* unit index, negative for the player */
    /* 0x38 */ u8 unk38[8];
    /* 0x40 */ s32 hpChange;         /* pending change shown on the HP gauge */
    /* 0x44 */ s32 mpChange;
    /* 0x48 */ u8 tinted;            /* draws the pulsing element tint */
    /* 0x49 */ u8 unk49[3];
    /* 0x4C */ s32 tintElement;
    /* 0x50 */ u32 tintPhase;
};

typedef char StatusStripLayoutCheck[
    offsetof(StatusStrip, scroll) == 0x18 && offsetof(StatusStrip, isPlayerVariant) == 0x22 &&
    offsetof(StatusStrip, originX) == 0x2C && offsetof(StatusStrip, member) == 0x34 &&
    offsetof(StatusStrip, hpChange) == 0x40 && offsetof(StatusStrip, tinted) == 0x48 &&
    offsetof(StatusStrip, tintPhase) == 0x50 ? 1 : -1];

#endif
