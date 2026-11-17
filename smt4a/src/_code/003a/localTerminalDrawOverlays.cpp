#include "Terminal/LocaltmnlMain.h"
#include "camp/RenderCtxA.h"
#include "camp/RenderCtx.h"
#include "util/BitsAndBytes.h"

struct LocalTerminalDrawSlot { u32 handle; u8 visible; u8 unk05[7]; };
struct LocalTerminalDrawState {
    LocalTmnlWork base;
    u32 state;
    u8 unk00c[0x55c];
    LocalTerminalDrawSlot slots[4];
};
extern "C" {
extern LocalTerminalDrawState *g_localTmnl;
s32 renderCtxPackPassFlagsWithAlpha(u32, f32);
s32 renderCtxPackPassFlags(u32, u32);
void effectNodeUpdatePlacedChildren(u32);

u32 localTerminalDrawOverlays()
{
    LocalTerminalDrawState *terminal = g_localTmnl;
    if (terminal->state - 1U < 14) {
        RenderCtxA *render = g_renderCtx;
        s32 state = renderCtxPackPassFlagsWithAlpha(6, 0.0f);
        renderStackPushCounted(&render->additional.stackC, state);
        render = g_renderCtx;
        state = renderCtxPackPassFlags(1, 0);
        renderStackPushCounted(&render->stackA, state);
        render = g_renderCtx;
        state = packNibblesAndByte(6, 1, 0);
        renderStackPushCounted(&render->stackB, state);
        for (s32 i = 0; i < 4; ++i) {
            if (terminal->slots[i].visible)
                effectNodeUpdatePlacedChildren(terminal->slots[i].handle);
        }
        renderStackPop(&g_renderCtx->stackB);
        renderStackPop(&g_renderCtx->stackA);
        renderStackPop(&g_renderCtx->additional.stackC);
    }
    return 0;
}
}
