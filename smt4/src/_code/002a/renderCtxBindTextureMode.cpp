#include "camp/RenderCtx.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" {
void FUN_0014e850(u32 width, u32 height, u32 format, u32 address);
void FUN_00145d6c(s32 enable);

/* Selects the texture-environment mode, unless it is already active. */
static void setBindingState(RenderCtx *context, u8 state)
{
    if (context->depthStacks.selectedTextureState != state) {
        FUN_00145d6c(state);
        context->depthStacks.selectedTextureState = state;
    }
}

/* Binds a texture (skipped if unchanged and not forced) and selects the mode. */
void renderCtxBindTextureMode(RenderCtx *context, AsdTexture *texture, u8 mode)
{
    if (context->depthStacks.selectedTextureDirty != 0 || context->depthStacks.selectedTexture != texture) {
        context->depthStacks.selectedTexture = texture;
        if (texture != NULL) {
            FUN_0014e850(texture->dimensions.width, texture->dimensions.height, texture->image.hardwareFormat,
                         texture->image.physicalAddress);
            context->depthStacks.selectedTextureState = 3;
        }
    }
    context->depthStacks.selectedTextureDirty = 0;
    setBindingState(context, mode);
}

} /* extern "C" */
