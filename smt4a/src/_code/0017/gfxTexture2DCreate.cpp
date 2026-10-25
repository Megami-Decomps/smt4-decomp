#include "gfx/Texture2D.h"
#include "shard/gfxTexture2DCreate.h"
extern "C" {
void sysMemClear(void*, u32);
extern void* (*g_gfxAllocateCallback)(u32, u32, u32, u32);

// Allocates a texture with nearest filtering, repeated coordinates, and cleared resource state.
GfxTexture2D* gfxTexture2DCreate(u32 parameter)
{
    GfxTexture2D* texture;
    if (g_gfxAllocateCallback == NULL) {
        texture = NULL;
    } else {
        texture = (GfxTexture2D*)g_gfxAllocateCallback(0x10000, 0x100, 0, sizeof(GfxTexture2D));
        if (texture != NULL) {
            sysMemClear(texture, sizeof(GfxTexture2D));
            texture->filters[1] = 0x2600;
            texture->filters[0] = 0x2600;
            texture->wrapModes[0] = 0x2901;
            texture->wrapModes[1] = 0x2901;
            texture->unk24[0] = 0.0f;
            texture->unk24[1] = 0.0f;
            texture->unk2C = 0;
            texture->unk14 = -1000;
            texture->unk18[2] = 0.0f;
            texture->unk18[1] = 0.0f;
            texture->unk18[0] = 0.0f;
            texture->parameter = parameter;
        }
    }
    return texture;
}
}
