#include "classes/Obj464cb0.h"

#include "gfx/RenderStateStack.h"

/* The draw context seen as its array of render-state stacks (from 0x11F8: D, E, F, A, C, G, B;
 * RenderCtxA names them one by one). */
struct RenderCtxStacksA {
    /* 0x0000 */ u8 unk0000[0x11F8];
    /* 0x11F8 */ RenderStateStack stacks[7];
};

extern "C" {
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
void FUN_003c8538(s32 arg);
extern RenderCtxStacksA *g_renderCtx;
extern u32 *DAT_005b3fe4;
extern s32 DAT_005b3fe8;
}

static void commandQueuePushPair(u32 first, u32 second)
{
    DAT_005b3fe4[DAT_005b3fe8] = first;
    DAT_005b3fe4[DAT_005b3fe8 + 1] = second;
    DAT_005b3fe8 += 2;
}

/* The current (top) state of render-state stack `index`. */
static __inline u32 renderStackTop(RenderCtxStacksA *context, s32 index)
{
    return context->stacks[index].entries[context->stacks[index].count];
}

/* Posts this object combined with the current state of render stack A (bits 8-11 cleared), and message id 0xf0107. */
void Obj464cb0::post0f0107()
{
    cursorResetFromParam();
    u32 word = renderStackTop(g_renderCtx, 3) & 0xfffff0ff;
    commandQueuePushPair(word | (u32)this, 0xf0107);
    asdModelCommandBlockRelease();
    FUN_003c8538(1);
}
