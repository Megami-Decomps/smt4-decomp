/* Apocalypse camera-module statics, including the masks used by the advancement gate. */
#ifndef SMT4A_BATTLE_BTLCAMERASTATICSA_H
#define SMT4A_BATTLE_BTLCAMERASTATICSA_H

#include "battle/btlCamera.h"

struct BtlCameraStaticsA {
    /* 0x00 */ BtlCameraStatics prefix;
    /* 0x34 */ u8 unk34[0x14];
    /* 0x48 */ u64 blocked;
    /* 0x50 */ u64 unitBlocked;
    /* 0x58 */ u64 requiredState;
    /* 0x60 */ u64 requiredMarker;
};

typedef char BtlCameraStaticsALayoutCheck[
    offsetof(BtlCameraStaticsA, blocked) == 0x48 &&
    offsetof(BtlCameraStaticsA, requiredMarker) == 0x60 ? 1 : -1];

/* The pointer-only declaration remains in BtlGlobals.h for units that don't use the statics. */
extern "C" BtlCameraStaticsA g_btlCamera; // declcheck: local (retail addresses the statics from the pointer symbol)

#endif
