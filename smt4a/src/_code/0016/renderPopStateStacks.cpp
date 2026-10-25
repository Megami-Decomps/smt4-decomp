#include "camp/RenderCtx.h"
#include "shard/renderPopStateStacks.h"

extern "C" RenderCtxA *g_renderCtx;

extern "C" u32 renderPopStateStacks(void)
{
    /* Access view only: this does not describe the allocation's full size. */
    struct StateStackViewA {
        u8 prefix[0x1318];
        RenderStateStack stacks[3];
    };
    typedef char StateStackViewLayoutCheck[
        offsetof(StateStackViewA, stacks) == 0x1318 &&
        sizeof(RenderStateStack) == 0x20 &&
        sizeof(StateStackViewA) == 0x1378 ? 1 : -1];

    renderStackPop(&reinterpret_cast<StateStackViewA *>(g_renderCtx)->stacks[0]);
    renderStackPop(&reinterpret_cast<StateStackViewA *>(g_renderCtx)->stacks[2]);
    renderStackPop(&reinterpret_cast<StateStackViewA *>(g_renderCtx)->stacks[1]);
    return 1;
}
