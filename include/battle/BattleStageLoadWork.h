#ifndef BATTLE_BATTLE_STAGE_LOAD_WORK_H
#define BATTLE_BATTLE_STAGE_LOAD_WORK_H
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include <stddef.h>

struct BattleStageLoadWork {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 state;
    /* 0x0C */ s32 frame;
    /* 0x10 */ s32 stage;
    /* 0x14 */ s32 variant;
    /* 0x18 */ AsdMdlObject *model;
    /* 0x1C */ u8 environmentLoaded;
};
typedef char BattleStageLoadWorkOffsets[offsetof(BattleStageLoadWork, state) == 8 &&
    offsetof(BattleStageLoadWork, stage) == 0x10 &&
    offsetof(BattleStageLoadWork, model) == 0x18 &&
    offsetof(BattleStageLoadWork, environmentLoaded) == 0x1C &&
    sizeof(BattleStageLoadWork) == 0x20 ? 1 : -1];
#endif
