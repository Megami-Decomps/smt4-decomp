#include "camp/RenderCtx.h"

/* The context's seven render-state stacks as one array (D, E, F, A, C, G, B; see renderStackPushIndexed). */
struct RenderStateBankA {
    u8 unk0000[0x11F8];
    RenderStateStack stacks[7]; // 0x11F8
};
typedef char RenderStateBankAStackBCheck[offsetof(RenderStateBankA, stacks[6]) == offsetof(RenderCtxA, stackB) ? 1 : -1];

/* Inline copy of renderStackPushIndexed: pushes on the selected stack and applies a changed state. */
static __inline void renderCtxPushIndexed(RenderStateBankA *context, s32 index, s32 state)
{
    renderStackPush(&context->stacks[index], state);
}

extern "C" {
extern RenderCtxA *g_renderCtx;

/* Pushes a render state on the draw context's last stack (B); when it changes (or the stack is dirty) the new state is applied. */
void renderStatePush(s32 state)
{
    renderCtxPushIndexed(reinterpret_cast<RenderStateBankA *>(g_renderCtx), 6, state);
}
}
