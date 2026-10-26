#include "camp/RenderCtx.h"

struct RenderStateBank {
    u8 unk0000[0x11ec];
    RenderStateStack stacks[7]; // 0x11ec
};

extern "C" {
// Push a value onto the selected render-state stack and apply changed state.
void renderStackPushIndexed(RenderStateBank *context, s32 index, s32 state)
{
    renderStackPush(&context->stacks[index], state);
}
}
