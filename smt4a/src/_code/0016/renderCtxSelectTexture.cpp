#include "camp/RenderCtx.h"
#include "AsdSDK/Source/Gfx/Tex/AsdTexture.h"

extern "C" {
void gxSubmitTextureUnitCommands(u32 width, u32 height, u32 format, u32 address, u32, u32, u32);
void dataSubmitSelectedPresetBlock(s32 enabled);

// Upload a changed texture and synchronize whether a texture is selected.
void renderCtxSelectTexture(RenderCtxA *context, AsdTexture *texture)
{
    if (context->selectedTextureDirty || context->selectedTexture != texture) {
        context->selectedTexture = texture;
        if (texture != NULL) {
            gxSubmitTextureUnitCommands(texture->dimensions.width, texture->dimensions.height, texture->image.hardwareFormat,
                         texture->image.physicalAddress, texture->unk38, texture->unk3c, texture->unk40);
            context->selectedTextureState = 3;
        }
    }
    context->selectedTextureDirty = 0;
    u8 state;
    if (texture != NULL) {
        state = 1;
        if (context->selectedTextureState == state)
            return;
    } else {
        state = 0;
        if (context->selectedTextureState == state)
            return;
    }
    dataSubmitSelectedPresetBlock(state);
    context->selectedTextureState = state;
}
}
