/* One target cursor marker of the battle target selection (five per group). */
#ifndef BATTLE_TARGETMARKERENTRY_H
#define BATTLE_TARGETMARKERENTRY_H

#include "common.h"
#include <stddef.h>

/* A position on a screen, copied as a whole. */
typedef struct ScreenPointF {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
} ScreenPointF;

/* A world point projected to a screen: the screen position and the view-space depth. */
typedef struct ProjectedPoint {
    /* 0x00 */ ScreenPointF screen;
    /* 0x08 */ f32 depth;
} ProjectedPoint;

class TargetMarkerEntry {
public:
    TargetMarkerEntry();

    /* 0x00 */ ScreenPointF screen;  /* where the target is drawn */
    /* 0x08 */ u8 registered;       /* the demon, or one it links to, is registered */
    /* 0x09 */ u8 status[6];        /* per-target display flags the battle passes in */
    /* 0x0F */ u8 visible;
};

typedef char TargetMarkerEntrySizeCheck[sizeof(TargetMarkerEntry) == 0x10 && sizeof(ProjectedPoint) == 0xC &&
    offsetof(TargetMarkerEntry, registered) == 0x8 && offsetof(TargetMarkerEntry, visible) == 0xF ? 1 : -1];

#endif
