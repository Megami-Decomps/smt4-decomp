#ifndef BATTLE_BATTLEARRANGEMENTLOAD_H
#define BATTLE_BATTLEARRANGEMENTLOAD_H
#include "common.h"
#include <stddef.h>

struct BattleArrangementLoadState {
    /* 0x00 */ s32 state;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u32 frame;
    /* 0x10 */ u32 count;
};

typedef char BattleArrangementLoadStateOffsets[
    sizeof(BattleArrangementLoadState) == 0x14 &&
    offsetof(BattleArrangementLoadState, frame) == 0x0C &&
    offsetof(BattleArrangementLoadState, count) == 0x10 ? 1 : -1];
#endif
