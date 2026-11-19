#include "camp/RenderCtx.h"
#include "text/TextDraw.h"
#include "camp/RenderCtxTitle.h"

struct TerminalDrawWork { u8 unk00[9]; u8 nameIndex; u8 unk0a[6]; s32 state; };
struct TerminalDrawName { u8 unk00[6]; char text[30]; };
extern "C" {
extern TerminalDrawWork *g_tmnl;
extern TerminalDrawName g_tmnlEntries[];
s32 renderCtxPackPassFlags(u32 group, u32 index);

// Draw the terminal name during the active sequence and refresh the scene's scoped render state.
u32 FUN_0021f354()
{
    TerminalDrawWork *work = g_tmnl;
    if ((u32)(work->state - 1) < 98) {
        if (work->state == 1)
            textDrawString(150.0f, 0.0f, 0.0f, 3, 1.0f, -1, 1.0f, g_tmnlEntries[work->nameIndex].text);
        RenderCtx *scene = g_titleScene;
        renderCtxPushA(scene, renderCtxPackPassFlags(1, 0));
        renderStackPop(&g_titleScene->stackA);
    }
    return 0;
}
}
