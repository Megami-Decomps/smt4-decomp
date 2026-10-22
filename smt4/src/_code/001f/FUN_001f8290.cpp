#include "common.h"

struct ExperienceReward {
    s32 member;
    s32 experience;
};
struct BattleResultOwner {
    u32 parent; // 0x000
    u32 job; // 0x004
    u8 unk008[0x16c];
    u8 firstDisplay[0x40]; // 0x174
    u8 secondDisplay[0x3c]; // 0x1b4
    ExperienceReward rewards[64]; // 0x1f0
    s32 rewardCount; // 0x3f0
};
extern "C" {
extern void *g_btlUiBlock;
u32 taskCreateDraw(const char *name, u32 priority, u32 workSize, u32 flags, void (*update)(), void (*destroy)(), void *owner, u32 parent);
void callbackNormalizeNegativeResult();
void jobStopChild();
void resultCreateDefault();
void FUN_00214568(void *display);
void FUN_00223360(void *display);
void resultAddExperienceReward(const ExperienceReward *reward);
void btlUiPlaySceneFadeOutWhenReady(void *battleUi);
void btlUiResetWidgetForStateSixteen(void *battleUi);

// Start result display, transfer the pending experience rewards and transition battle UI to results.
void FUN_001f8290(BattleResultOwner *owner)
{
    owner->job = taskCreateDraw("btlResult Calc", 2, 0, 0, callbackNormalizeNegativeResult, jobStopChild, owner, owner->parent);
    resultCreateDefault();
    FUN_00214568(owner->firstDisplay);
    FUN_00223360(owner->secondDisplay);
    for (s32 i = 0; i < owner->rewardCount; ++i)
        resultAddExperienceReward(&owner->rewards[i]);
    owner->rewardCount = 0;
    btlUiPlaySceneFadeOutWhenReady(g_btlUiBlock);
    btlUiResetWidgetForStateSixteen(g_btlUiBlock);
}
}
