#ifndef BATTLE_BATTLE_TRANSITION_REQUEST_H
#define BATTLE_BATTLE_TRANSITION_REQUEST_H
#include "common.h"
#include <stddef.h>

struct BattleTransitionRequest {
    /* 0x00 */ u32 state;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u32 firstArgument;
    /* 0x10 */ u32 secondArgument;
};
typedef char BattleTransitionRequestLayoutCheck[
    sizeof(BattleTransitionRequest) == 0x14 &&
    offsetof(BattleTransitionRequest, firstArgument) == 0xC &&
    offsetof(BattleTransitionRequest, secondArgument) == 0x10 ? 1 : -1];
#endif
