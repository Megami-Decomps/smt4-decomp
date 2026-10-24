/* NON_MATCHING: render-stack pushes: retail loads g_titleScene before the call and computes the stack address after it; armcc hoists the address; push scheduling differs. */
#include "camp/RenderCtx.h"

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

static __inline void pushX(RenderStateStack *st, int state)
{
    int prev = st->entries[st->count]; ++st->count; st->entries[st->count] = state;
    if (st->dirty != 0 || prev != state) {
        st->apply(state);
        st->dirty = 0;
    }
}
extern "C" {
extern TerminalScreen *g_tmnl;
extern RenderCtx *g_titleScene;
s32 FUN_002865c0(u32 mode, f32 alpha);
s32 FUN_002c5d80(u32 first, u32 second);
s32 packNibblesAndByte(u32 first, u32 second, u32 third);
s32 FUN_0028186c(u32 handle);

/* Draws the terminal's slot handles with the three render stacks pushed, for pages 1..98. */
u32 FUN_001fe23c(void)
{
    TerminalScreen *screen = g_tmnl;
    if ((u32)(screen->page - 1) < 98) {
        pushX(&g_titleScene->additional.stackC, FUN_002865c0(6, 0.0f));
        renderCtxPushA(g_titleScene, FUN_002c5d80(1, 0));
        renderCtxPushB(g_titleScene, packNibblesAndByte(6, 1, 0));
        for (s32 i = 0; i < 4; ++i) {
            if (screen->slots[i].inUse != 0) {
                FUN_0028186c(screen->slots[i].handle);
            }
        }
        renderStackPop(&g_titleScene->stackB);
        renderStackPop(&g_titleScene->stackA);
        renderStackPop(&g_titleScene->additional.stackC);
    }
    return 0;
}
}
