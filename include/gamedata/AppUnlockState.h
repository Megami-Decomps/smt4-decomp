#ifndef GAMEDATA_APPUNLOCKSTATE_H
#define GAMEDATA_APPUNLOCKSTATE_H
#include "common.h"
#include <stddef.h>
struct AppUnlockState {
    /* 0x00 */ u8 unlocked[18];
    /* 0x12 */ u8 newlyUnlocked[18];
    /* 0x24 */ u16 categoryCounts[64];
};
typedef char AppUnlockStateOffsets[offsetof(AppUnlockState, newlyUnlocked) == 0x12 && offsetof(AppUnlockState, categoryCounts) == 0x24 ? 1 : -1];
#endif
