#include "camp/RenderCtx.h"
#include "code/Code0028.h"
#include "util/BitsAndBytes.h"
#include "camp/RenderCtxTitle.h"

/* The terminal's four slots (0xC bytes each); only the handle and its in-use flag are used here. */
struct TerminalSlot {
    /* 0x0 */ u32 handle;
    /* 0x4 */ u8 inUse;
    /* 0x5 */ u8 unk05[7];
};

struct TerminalScreen {
    /* 0x000 */ u8 unk000[0x10];
    /* 0x010 */ s32 page;
    /* 0x014 */ u8 unk014[0x554];
    /* 0x568 */ TerminalSlot slots[4];
};
typedef char TerminalScreenSlotsOffsetCheck[offsetof(TerminalScreen, slots) == 0x568 ? 1 : -1];

extern "C" {
extern TerminalScreen *g_tmnl;
s32 renderCtxPackPassFlags(u32 first, u32 second);
s32 effectNodeUpdatePlacedChildren(u32 handle);

/* Draws the terminal's slot handles with the three render stacks pushed, for pages 1..98. */
u32 FUN_002e0948(void)
{
    TerminalScreen *screen = g_tmnl;
    if ((u32)(screen->page - 1) < 98) {
        RenderCtx *context = g_titleScene;
        s32 state = gxPackFadeKindAlphaWord(6, 0.0f);
        renderStackPushCounted(context->stacks + RENDER_STACK_C, state);
        renderCtxPushACountedDirect(g_titleScene, renderCtxPackPassFlags(1, 0));
        renderCtxPushB(g_titleScene, packNibblesAndByte(6, 1, 0));
        for (s32 i = 0; i < 4; ++i) {
            if (screen->slots[i].inUse != 0) {
                effectNodeUpdatePlacedChildren(screen->slots[i].handle);
            }
        }
        renderStackPop(g_titleScene->stacks + RENDER_STACK_B);
        renderStackPop(g_titleScene->stacks + RENDER_STACK_A);
        renderStackPop(g_titleScene->stacks + RENDER_STACK_C);
    }
    return 0;
}
}
