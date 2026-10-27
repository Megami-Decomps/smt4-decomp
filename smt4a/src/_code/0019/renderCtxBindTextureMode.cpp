#include "camp/RenderCtx.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"
#include "shard/W6_W6Match2_HelpResources.h"

extern "C" {
void FUN_001ac64c(u32 width, u32 height, u32 format, u32 address);

/* Selects the texture-environment mode, unless it is already active. */
static void setBindingState(RenderCtxA *context, u8 state)
{
    if (context->depthStacks.selectedTextureState != state) {
        dataSubmitSelectedPresetBlock(state);
        context->depthStacks.selectedTextureState = state;
    }
}

/* Binds a texture (skipped if unchanged and not forced) and selects the mode. */
void renderCtxBindTextureMode(RenderCtxA *context, AsdTexture *texture, u8 mode)
{
    if (context->depthStacks.selectedTextureDirty != 0 || context->depthStacks.selectedTexture != texture) {
        context->depthStacks.selectedTexture = texture;
        if (texture != NULL) {
            FUN_001ac64c(texture->dimensions.width, texture->dimensions.height, texture->image.hardwareFormat,
                         texture->image.physicalAddress);
            context->depthStacks.selectedTextureState = 3;
        }
    }
    context->depthStacks.selectedTextureDirty = 0;
    setBindingState(context, mode);
}

} /* extern "C" */
