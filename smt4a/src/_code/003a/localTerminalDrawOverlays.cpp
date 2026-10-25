#include "Terminal/LocaltmnlMain.h"
#include "camp/RenderCtx.h"
#include "util/PackNibbles.h"

struct LocalTerminalDrawSlot { u32 handle; u8 visible; u8 unk05[7]; };
struct LocalTerminalDrawState {
    LocalTmnlWork base;
    u32 state;
    u8 unk00c[0x55c];
    LocalTerminalDrawSlot slots[4];
};
extern "C" {
extern LocalTerminalDrawState *g_localTmnl;
extern RenderCtxA *g_renderCtx;
s32 FUN_00387580(u32, f32);
s32 FUN_001692ac(u32, u32);
void FUN_00182540(u32);

u32 localTerminalDrawOverlays()
{
    LocalTerminalDrawState *terminal = g_localTmnl;
    if (terminal->state - 1U < 14) {
        RenderCtxA *render = g_renderCtx;
        s32 state = FUN_00387580(6, 0.0f);
        renderStackPushCounted(&render->additional.stackC, state);
        render = g_renderCtx;
        state = FUN_001692ac(1, 0);
        renderStackPushCounted(&render->stackA, state);
        render = g_renderCtx;
        state = packNibblesAndByte(6, 1, 0);
        renderStackPushCounted(&render->stackB, state);
        for (s32 i = 0; i < 4; ++i) {
            if (terminal->slots[i].visible)
                FUN_00182540(terminal->slots[i].handle);
        }
        renderStackPop(&g_renderCtx->stackB);
        renderStackPop(&g_renderCtx->stackA);
        renderStackPop(&g_renderCtx->additional.stackC);
    }
    return 0;
}
}
