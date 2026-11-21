#include "camp/RenderCtx.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" {

void gpuWriteTextureCommand(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g);
void dataSubmitSelectedPresetBlock(s32 enable);

/* Turns the texture binding on or off, unless it is already in that state. */
static void setBindingState(RenderCtx *context, u8 state)
{
    if (context->selectedTextureState != state) {
        dataSubmitSelectedPresetBlock(state);
        context->selectedTextureState = state;
    }
}

/* Switches the context to a new texture: applies its settings when it changed (or a reload
 * was requested), then turns the binding on for a texture and off without one. */
void renderCtxSelectTexture(RenderCtx *context, AsdTexture *texture)
{
    if (context->selectedTextureDirty != 0 || context->selectedTexture != texture) {
        context->selectedTexture = texture;
        if (texture != NULL) {
            gpuWriteTextureCommand(texture->dimensions.width, texture->dimensions.height, texture->image.hardwareFormat,
                         texture->image.physicalAddress, texture->unk38, texture->unk3c, texture->unk40);
            context->selectedTextureState = 3;
        }
    }
    context->selectedTextureDirty = 0;
    if (texture == NULL) {
        setBindingState(context, 0);
    } else {
        setBindingState(context, 1);
    }
}

} /* extern "C" */
