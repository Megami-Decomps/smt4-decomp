#include "camp/RenderCtx.h"
#include "camp/RenderCtxTitle.h"

/* The context's seven render-state stacks as one array (D, E, F, A, C, G, B; see renderStackPushIndexed). */
struct RenderStateBank {
    u8 unk0000[0x11ec];
    RenderStateStack stacks[7]; // 0x11ec
};
typedef char RenderStateBankStackBCheck[offsetof(RenderStateBank, stacks[6]) == offsetof(RenderCtx, stackB) ? 1 : -1];

/* Inline copy of renderStackPushIndexed: pushes on the selected stack and applies a changed state. */
static __inline void renderCtxPushIndexed(RenderStateBank *context, s32 index, s32 state)
{
    renderStackPush(&context->stacks[index], state);
}

extern "C" {

/* Pushes a render state on the title scene's last stack (B); when it changes (or the stack is dirty) the new state is applied. */
void renderStatePush(s32 value)
{
    renderCtxPushIndexed(reinterpret_cast<RenderStateBank *>(g_titleScene), 6, value);
}

} /* extern "C" */
