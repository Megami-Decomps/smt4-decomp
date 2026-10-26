#include "camp/RenderCtx.h"

extern "C" RenderCtx *g_titleScene;

extern "C" u32 FUN_002b64b8(void)
{
    /* Access view only: this does not describe the allocation's full size. */
    struct StateStackView {
        u8 prefix[0x130c];
        RenderStateStack stacks[3];
    };
    typedef char StateStackViewLayoutCheck[
        offsetof(StateStackView, stacks) == 0x130c &&
        sizeof(RenderStateStack) == 0x20 &&
        sizeof(StateStackView) == 0x136c ? 1 : -1];

    renderStackPop(&reinterpret_cast<StateStackView *>(g_titleScene)->stacks[0]);
    renderStackPop(&reinterpret_cast<StateStackView *>(g_titleScene)->stacks[2]);
    renderStackPop(&reinterpret_cast<StateStackView *>(g_titleScene)->stacks[1]);
    return 1;
}
