/* NON_MATCHING: saved registers rotate the global state, context and argument roles; all default instruction order and branches match. */
#include "shard/W6_W6Match1_LightRender.h"

extern "C" {
extern LightCount g_asdLightCount;
void FUN_0018cf00(LightRenderContext* context, LightRenderParameters* argument, s32 force);
void FUN_00167eb0(u32 context);
void nw_gfx_RenderContext_ResetState_2B7478(LightRenderContext* context);
void FUN_0018622c(LightCommandBuffer* buffer);

void FUN_00177474(LightRenderOwner* owner, LightRenderParameters* argument)
{
    LightRenderContext* context = owner->context;
    if (g_asdLightCount.render.active != 0 && g_asdLightCount.render.dirty != 0) {
        FUN_0018cf00(context, argument, 1);
        FUN_00167eb0(g_asdLightCount.render.context);
        nw_gfx_RenderContext_ResetState_2B7478(context);
    }
    FUN_0018cf00(context, argument, 1);
    FUN_0018622c(g_asdLightCount.render.buffer);
}
}
