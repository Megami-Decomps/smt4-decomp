#include "camp/RenderCtx.h"
#include "camp/RenderCtxA.h"
#include "util/BitsAndBytes.h"

/* The terminal screen: its page and four slots (0xC bytes each). */
struct LocalTermScreenSlot {
    /* 0x0 */ u32 handle;
    /* 0x4 */ u8 inUse;
    /* 0x5 */ u8 unk05[7];
};

struct LocalTermScreen {
    /* 0x000 */ u8 unk000[0x8];
    /* 0x008 */ s32 page;
    /* 0x00C */ u8 unk00C[0x55C];
    /* 0x568 */ LocalTermScreenSlot slots[4];
};
typedef char LocalTermScreenSlotsOffsetCheck[offsetof(LocalTermScreen, slots) == 0x568 ? 1 : -1];


extern "C" {
extern LocalTermScreen *g_localTmnl;
s32 renderCtxPackPassFlagsWithAlpha(u32 mode, f32 alpha);
s32 renderCtxPackPassFlags(u32 kind, u32 enabled);
void effectNodeUpdatePlacedChildren(u32 handle);

/* Draws the terminal's slot handles with three render states pushed, for pages 1..14. */
u32 terminalDrawActiveSlotHandles(void)
{
    LocalTermScreen *screen = g_localTmnl;
    if ((u32)(screen->page - 1) < 14) {
        RenderCtxA *context = g_renderCtx;
        s32 state = renderCtxPackPassFlagsWithAlpha(6, 0.0f);
        renderCtxPushC(context, state);
        context = g_renderCtx;
        state = renderCtxPackPassFlags(1, 0);
        renderStackPushCountedDirect(context->stacks + RENDER_STACK_A, state);
        context = g_renderCtx;
        state = packNibblesAndByte(6, 1, 0);
        renderCtxPushB(context, state);
        for (s32 i = 0; i < 4; ++i) {
            if (screen->slots[i].inUse != 0) {
                effectNodeUpdatePlacedChildren(screen->slots[i].handle);
            }
        }
        renderStackPop(g_renderCtx->stacks + RENDER_STACK_B);
        renderStackPop(g_renderCtx->stacks + RENDER_STACK_A);
        renderStackPop(g_renderCtx->stacks + RENDER_STACK_C);
    }
    return 0;
}
}
