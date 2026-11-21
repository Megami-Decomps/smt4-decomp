#include "camp/RenderCtx.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" {
void gpuSubmitTextureBindCommands(u32 width, u32 height, u32 format, u32 address);
void dataSubmitSelectedPresetBlock(s32 enable);

/* Selects the texture-environment mode, unless it is already active. */
static void setBindingState(RenderCtx *context, u8 state)
{
    if (context->selectedTextureState != state) {
        dataSubmitSelectedPresetBlock(state);
        context->selectedTextureState = state;
    }
}

/* Binds a texture (skipped if unchanged and not forced) and selects the mode. */
void renderCtxBindTextureMode(RenderCtx *context, AsdTexture *texture, u8 mode)
{
    if (context->selectedTextureDirty != 0 || context->selectedTexture != texture) {
        context->selectedTexture = texture;
        if (texture != NULL) {
            gpuSubmitTextureBindCommands(texture->dimensions.width, texture->dimensions.height, texture->image.hardwareFormat,
                         texture->image.physicalAddress);
            context->selectedTextureState = 3;
        }
    }
    context->selectedTextureDirty = 0;
    setBindingState(context, mode);
}

} /* extern "C" */
