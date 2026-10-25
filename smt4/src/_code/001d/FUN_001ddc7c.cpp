#include "camp/RenderCtx.h"
#include "shard/W4_W4Match2_UiQuest.h"

extern "C" {
extern RenderCtx *g_titleScene;
s32 FUN_002c5d80(u32 mode, u32 flags);
void FUN_001a6d98();

u32 FUN_001ddc7c()
{
    UiQuest *quest = g_uiQuest;
    if (!quest->panel.unkF2) {
        RenderCtx *render = g_titleScene;
        renderCtxPushA(render, FUN_002c5d80(1, 0));
        switch (quest->state) {
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
            FUN_001a6d98();
            break;
        }
        renderStackPop(&g_titleScene->stackA);
    }
    return 0;
}
}
