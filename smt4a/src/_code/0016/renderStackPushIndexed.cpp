#include "camp/RenderCtx.h"

struct RenderStateBankA {
    u8 unk0000[0x11f8];
    RenderStateStack stacks[7]; // 0x11f8
};

extern "C" {
// Push a value onto the selected render-state stack and apply changed state.
void renderStackPushIndexed(RenderStateBankA *context, s32 index, s32 state)
{
    renderStackPush(&context->stacks[index], state);
}
}
