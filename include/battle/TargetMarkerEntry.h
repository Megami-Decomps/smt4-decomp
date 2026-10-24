/* One target cursor marker of the battle target selection (five per group). */
#ifndef BATTLE_TARGETMARKERENTRY_H
#define BATTLE_TARGETMARKERENTRY_H

#include "common.h"

class TargetMarkerEntry {
public:
    TargetMarkerEntry();

    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ u8 unk08[7];
    /* 0x0F */ u8 visible;
};

typedef char TargetMarkerEntrySizeCheck[sizeof(TargetMarkerEntry) == 0x10 ? 1 : -1];

#endif
