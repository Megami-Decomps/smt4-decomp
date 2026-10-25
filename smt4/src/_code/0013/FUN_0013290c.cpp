#include "shard/W6_W6Match1_LightRender.h"

extern "C" {
extern LightCount g_asdLightCount;
void FUN_002ab92c(LightRenderContext* context, LightRenderParameters* argument, s32 force);
void FUN_002c4e98(u32 context);
void nw_gfx_RenderContext_ResetState_2B7478(LightRenderContext* context);
void FUN_002ab8c4(LightCommandBuffer* buffer);

void FUN_0013290c(LightRenderOwner* owner, LightRenderParameters* argument)
{
    LightRenderContext* context = owner->context;
    LightCount* lights = &g_asdLightCount;
    if (lights->render.active != 0 && lights->render.dirty != 0) {
        FUN_002ab92c(context, argument, 1);
        FUN_002c4e98(lights->render.context);
        nw_gfx_RenderContext_ResetState_2B7478(context);
    }
    FUN_002ab92c(context, argument, 1);
    FUN_002ab8c4(lights->render.buffer);
}
}
