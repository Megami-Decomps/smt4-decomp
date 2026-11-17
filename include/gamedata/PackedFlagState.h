#ifndef SMT4_GAMEDATA_PACKEDFLAGSTATE_H
#define SMT4_GAMEDATA_PACKEDFLAGSTATE_H

#include "common.h"

struct PackedFlagState {
    /* 0x0000 */ u8 unk00[0x12f0];
    /* 0x12f0 */ u8 flags[1];
};

#endif
