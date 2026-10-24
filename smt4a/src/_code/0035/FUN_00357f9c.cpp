/* NON_MATCHING: render-stack push scheduling only: retail computes the new-entry address after the previous-entry load (and orders the second push's address adds differently) */
#include "camp/RenderCtx.h"

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

static __inline void pushState(RenderStateStack *stack, s32 state)
{
    s32 previous = stack->entries[stack->count];
    ++stack->count;
    stack->entries[stack->count] = state;
    if (stack->dirty != 0 || previous != state) {
        stack->apply(state);
        stack->dirty = 0;
    }
}

static __inline void pushStateIndexed(RenderStateStack *stack, s32 state)
{
    s32 index = stack->count;
    s32 previous = stack->entries[index];
    index++;
    stack->count = index;
    stack->entries[index] = state;
    if (stack->dirty != 0 || previous != state) {
        stack->apply(state);
        stack->dirty = 0;
    }
}

extern "C" {
extern LocalTermScreen *g_localTmnl;
extern RenderCtxA *g_renderCtx;
s32 FUN_00387580(u32 mode, f32 alpha);
s32 FUN_001692ac(u32 kind, u32 enabled);
s32 packNibblesAndByte(u32 first, u32 second, u32 third);
void FUN_00182540(u32 handle);

/* Draws the terminal's slot handles with three render states pushed, for pages 1..14. */
u32 FUN_00357f9c(void)
{
    LocalTermScreen *screen = g_localTmnl;
    if ((u32)(screen->page - 1) < 14) {
        RenderCtxA *context = g_renderCtx;
        s32 state = FUN_00387580(6, 0.0f);
        pushState(&context->additional.stackC, state);
        context = g_renderCtx;
        state = FUN_001692ac(1, 0);
        pushStateIndexed(&context->stackA, state);
        context = g_renderCtx;
        state = packNibblesAndByte(6, 1, 0);
        pushState(&context->stackB, state);
        for (s32 i = 0; i < 4; ++i) {
            if (screen->slots[i].inUse != 0) {
                FUN_00182540(screen->slots[i].handle);
            }
        }
        renderStackPop(&g_renderCtx->stackB);
        renderStackPop(&g_renderCtx->stackA);
        renderStackPop(&g_renderCtx->additional.stackC);
    }
    return 0;
}
}
