#include "result/ResultInput.h"

extern "C" {
s32 modelPairTryBind(ResultInputWork *);
s32 vec2GetXInt(const ResultInputPosition *);
s32 vec2GetYInt(const ResultInputPosition *);
void FUN_003b49a0(ResultInputWork *, s32, s32);
void FUN_003b5f30(ResultInputWork *, s32, s32);
void FUN_003b6a5c(ResultInputWork *, s32, s32);
void FUN_003b7084(ResultInputWork *, s32, s32);
extern ResultInputWork *g_result;

/* Dispatch the active result-screen coordinate control. */
u32 FUN_001c8974(void)
{
    ResultInputWork *work = g_result;
    if (work != NULL) {
        if (modelPairTryBind(work) == 0) {
            return 0;
        }
        if (work->state <= 7) {
            FUN_003b5f30(work, 0, 0);
        }
        switch (work->state) {
        case 10: {
            s32 x = vec2GetXInt(&work->rewardPosition);
            s32 y = vec2GetYInt(&work->rewardPosition);
            FUN_003b7084(work, x, y);
            break;
        }
        case 18: {
            s32 x = vec2GetXInt(&work->detailPosition);
            s32 y = vec2GetYInt(&work->detailPosition);
            FUN_003b6a5c(work, x, y);
            break;
        }
        case 17: {
            s32 x = vec2GetXInt(&work->menuPosition);
            s32 y = vec2GetYInt(&work->menuPosition);
            FUN_003b49a0(work, x, y);
            break;
        }
        }
    }
    return 0;
}
}
