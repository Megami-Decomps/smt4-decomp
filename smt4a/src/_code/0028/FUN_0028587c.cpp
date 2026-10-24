#include "camp/RenderCtx.h"
#include "shard/W5_W5Match7_UiQuest.h"

extern "C" {
extern RenderCtxA *g_renderCtx;
s32 FUN_001692ac(s32 first, s32 second);
void FUN_0022ecfc(void);

/* Draws quest-menu states that have visible content inside a temporary render-state scope. */
u32 FUN_0028587c(void)
{
    UiQuestApoc *work = g_uiQuest;
    if (work->unk93E == 0) {
        RenderCtxA *context = g_renderCtx;
        s32 state = FUN_001692ac(1, 0);
        renderStackPush(&context->stackA, state);
        switch (work->menuState) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        case 14:
        case 15:
        case 16:
        case 20:
        case 21:
        case 22:
        case 23:
        case 24:
        case 25:
        case 26:
        case 27:
        case 30:
            FUN_0022ecfc();
            break;
        }
        renderStackPop(&g_renderCtx->stackA);
    }
    return 0;
}
}
