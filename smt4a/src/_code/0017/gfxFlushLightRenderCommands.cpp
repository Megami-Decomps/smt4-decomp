#include "shard/W6_W6Match1_LightRender.h"
#include "code/Code0017_Smt4a.h"

extern "C" {
extern LightCount g_asdLightCount;
void FUN_0018cf00(LightRenderContext* context, LightRenderParameters* argument, s32 force);
void FUN_00167eb0(u32 context);
void nw_gfx_RenderContext_ResetState_2B7478(LightRenderContext* context);
void FUN_0018622c(LightCommandBuffer* buffer);

void gfxFlushLightRenderCommands(LightRenderOwner* owner, LightRenderParameters* argument)
{
    LightRenderContext* context = owner->context;
    LightCount *lights = &g_asdLightCount;
    if (lights->render.active != 0 && lights->render.dirty != 0) {
        FUN_0018cf00(context, argument, 1);
        FUN_00167eb0(lights->render.context);
        nw_gfx_RenderContext_ResetState_2B7478(context);
    }
    FUN_0018cf00(context, argument, 1);
    FUN_0018622c(lights->render.buffer);
}
}
