#include "shard/W6_W6Match1_LightRender.h"
#include "code/Code0017_Smt4a.h"

extern "C" {
extern LightCount g_asdLightCount;
void gfxUploadShaderMatricesIfChanged(LightRenderContext* context, LightRenderParameters* argument, s32 force);
void asdGxCommandListReplayCopy(u32 context);
void nw_gfx_RenderContext_ResetState_2B7478(LightRenderContext* context);
void gfxDispatchBufferIfNonEmpty(LightCommandBuffer* buffer);

void gfxFlushLightRenderCommands(LightRenderOwner* owner, LightRenderParameters* argument)
{
    LightRenderContext* context = owner->context;
    LightCount *lights = &g_asdLightCount;
    if (lights->render.active != 0 && lights->render.dirty != 0) {
        gfxUploadShaderMatricesIfChanged(context, argument, 1);
        asdGxCommandListReplayCopy(lights->render.context);
        nw_gfx_RenderContext_ResetState_2B7478(context);
    }
    gfxUploadShaderMatricesIfChanged(context, argument, 1);
    gfxDispatchBufferIfNonEmpty(lights->render.buffer);
}
}
