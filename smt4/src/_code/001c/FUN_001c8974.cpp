#include "ui/UiSpriteApi.h"
#include "result/Result.h"

extern "C" {
s32 modelPairTryBind(ResultInputWork *);
void FUN_003b49a0(ResultInputWork *, s32, s32);
void FUN_003b5f30(ResultInputWork *, s32, s32);
void FUN_003b6a5c(ResultInputWork *, s32, s32);
void resultDrawLevelUpPanel(ResultInputWork *, s32, s32);

/* Dispatch the active result-screen coordinate control. */
u32 FUN_001c8974(void)
{
    ResultWork *work = g_result;
    if (work != NULL) {
        if (modelPairTryBind(work) == 0) {
            return 0;
        }
        if (work->state <= 7) {
            FUN_003b5f30(work, 0, 0);
        }
        switch (work->state) {
        case 10: {
            s32 x = vec2GetXInt((const UiSpriteState *)&work->rewardPosition);
            s32 y = vec2GetYInt((const UiSpriteState *)&work->rewardPosition);
            resultDrawLevelUpPanel(work, x, y);
            break;
        }
        case 18: {
            s32 x = vec2GetXInt((const UiSpriteState *)&work->detailPosition);
            s32 y = vec2GetYInt((const UiSpriteState *)&work->detailPosition);
            FUN_003b6a5c(work, x, y);
            break;
        }
        case 17: {
            s32 x = vec2GetXInt((const UiSpriteState *)&work->menuPosition);
            s32 y = vec2GetYInt((const UiSpriteState *)&work->menuPosition);
            FUN_003b49a0(work, x, y);
            break;
        }
        }
    }
    return 0;
}
}
