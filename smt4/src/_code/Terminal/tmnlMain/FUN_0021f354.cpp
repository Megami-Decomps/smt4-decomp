/* NON_MATCHING: canonical render push/pop recovered; terminal-name VFP literal loads remain scheduled differently. */
#include "camp/RenderCtx.h"
#include "text/TextDraw.h"

struct TerminalDrawWork { u8 unk00[9]; u8 nameIndex; u8 unk0a[6]; s32 state; };
struct TerminalDrawName { u8 unk00[6]; char text[30]; };
extern "C" {
extern TerminalDrawWork *g_tmnl;
extern TerminalDrawName DAT_00432cf8[];
extern RenderCtx *g_titleScene;
s32 FUN_002c5d80(u32 group, u32 index);

// Draw the terminal name during the active sequence and refresh the scene's scoped render state.
u32 FUN_0021f354()
{
    TerminalDrawWork *work = g_tmnl;
    if ((u32)(work->state - 1) < 98) {
        if (work->state == 1)
            FUN_002be5a4(3, -1, DAT_00432cf8[work->nameIndex].text, 150.0f, 0.0f, 0.0f, 1.0f, 1.0f);
        RenderCtx *scene = g_titleScene;
        renderCtxPushA(scene, FUN_002c5d80(1, 0));
        renderStackPop(&g_titleScene->stackA);
    }
    return 0;
}
}
