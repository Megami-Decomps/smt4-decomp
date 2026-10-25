#include "common.h"

struct BattleStageMode {
    /* 0x00 */ s32 state;
    /* 0x04 */ s32 mode;
};

struct BattleStageModelState {
    /* 0x00 */ u8 unk00[0xa4];
    /* 0xA4 */ BattleStageMode selection;
};

extern "C" BattleStageModelState* g_btlStageModel;

static __inline bool stageHasMode(const BattleStageMode* stage, s32 mode)
{
    return stage->state == 8 && stage->mode == mode;
}

// Map state-8 stage modes to their selection indices; callers still pass their context.
extern "C" s32 btlStageGetModeIndex(u32)
{
    const BattleStageMode* stage = &g_btlStageModel->selection;
    if (stageHasMode(stage, 4))
        return 0;
    if (stageHasMode(stage, 2))
        return 1;
    if (stageHasMode(stage, 3))
        return 2;
    return -1;
}
