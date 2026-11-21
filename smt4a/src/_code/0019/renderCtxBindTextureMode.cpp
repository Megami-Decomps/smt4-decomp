#include "camp/RenderCtx.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "shard/W6_W6Match2_HelpResources.h"

extern "C" {
void gpuSubmitTextureConfig(u32 width, u32 height, u32 format, u32 address);

/* Selects the texture-environment mode, unless it is already active. */
static void setBindingState(RenderCtxA *context, u8 state)
{
    if (context->selectedTextureState != state) {
        dataSubmitSelectedPresetBlock(state);
        context->selectedTextureState = state;
    }
}

/* Binds a texture (skipped if unchanged and not forced) and selects the mode. */
void renderCtxBindTextureMode(RenderCtxA *context, AsdTexture *texture, u8 mode)
{
    if (context->selectedTextureDirty != 0 || context->selectedTexture != texture) {
        context->selectedTexture = texture;
        if (texture != NULL) {
            gpuSubmitTextureConfig(texture->dimensions.width, texture->dimensions.height, texture->image.hardwareFormat,
                         texture->image.physicalAddress);
            context->selectedTextureState = 3;
        }
    }
    context->selectedTextureDirty = 0;
    setBindingState(context, mode);
}

} /* extern "C" */
